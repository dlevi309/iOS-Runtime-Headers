/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
*/


@protocol OS_os_log;
@class NSObject;

@interface AITransactionLog : NSObject {

	NSObject*<OS_os_log> _log;

}
+(void)logStep:(unsigned long long)arg1 byParty:(unsigned long long)arg2 phase:(unsigned long long)arg3 success:(BOOL)arg4 forBundleID:(id)arg5 description:(id)arg6 ;
+(id)_defaultLog;
+(void)initializeWithLog:(id)arg1 ;
+(void)logScenario:(id)arg1 step:(unsigned long long)arg2 success:(BOOL)arg3 forBundleID:(id)arg4 description:(id)arg5 ;
-(id)_initWithLog:(id)arg1 ;
-(void)_logScenario:(id)arg1 step:(unsigned long long)arg2 success:(BOOL)arg3 forBundleID:(id)arg4 description:(id)arg5 ;
@end

