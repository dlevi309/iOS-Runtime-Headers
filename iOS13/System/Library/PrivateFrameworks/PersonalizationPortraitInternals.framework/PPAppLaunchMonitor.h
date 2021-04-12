/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class _PASLock;

@interface PPAppLaunchMonitor : NSObject {

	_PASLock* _lock;

}
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(id)registerForAppLaunchWithBundleId:(id)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)deregisterForAppLaunchWithToken:(id)arg1 ;
-(void)_registerForAppChangesIfNeededWithGuardedData:(id)arg1 ;
@end

