
#ifndef _LOG_H__
#define _LOG_H__

#include <log4cplus/logger.h>
#include <log4cplus/loggingmacros.h>
#include <log4cplus/configurator.h>
#include <log4cplus/helpers/loglog.h>
#include <log4cplus/helpers/stringhelper.h>

using namespace log4cplus;

Logger loggerA;

void InitLog(const char *prop_file)
{
    PropertyConfigurator::doConfigure(prop_file);
    loggerA = Logger::getInstance("logA");
}

int GetLogLevel()
{
    return loggerA.getLogLevel();
}

#define PRINT_TRACE(message) \
{                           \
    LOG4CPLUS_TRACE(loggerA, LOG4CPLUS_TEXT(message));\
}

#define PRINT_DEBUG(message) \
{                           \
    LOG4CPLUS_DEBUG(loggerA, LOG4CPLUS_TEXT(message));\
}

#define PRINT_INFO(message) \
{                           \
    LOG4CPLUS_INFO(loggerA, LOG4CPLUS_TEXT(message));\
}

#define PRINT_WARN(message) \
{                           \
    LOG4CPLUS_WARN(loggerA, LOG4CPLUS_TEXT(message));\
}

#define PRINT_ERROR(message) \
{                           \
    LOG4CPLUS_ERROR(loggerA, LOG4CPLUS_TEXT(message));\
}

#endif
