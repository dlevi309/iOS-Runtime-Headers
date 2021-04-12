/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <Sharing/SFXPCClient.h>

@protocol OS_dispatch_source;
@class NSDate, NSObject;

@interface SFChargingUICoordinator : SFXPCClient {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _animationSPIAdopted;
	BOOL _runningAsCarry;
	NSDate* _uiUpdateMaxDate;
	NSDate* _uiUpdateRequestDate;
	/*^block*/id _uiUpdateHandler;
	BOOL _uiUpdateMinTimeElapsed;
	BOOL _uiUpdateShouldDismiss;
	NSObject*<OS_dispatch_source> _uiUpdateTimer;
	long long _defaultDuration;

}

@property (assign,nonatomic) long long defaultDuration;              //@synthesize defaultDuration=_defaultDuration - In the implementation block
-(void)_invalidate;
-(void)setDefaultDuration:(long long)arg1 ;
-(BOOL)shouldEscapeXpcTryCatch;
-(void)sendDismissUIWithReason:(long long)arg1 ;
-(id)remoteObjectInterface;
-(void)onqueue_connectionInvalidated;
-(id)exportedInterface;
-(void)_initialViewControllerDidDisappear;
-(long long)defaultDuration;
-(id)machServiceName;
-(void)_sendDismissUIWithReason:(long long)arg1 ;
-(void)activate;
-(void)_activate;
-(void)_dismissUI;
-(void)onqueue_connectionInterrupted;
-(void)onqueue_connectionEstablished;
-(void)requestToShowUIWithHandler:(/*^block*/id)arg1 ;
-(void)_timingInvalidateMinTimer;
-(void)_requestToStartAnimationAtDate:(id)arg1 ;
-(void)_initialViewControllerDidAppear;
-(void)initialViewControllerDidDisappear;
-(void)requestToStartAnimationAtDate:(id)arg1 ;
-(void)invalidate;
-(void)initialViewControllerDidAppear;
-(void)_requestToDismissUIHandler:(/*^block*/id)arg1 ;
-(void)requestAnimationDateWithCompletion:(/*^block*/id)arg1 ;
-(void)_timingRestartMinTimer;
-(void)requestToDismissUIHandler:(/*^block*/id)arg1 ;
@end

