/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CSExternalEventHandling.h>
#import <libobjc.A.dylib/SBLiftToWakeObserver.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class SBLiftToWakeController, SBLockScreenManager, SBBacklightController, SBMainDisplayPolicyAggregator, SBIdleTimerGlobalCoordinator, NSString;

@interface SBLiftToWakeManager : NSObject <CSExternalEventHandling, SBLiftToWakeObserver, BSInvalidatable> {

	SBLiftToWakeController* _liftToWakeController;
	SBLockScreenManager* _accessor_lockScreenManager;
	SBBacklightController* _accessor_backlightController;
	SBMainDisplayPolicyAggregator* _accessor_policyAggregator;
	SBIdleTimerGlobalCoordinator* _accessor_idleTimerCoordinator;
	BOOL _gestureWokeScreen;
	BOOL _observing;
	BOOL _significantUserInteractionOccuredSinceWake;
	BOOL _invalidated;

}

@property (setter=_setLiftToWakeController:,getter=_liftToWakeController,nonatomic,retain) SBLiftToWakeController * liftToWakeController;                    //@synthesize liftToWakeController=_liftToWakeController - In the implementation block
@property (setter=_setPolicyAggregator:,getter=_policyAggregator,nonatomic,retain) SBMainDisplayPolicyAggregator * policyAggregator;                         //@synthesize accessor_policyAggregator=_accessor_policyAggregator - In the implementation block
@property (setter=_setLockScreenManager:,getter=_lockScreenManager,nonatomic,retain) SBLockScreenManager * lockScreenManager;                                //@synthesize accessor_lockScreenManager=_accessor_lockScreenManager - In the implementation block
@property (setter=_setBacklightController:,getter=_backlightController,nonatomic,retain) SBBacklightController * backlightController;                        //@synthesize accessor_backlightController=_accessor_backlightController - In the implementation block
@property (setter=_setIdleTimerCoordinator:,getter=_idleTimerCoordinator,nonatomic,retain) SBIdleTimerGlobalCoordinator * idleTimerCoordinator;              //@synthesize accessor_idleTimerCoordinator=_accessor_idleTimerCoordinator - In the implementation block
@property (assign,setter=_setGestureWokeScreen:,getter=_gestureWokeScreen,nonatomic) BOOL gestureWokeScreen;                                                 //@synthesize gestureWokeScreen=_gestureWokeScreen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(BOOL)handleEvent:(id)arg1 ;
-(long long)participantState;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(NSString *)coverSheetIdentifier;
-(id)_lockScreenManager;
-(id)_backlightController;
-(void)_setIdleTimerCoordinator:(id)arg1 ;
-(id)_policyAggregator;
-(void)_setBacklightController:(id)arg1 ;
-(void)_setLockScreenManager:(id)arg1 ;
-(id)_idleTimerCoordinator;
-(void)liftToWakeController:(id)arg1 didObserveTransition:(long long)arg2 deviceOrientation:(long long)arg3 ;
-(id)_liftToWakeController;
-(void)_setPolicyAggregator:(id)arg1 ;
-(void)_ignoredTransition:(long long)arg1 ;
-(id)_initWithLiftToWakeController:(id)arg1 ;
-(void)_backlightWillTurnOn:(id)arg1 ;
-(void)_setGestureWokeScreen:(BOOL)arg1 ;
-(BOOL)_gestureWokeScreen;
-(BOOL)_isLockScreenMainPageVisible;
-(void)_setLiftToWakeController:(id)arg1 ;
@end

