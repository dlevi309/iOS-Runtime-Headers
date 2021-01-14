/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@interface LogDumpUtility : NSObject
+(id)getCachesDirectoryPath;
+(id)logFilename:(int)arg1 dumpID:(id)arg2 logNameType:(int)arg3 prefix:(id)arg4 suffix:(id)arg5 ;
+(void)removeOldFilesInDefaultLogDumpPath;
+(void)removeFilesInDirectory:(id)arg1 olderThan:(id)arg2 ;
+(id)filesSortedByTimestamp:(id)arg1 ;
+(BOOL)createDirectory:(id)arg1 ;
+(id)getDefaultLogDumpPath;
@end

