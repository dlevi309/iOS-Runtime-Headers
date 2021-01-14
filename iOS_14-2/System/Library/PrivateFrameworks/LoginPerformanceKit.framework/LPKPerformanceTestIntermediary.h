/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

