/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBHardwareButtonInteraction.h>
#import <libobjc.A.dylib/SBHardwareButtonGestureParametersObserver.h>

@protocol BSInvalidatable;
@class SBBacklightController, SBBannerController, SBLockScreenManager, SBScreenWakeAnimationController, SBSoundController, SBHIDInterface, SpringBoard, NSString;

@interface SBSleepWakeHardwareButtonInteraction : NSObject <SBHardwareButtonInteraction, SBHardwareButtonGestureParametersObserver> {

	BOOL _inhibitNextSinglePressUp;
	BOOL _SOSGestureActive;
	BOOL _fadeOutInProgressFromLockButtonWhileUnlocked;
	BOOL _undidFadeOutFromLockButton;
	BOOL _didPlayLockSound;
	SBBacklightController* _backlightController;
	SBBannerController* _bannerController;
	SBLockScreenManager* _lockScreenManager;
	SBScreenWakeAnimationController* _screenWakeAnimationController;
	SBSoundController* _soundController;
	SBHIDInterface* _HIDInterface;
	SpringBoard* _SBApp;
	double _multiplePressTimeInterval;
	id<BSInvalidatable> _deferOrientationUpdatesAssertion;

}

@property (nonatomic,retain) SBBacklightController * backlightController;                                         //@synthesize backlightController=_backlightController - In the implementation block
@property (nonatomic,retain) SBBannerController * bannerController;                                               //@synthesize bannerController=_bannerController - In the implementation block
@property (nonatomic,retain) SBLockScreenManager * lockScreenManager;                                             //@synthesize lockScreenManager=_lockScreenManager - In the implementation block
@property (nonatomic,retain) SBScreenWakeAnimationController * screenWakeAnimationController;                     //@synthesize screenWakeAnimationController=_screenWakeAnimationController - In the implementation block
@property (nonatomic,retain) SBSoundController * soundController;                                                 //@synthesize soundController=_soundController - In the implementation block
@property (nonatomic,retain) SBHIDInterface * HIDInterface;                                                       //@synthesize HIDInterface=_HIDInterface - In the implementation block
@property (setter=BApp,nonatomic,retain) SpringBoard * SBApp;                                                     //@synthesize SBApp=_SBApp - In the implementation block
@property (assign,nonatomic) double multiplePressTimeInterval;                                                    //@synthesize multiplePressTimeInterval=_multiplePressTimeInterval - In the implementation block
@property (assign,nonatomic) BOOL fadeOutInProgressFromLockButtonWhileUnlocked;                                   //@synthesize fadeOutInProgressFromLockButtonWhileUnlocked=_fadeOutInProgressFromLockButtonWhileUnlocked - In the implementation block
@property (assign,nonatomic) BOOL undidFadeOutFromLockButton;                                                     //@synthesize undidFadeOutFromLockButton=_undidFadeOutFromLockButton - In the implementation block
@property (assign,nonatomic) BOOL didPlayLockSound;                                                               //@synthesize didPlayLockSound=_didPlayLockSound - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> deferOrientationUpdatesAssertion;                                //@synthesize deferOrientationUpdatesAssertion=_deferOrientationUpdatesAssertion - In the implementation block
@property (assign,nonatomic) BOOL inhibitNextSinglePressUp;                                                       //@synthesize inhibitNextSinglePressUp=_inhibitNextSinglePressUp - In the implementation block
@property (assign,setter=OSGestureActive,getter=isSOSGestureActive,nonatomic) BOOL SOSGestureActive;              //@synthesize SOSGestureActive=_SOSGestureActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(SBSoundController *)soundController;
-(void)setSoundController:(SBSoundController *)arg1 ;
-(SBScreenWakeAnimationController *)screenWakeAnimationController;
-(void)setBannerController:(SBBannerController *)arg1 ;
-(SBBacklightController *)backlightController;
-(BOOL)reverseSleepIfNeededAndPossible;
-(void)setSOSGestureActive:(BOOL)arg1 ;
-(BOOL)consumeInitialPressDown;
-(void)setInhibitNextSinglePressUp:(BOOL)arg1 ;
-(BOOL)consumeSinglePressUp;
-(double)multiplePressTimeInterval;
-(void)setMultiplePressTimeInterval:(double)arg1 ;
-(void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2 ;
-(void)setHIDInterface:(SBHIDInterface *)arg1 ;
-(SBLockScreenManager *)lockScreenManager;
-(void)setLockScreenManager:(SBLockScreenManager *)arg1 ;
-(void)setBacklightController:(SBBacklightController *)arg1 ;
-(SBBannerController *)bannerController;
-(id<BSInvalidatable>)deferOrientationUpdatesAssertion;
-(void)setDeferOrientationUpdatesAssertion:(id<BSInvalidatable>)arg1 ;
-(SBHIDInterface *)HIDInterface;
-(void)_performWake;
-(void)_performSleep;
-(BOOL)isSOSGestureActive;
-(void)_playLockSound;
-(void)setFadeOutInProgressFromLockButtonWhileUnlocked:(BOOL)arg1 ;
-(BOOL)undidFadeOutFromLockButton;
-(BOOL)inhibitNextSinglePressUp;
-(void)setScreenWakeAnimationController:(SBScreenWakeAnimationController *)arg1 ;
-(SpringBoard *)SBApp;
-(void)setSBApp:(SpringBoard *)arg1 ;
-(BOOL)fadeOutInProgressFromLockButtonWhileUnlocked;
-(void)setUndidFadeOutFromLockButton:(BOOL)arg1 ;
-(BOOL)didPlayLockSound;
-(void)setDidPlayLockSound:(BOOL)arg1 ;
@end

