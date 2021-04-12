/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@interface HDDiagnosticReporter : NSObject
+(void)reportDatabaseMigrationFailureWithContext:(id)arg1 ;
+(void)reportNotFinalSeriesSampleWithClass:(Class)arg1 count:(long long)arg2 datumCount:(long long)arg3 reason:(id)arg4 ;
+(void)reportQueryDurationWithServer:(id)arg1 dataCount:(long long)arg2 duration:(double)arg3 ;
+(void)_reportSnapshotWithType:(id)arg1 subType:(id)arg2 context:(id)arg3 processIdentifier:(id)arg4 thresholdValues:(id)arg5 ;
+(BOOL)_isUnexpectedFailureReason:(int)arg1 ;
@end

