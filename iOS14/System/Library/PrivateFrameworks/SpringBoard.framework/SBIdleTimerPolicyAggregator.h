/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBIdleTimerObserving.h>
#import <libobjc.A.dylib/SBIdleTimerGlobalCoordinatorDelegate.h>

@protocol SBIdleTimer, SBIdleTimerIdleEventHandler;
@class SBBacklightController, SBProximitySensorManager, NSMutableArray, SBIdleTimerGlobalStateMonitor, SBDeviceUnlockAggdLogger, NSString;

@interface SBIdleTimerPolicyAggregator : NSObject <SBIdleTimerObserving, SBIdleTimerGlobalCoordinatorDelegate> {

	SBBacklightController* _backlightController;
	SBProximitySensorManager* _proximitySensorManager;
	id<SBIdleTimer> _idleTimer;
	id<SBIdleTimerIdleEventHandler> _idleEventHandler;
	NSMutableArray* _idleTimerHandlerChain;
	SBIdleTimerGlobalStateMonitor* _globalStateMonitor;
	unsigned _disableAutoDimming : 1;
	SBDeviceUnlockAggdLogger* _logger;

}

@property (setter=_setIdleTimer:,nonatomic,retain) id<SBIdleTimer> idleTimer;                                        //@synthesize idleTimer=_idleTimer - In the implementation block
@property (getter=_backlightController,nonatomic,readonly) SBBacklightController * backlightController;              //@synthesize backlightController=_backlightController - In the implementation block
@property (getter=_logger,nonatomic,readonly) SBDeviceUnlockAggdLogger * logger;                                     //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_logger;
-(void)idleTimerDidResetForUserAttention:(id)arg1 ;
-(void)idleTimerDidRefresh:(id)arg1 ;
-(id)_backlightController;
-(void)_setIdleTimer:(id)arg1 ;
-(id<SBIdleTimer>)idleTimer;
-(void)idleTimerDidExpire:(id)arg1 ;
-(void)idleTimerDidWarn:(id)arg1 ;
-(id)initWithBacklightController:(id)arg1 proximitySensorManager:(id)arg2 idleEventHandler:(id)arg3 ;
-(void)_addIdleTimerHandler:(id)arg1 ;
-(void)_removeIdleTimerHandler:(id)arg1 ;
-(void)idleTimerGlobalCoordinator:(id)arg1 didActivateIdleTimer:(id)arg2 ;
-(id)_initWithBacklightController:(id)arg1 proximitySensorManager:(id)arg2 idleEventHandler:(id)arg3 globalStateMonitor:(id)arg4 unlockLogger:(id)arg5 ;
@end

