/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)_activate;
-(void)invalidate;
-(void)_invalidate;
-(id)exportedInterface;
-(id)remoteObjectInterface;
-(id)machServiceName;
-(void)activate;
-(long long)defaultDuration;
-(void)setDefaultDuration:(long long)arg1 ;
-(BOOL)shouldEscapeXpcTryCatch;
-(void)_requestToStartAnimationAtDate:(id)arg1 ;
-(void)_dismissUI;
-(void)_timingRestartMinTimer;
-(void)_sendDismissUIWithReason:(long long)arg1 ;
-(void)sendDismissUIWithReason:(long long)arg1 ;
-(void)_timingInvalidateMinTimer;
-(void)_initialViewControllerDidAppear;
-(void)initialViewControllerDidAppear;
-(void)_initialViewControllerDidDisappear;
-(void)initialViewControllerDidDisappear;
-(void)requestAnimationDateWithCompletion:(/*^block*/id)arg1 ;
-(void)requestToShowUIWithHandler:(/*^block*/id)arg1 ;
-(void)requestToStartAnimationAtDate:(id)arg1 ;
-(void)requestToDismissUIHandler:(/*^block*/id)arg1 ;
-(void)_requestToDismissUIHandler:(/*^block*/id)arg1 ;
-(void)onqueue_connectionEstablished;
-(void)onqueue_connectionInterrupted;
-(void)onqueue_connectionInvalidated;
@end

