/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>
#import <libobjc.A.dylib/SBHardwareButtonGestureParametersObserver.h>

@protocol SBHardwareButtonInteractionSBHardwareButtonGestureParametersProvider;
@class SBApplication, SBProximitySensorManager, SBHardwareButtonService, SBWalletPreArmController, SOSManager, SBHardwareButtonGestureParameters, SBSiriHardwareButtonInteraction, SBAccessibilityHardwareButtonInteraction, SBSleepWakeHardwareButtonInteraction, NSString;

@interface SBLockHardwareButtonActions : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonGestureParametersObserver> {

	long long _homeButtonType;
	SBApplication* _lastLockButtonEventRecipient;
	SBProximitySensorManager* _proximitySensorManager;
	SBHardwareButtonService* _hardwareButtonService;
	SBWalletPreArmController* _walletPreArmController;
	SOSManager* _sosManager;
	SBHardwareButtonGestureParameters* _accessibilityGestureParameters;
	SBHardwareButtonGestureParameters* _siriGestureParameters;
	SBHardwareButtonGestureParameters* _proximitySensorGestureParameters;
	long long _sosTriggerMechanism;
	BOOL _isButtonDown;
	SBSiriHardwareButtonInteraction* _siriButtonInteraction;
	SBAccessibilityHardwareButtonInteraction* _accessibilityButtonInteraction;
	SBSleepWakeHardwareButtonInteraction* _sleepWakeButtonInteraction;
	id<SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> _proximitySensorButtonInteraction;

}

@property (nonatomic,retain) SBSiriHardwareButtonInteraction * siriButtonInteraction;                                                                  //@synthesize siriButtonInteraction=_siriButtonInteraction - In the implementation block
@property (nonatomic,retain) SBAccessibilityHardwareButtonInteraction * accessibilityButtonInteraction;                                                //@synthesize accessibilityButtonInteraction=_accessibilityButtonInteraction - In the implementation block
@property (nonatomic,retain) SBSleepWakeHardwareButtonInteraction * sleepWakeButtonInteraction;                                                        //@synthesize sleepWakeButtonInteraction=_sleepWakeButtonInteraction - In the implementation block
@property (nonatomic,retain) id<SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> proximitySensorButtonInteraction;              //@synthesize proximitySensorButtonInteraction=_proximitySensorButtonInteraction - In the implementation block
@property (nonatomic,readonly) BOOL isButtonDown;                                                                                                      //@synthesize isButtonDown=_isButtonDown - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performSinglePressAction;
-(void)performInitialButtonDownActions;
-(BOOL)performButtonUpPreActions;
-(void)performFinalButtonUpActions;
-(id)hardwareButtonGestureParameters;
-(void)_registeredLockButtonAppsDidChange:(id)arg1 ;
-(BOOL)_sendButtonDownToRegisteredApp;
-(BOOL)isButtonDown;
-(void)_showPowerDownTransientOverlayOnForceReset;
-(BOOL)_sendButtonUpToRegisteredApp;
-(BOOL)_isSOSActive;
-(void)_performSOSDidTriggerActions;
-(BOOL)disallowsSinglePressForReason:(id*)arg1 ;
-(BOOL)disallowsDoublePressForReason:(id*)arg1 ;
-(BOOL)_shouldWaitForDoublePress;
-(BOOL)disallowsTriplePressForReason:(id*)arg1 ;
-(BOOL)disallowsLongPressForReason:(id*)arg1 ;
-(id)_foregroundAppRegisteredForLockButtonEvents;
-(void)_sendButtonEventToApp:(id)arg1 down:(BOOL)arg2 ;
-(void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2 ;
-(id)initWithHomeButtonType:(long long)arg1 proximitySensorManager:(id)arg2 ;
-(BOOL)reverseFadeOutIfNeeded;
-(void)performSOSGestureBeganActions;
-(void)performSOSGestureEndedActions;
-(void)performInitialButtonUpActions;
-(void)performSecondButtonDownActions;
-(void)performLongPressActions;
-(void)performForceResetSequenceBeganActions;
-(void)performSinglePressDidFailActions;
-(void)performDoublePressActions;
-(void)performTriplePressActions;
-(void)performSOSActionsWithUUID:(id)arg1 triggerMechanism:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)performLongPressCancelledActions;
-(BOOL)shouldBeginDoublePressGestureWhileObjectWithinProximity;
-(SBSiriHardwareButtonInteraction *)siriButtonInteraction;
-(void)setSiriButtonInteraction:(SBSiriHardwareButtonInteraction *)arg1 ;
-(SBAccessibilityHardwareButtonInteraction *)accessibilityButtonInteraction;
-(void)setAccessibilityButtonInteraction:(SBAccessibilityHardwareButtonInteraction *)arg1 ;
-(SBSleepWakeHardwareButtonInteraction *)sleepWakeButtonInteraction;
-(void)setSleepWakeButtonInteraction:(SBSleepWakeHardwareButtonInteraction *)arg1 ;
-(id<SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider>)proximitySensorButtonInteraction;
-(void)setProximitySensorButtonInteraction:(id<SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider>)arg1 ;
@end

