/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@interface IMLogging : NSObject
+(BOOL)loggingEnabledForLevel:(int)arg1 ;
+(id)dateFormatter;
+(void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(BOOL)arg4 simpleLogString:(id)arg5 format:(id)arg6 arguments:(char*)arg7 time:(unsigned long long)arg8 ;
+(void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 format:(id)arg4 arguments:(char*)arg5 ;
+(void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(BOOL)arg4 format:(id)arg5 ;
+(id)timeFormatter;
+(id)stringForDate;
+(void)enableConsoleLoggingForLevel:(int)arg1 ;
+(void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 format:(id)arg4 ;
+(void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(BOOL)arg4 format:(id)arg5 arguments:(char*)arg6 ;
+(void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(BOOL)arg4 simpleLogString:(id)arg5 ;
+(void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(BOOL)arg4 simpleLogString:(id)arg5 time:(unsigned long long)arg6 ;
+(void)logString:(id)arg1 toFolder:(id)arg2 toFileNamed:(id)arg3 ;
+(id)logFileDirectory;
@end

