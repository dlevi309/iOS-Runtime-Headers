/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBHardwareButtonGestureParametersObserver.h>
#import <libobjc.A.dylib/SBSOSLockGestureObserverDelegate.h>
#import <libobjc.A.dylib/SBSOSClawGestureObserverDelegate.h>
#import <libobjc.A.dylib/SBPressPrecedenceArbiter.h>

@class NSMutableDictionary, SBCombinationHardwareButtonActions, SBClickGestureRecognizer, SBHomeHardwareButton, SBLockHardwareButton, SBVolumeHardwareButton, SBProximitySensorManager, SBBacklightController, SBPressGestureRecognizer, SBSOSClawGestureObserver, SBSOSLockGestureObserver, SBLongPressGestureRecognizer, NSString;

@interface SBCombinationHardwareButton : NSObject <UIGestureRecognizerDelegate, SBHardwareButtonGestureParametersObserver, SBSOSLockGestureObserverDelegate, SBSOSClawGestureObserverDelegate, SBPressPrecedenceArbiter> {

	NSMutableDictionary* _screenshotDisableAssertions;
	SBCombinationHardwareButtonActions* _buttonActions;
	SBClickGestureRecognizer* _screenshotGestureRecognizer;
	SBHomeHardwareButton* _homeHardwareButton;
	SBLockHardwareButton* _lockHardwareButton;
	SBVolumeHardwareButton* _volumeHardwareButton;
	SBProximitySensorManager* _proximitySensorManager;
	SBBacklightController* _backlightController;
	SBPressGestureRecognizer* _sosGestureRecognizer;
	SBSOSClawGestureObserver* _sosClawGestureObserver;
	SBSOSLockGestureObserver* _sosLockGestureObserver;
	SBLongPressGestureRecognizer* _shutdownGestureRecognizer;

}

@property (nonatomic,retain) SBCombinationHardwareButtonActions * buttonActions;                    //@synthesize buttonActions=_buttonActions - In the implementation block
@property (nonatomic,retain) SBClickGestureRecognizer * screenshotGestureRecognizer;                //@synthesize screenshotGestureRecognizer=_screenshotGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) SBHomeHardwareButton * homeHardwareButton;                      //@synthesize homeHardwareButton=_homeHardwareButton - In the implementation block
@property (assign,nonatomic,__weak) SBLockHardwareButton * lockHardwareButton;                      //@synthesize lockHardwareButton=_lockHardwareButton - In the implementation block
@property (assign,nonatomic,__weak) SBVolumeHardwareButton * volumeHardwareButton;                  //@synthesize volumeHardwareButton=_volumeHardwareButton - In the implementation block
@property (assign,nonatomic,__weak) SBProximitySensorManager * proximitySensorManager;              //@synthesize proximitySensorManager=_proximitySensorManager - In the implementation block
@property (assign,nonatomic,__weak) SBBacklightController * backlightController;                    //@synthesize backlightController=_backlightController - In the implementation block
@property (nonatomic,retain) SBPressGestureRecognizer * sosGestureRecognizer;                       //@synthesize sosGestureRecognizer=_sosGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBSOSClawGestureObserver * sosClawGestureObserver;                     //@synthesize sosClawGestureObserver=_sosClawGestureObserver - In the implementation block
@property (nonatomic,retain) SBSOSLockGestureObserver * sosLockGestureObserver;                     //@synthesize sosLockGestureObserver=_sosLockGestureObserver - In the implementation block
@property (nonatomic,retain) SBLongPressGestureRecognizer * shutdownGestureRecognizer;              //@synthesize shutdownGestureRecognizer=_shutdownGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(SBCombinationHardwareButtonActions *)buttonActions;
-(void)setButtonActions:(SBCombinationHardwareButtonActions *)arg1 ;
-(id)initWithScreenshotGestureRecognizer:(id)arg1 shutdownGestureRecognizer:(id)arg2 homeHardwareButton:(id)arg3 lockHardwareButton:(id)arg4 volumeHardwareButton:(id)arg5 proximitySensorManager:(id)arg6 backlightController:(id)arg7 ;
-(SBBacklightController *)backlightController;
-(SBProximitySensorManager *)proximitySensorManager;
-(SBHomeHardwareButton *)homeHardwareButton;
-(SBLockHardwareButton *)lockHardwareButton;
-(SBVolumeHardwareButton *)volumeHardwareButton;
-(void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2 ;
-(id)preemptablePressGestureRecognizers;
-(void)setBacklightController:(SBBacklightController *)arg1 ;
-(void)setProximitySensorManager:(SBProximitySensorManager *)arg1 ;
-(void)sosClawAutoCallInteractiveStateChanged:(id)arg1 interacting:(BOOL)arg2 ;
-(void)sosClawDidBecomeInactive:(id)arg1 ;
-(void)sosClawDidBecomeActive:(id)arg1 ;
-(void)sosClawDidTriggerSOS:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_configureGestureRecognizers;
-(void)_backlightChanged:(id)arg1 ;
-(void)screenshotGesture:(id)arg1 ;
-(void)sosGesture:(id)arg1 ;
-(void)_configureSOSGestureBehaviors;
-(void)shutdownGesture:(id)arg1 ;
-(SBSOSClawGestureObserver *)sosClawGestureObserver;
-(void)_setScreenshotDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)sosLockDidTriggerSOS:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sosLockTriggerDidBecomeActive:(id)arg1 ;
-(void)sosLockTriggerDidBecomeInactive:(id)arg1 ;
-(void)_sosTriggerMechanismDidChange;
-(SBClickGestureRecognizer *)screenshotGestureRecognizer;
-(void)setScreenshotGestureRecognizer:(SBClickGestureRecognizer *)arg1 ;
-(void)setHomeHardwareButton:(SBHomeHardwareButton *)arg1 ;
-(void)setLockHardwareButton:(SBLockHardwareButton *)arg1 ;
-(void)setVolumeHardwareButton:(SBVolumeHardwareButton *)arg1 ;
-(SBPressGestureRecognizer *)sosGestureRecognizer;
-(void)setSosGestureRecognizer:(SBPressGestureRecognizer *)arg1 ;
-(void)setSosClawGestureObserver:(SBSOSClawGestureObserver *)arg1 ;
-(SBSOSLockGestureObserver *)sosLockGestureObserver;
-(void)setSosLockGestureObserver:(SBSOSLockGestureObserver *)arg1 ;
-(SBLongPressGestureRecognizer *)shutdownGestureRecognizer;
-(void)setShutdownGestureRecognizer:(SBLongPressGestureRecognizer *)arg1 ;
@end

