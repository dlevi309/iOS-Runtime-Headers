/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoginPerformanceKit.framework/LoginPerformanceKit
*/


@interface LPKPerformanceTestIntermediary : NSObject
+(long long)_enableKtrace;
+(BOOL)startUserSwitchTestForType:(unsigned long long)arg1 count:(long long)arg2 username:(id)arg3 password:(id)arg4 ;
+(long long)_disableKtrace;
+(long long)_dumpKtraceResult;
+(BOOL)endUserSwitchTest;
+(void)_removeStoredValues;
+(BOOL)startPerformanceTestForType:(unsigned long long)arg1 count:(long long)arg2 username:(id)arg3 password:(id)arg4 ;
+(id)endPerformanceTestAndDumpResults;
+(void)enableRestrictionlessLoginWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)disableRestrictionlessLoginWithCompletionHandler:(/*^block*/id)arg1 ;
@end

