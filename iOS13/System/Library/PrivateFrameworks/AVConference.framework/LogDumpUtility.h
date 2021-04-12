/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@interface LogDumpUtility : NSObject
+(id)getCachesDirectoryPath;
+(BOOL)createDirectory:(id)arg1 ;
+(id)logFilename:(int)arg1 dumpID:(id)arg2 logNameType:(int)arg3 prefix:(id)arg4 suffix:(id)arg5 ;
+(id)getDefaultLogDumpPath;
+(void)removeOldFilesInDefaultLogDumpPath;
+(id)filesSortedByTimestamp:(id)arg1 ;
+(void)removeFilesInDirectory:(id)arg1 olderThan:(id)arg2 ;
@end

