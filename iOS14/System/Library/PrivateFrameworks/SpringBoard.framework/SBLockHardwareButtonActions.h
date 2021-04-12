/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_sendButtonDownToRegisteredApp;
-(void)_performSOSDidTriggerActions;
-(void)setSiriButtonInteraction:(SBSiriHardwareButtonInteraction *)arg1 ;
-(BOOL)disallowsDoublePressForReason:(id*)arg1 ;
-(BOOL)disallowsTriplePressForReason:(id*)arg1 ;
-(void)performLongPressCancelledActions;
-(void)performSinglePressDidFailActions;
-(void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2 ;
-(BOOL)isButtonDown;
-(void)performSOSActionsWithUUID:(id)arg1 triggerMechanism:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_showPowerDownTransientOverlayOnForceReset;
-(void)performSecondButtonDownActions;
-(void)performSinglePressAction;
-(void)performForceResetSequenceBeganActions;
-(void)setProximitySensorButtonInteraction:(id<SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider>)arg1 ;
-(id)hardwareButtonGestureParameters;
-(void)performTriplePressActions;
-(void)performSOSGestureBeganActions;
-(BOOL)_shouldWaitForDoublePress;
-(BOOL)_isSOSActive;
-(BOOL)performButtonUpPreActions;
-(void)performSOSGestureEndedActions;
-(id<SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider>)proximitySensorButtonInteraction;
-(void)_sendButtonEventToApp:(id)arg1 down:(BOOL)arg2 ;
-(SBAccessibilityHardwareButtonInteraction *)accessibilityButtonInteraction;
-(BOOL)disallowsSinglePressForReason:(id*)arg1 ;
-(void)setAccessibilityButtonInteraction:(SBAccessibilityHardwareButtonInteraction *)arg1 ;
-(BOOL)disallowsLongPressForReason:(id*)arg1 ;
-(SBSleepWakeHardwareButtonInteraction *)sleepWakeButtonInteraction;
-(BOOL)reverseFadeOutIfNeeded;
-(BOOL)shouldBeginDoublePressGestureWhileObjectWithinProximity;
-(SBSiriHardwareButtonInteraction *)siriButtonInteraction;
-(id)_foregroundAppRegisteredForLockButtonEvents;
-(void)performInitialButtonUpActions;
-(void)_registeredLockButtonAppsDidChange:(id)arg1 ;
-(id)initWithHomeButtonType:(long long)arg1 proximitySensorManager:(id)arg2 ;
-(void)performDoublePressActions;
-(BOOL)_sendButtonUpToRegisteredApp;
-(void)setSleepWakeButtonInteraction:(SBSleepWakeHardwareButtonInteraction *)arg1 ;
-(void)performFinalButtonUpActions;
-(void)performLongPressActions;
-(void)performInitialButtonDownActions;
@end

