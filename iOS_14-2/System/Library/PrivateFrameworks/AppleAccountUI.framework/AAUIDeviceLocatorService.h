/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AAUIDeviceLocatorService : NSObject {

	unsigned long long _lastKnownState;
	BOOL _hasAttemptedToFetchState;
	BOOL _wantsToEnable;
	NSObject*<OS_dispatch_queue> _stateUpdateQueue;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)isEnabled;
-(void)_updateStateAndNotify:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)enableInContext:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)disableInContext:(unsigned long long)arg1 withWipeToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isChangingState;
-(BOOL)isStateKnown;
-(void)refreshCurrentState:(/*^block*/id)arg1 ;
-(void)enableInContext:(unsigned long long)arg1 ;
-(void)disableInContext:(unsigned long long)arg1 withWipeToken:(id)arg2 ;
-(void)setShouldEnable:(BOOL)arg1 ;
-(BOOL)shouldEnable;
@end

