/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol OS_dispatch_queue;
@class _PASLock, NSObject;

@interface PPAppLaunchMonitor : NSObject {

	_PASLock* _lock;
	NSObject*<OS_dispatch_queue> _contextHandlerQueue;

}
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(id)registerForAppLaunchWithBundleId:(id)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)deregisterForAppLaunchWithToken:(id)arg1 ;
-(void)_registerForAppChangesIfNeededWithGuardedData:(id)arg1 ;
@end

