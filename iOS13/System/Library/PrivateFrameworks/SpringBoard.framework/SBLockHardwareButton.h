/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBHardwareButtonGestureParametersObserver.h>
#import <libobjc.A.dylib/SBPressPrecedenceArbiter.h>

@class BSMonotonicReferenceTime, SBLockHardwareButtonActions, SBHardwareButtonGestureParameters, SBPressGestureRecognizer, SBClickGestureRecognizer, SBLongPressGestureRecognizer, UIGestureRecognizer, SBHomeHardwareButton, SBVolumeHardwareButton, NSString;

@interface SBLockHardwareButton : SBHardwareButtonGestureParametersProviderBase <UIGestureRecognizerDelegate, SBHardwareButtonGestureParametersObserver, SBPressPrecedenceArbiter> {

	unsigned long long _aggdStartTime;
	BSMonotonicReferenceTime* _lastPressDownReferenceTime;
	SBLockHardwareButtonActions* _buttonActions;
	SBHardwareButtonGestureParameters* _buttonGestureParameters;
	SBPressGestureRecognizer* _buttonDownGestureRecognizer;
	SBClickGestureRecognizer* _singlePressGestureRecognizer;
	SBLongPressGestureRecognizer* _longPressGestureRecognizer;
	SBClickGestureRecognizer* _doublePressGestureRecognizer;
	SBClickGestureRecognizer* _triplePressGestureRecognizer;
	SBClickGestureRecognizer* _quadruplePressGestureRecognizer;
	UIGestureRecognizer* _screenshotGestureRecognizer;
	SBLongPressGestureRecognizer* _shutdownGestureRecognizer;
	SBHomeHardwareButton* _homeHardwareButton;
	SBVolumeHardwareButton* _volumeHardwareButton;
	long long _homeButtonType;
	unsigned long long _configuredMaximumPressCount;
	unsigned long long _currentPressCount;

}

@property (nonatomic,retain) SBLockHardwareButtonActions * buttonActions;                                  //@synthesize buttonActions=_buttonActions - In the implementation block
@property (nonatomic,retain) SBHardwareButtonGestureParameters * buttonGestureParameters;                  //@synthesize buttonGestureParameters=_buttonGestureParameters - In the implementation block
@property (nonatomic,retain) SBPressGestureRecognizer * buttonDownGestureRecognizer;                       //@synthesize buttonDownGestureRecognizer=_buttonDownGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBClickGestureRecognizer * singlePressGestureRecognizer;                      //@synthesize singlePressGestureRecognizer=_singlePressGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBLongPressGestureRecognizer * longPressGestureRecognizer;                    //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBClickGestureRecognizer * doublePressGestureRecognizer;                      //@synthesize doublePressGestureRecognizer=_doublePressGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBClickGestureRecognizer * triplePressGestureRecognizer;                      //@synthesize triplePressGestureRecognizer=_triplePressGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBClickGestureRecognizer * quadruplePressGestureRecognizer;                   //@synthesize quadruplePressGestureRecognizer=_quadruplePressGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) UIGestureRecognizer * screenshotGestureRecognizer;                     //@synthesize screenshotGestureRecognizer=_screenshotGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) SBLongPressGestureRecognizer * shutdownGestureRecognizer;              //@synthesize shutdownGestureRecognizer=_shutdownGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) SBHomeHardwareButton * homeHardwareButton;                             //@synthesize homeHardwareButton=_homeHardwareButton - In the implementation block
@property (assign,nonatomic,__weak) SBVolumeHardwareButton * volumeHardwareButton;                         //@synthesize volumeHardwareButton=_volumeHardwareButton - In the implementation block
@property (assign,nonatomic) long long homeButtonType;                                                     //@synthesize homeButtonType=_homeButtonType - In the implementation block
@property (assign,nonatomic) unsigned long long configuredMaximumPressCount;                               //@synthesize configuredMaximumPressCount=_configuredMaximumPressCount - In the implementation block
@property (assign,nonatomic) unsigned long long currentPressCount;                                         //@synthesize currentPressCount=_currentPressCount - In the implementation block
@property (nonatomic,readonly) BOOL isButtonDown; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)homeButtonType;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(SBLongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setLongPressGestureRecognizer:(SBLongPressGestureRecognizer *)arg1 ;
-(void)longPress:(id)arg1 ;
-(void)buttonDown:(id)arg1 ;
-(SBLockHardwareButtonActions *)buttonActions;
-(void)setButtonActions:(SBLockHardwareButtonActions *)arg1 ;
-(void)setHomeButtonType:(long long)arg1 ;
-(unsigned long long)currentPressCount;
-(id)initWithScreenshotGestureRecognizer:(id)arg1 shutdownGestureRecognizer:(id)arg2 proximitySensorManager:(id)arg3 homeHardwareButton:(id)arg4 volumeHardwareButton:(id)arg5 homeButtonType:(long long)arg6 ;
-(void)forceResetSequenceDidBegin;
-(SBHomeHardwareButton *)homeHardwareButton;
-(SBVolumeHardwareButton *)volumeHardwareButton;
-(id)hardwareButtonGestureParameters;
-(BOOL)isButtonDown;
-(void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2 ;
-(BOOL)reverseFadeOutIfNeeded;
-(void)_createGestureRecognizers;
-(id)preemptablePressGestureRecognizers;
-(void)SOSTriggerMechanismDidChange;
-(void)cancelLongPress;
-(UIGestureRecognizer *)screenshotGestureRecognizer;
-(void)setScreenshotGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(void)setHomeHardwareButton:(SBHomeHardwareButton *)arg1 ;
-(void)setVolumeHardwareButton:(SBVolumeHardwareButton *)arg1 ;
-(SBLongPressGestureRecognizer *)shutdownGestureRecognizer;
-(void)setShutdownGestureRecognizer:(SBLongPressGestureRecognizer *)arg1 ;
-(void)screenshotRecognizerDidRecognize:(id)arg1 ;
-(SBHardwareButtonGestureParameters *)buttonGestureParameters;
-(void)setButtonGestureParameters:(SBHardwareButtonGestureParameters *)arg1 ;
-(id)initWithScreenshotGestureRecognizer:(id)arg1 shutdownGestureRecognizer:(id)arg2 proximitySensorManager:(id)arg3 homeHardwareButton:(id)arg4 volumeHardwareButton:(id)arg5 buttonActions:(id)arg6 homeButtonType:(long long)arg7 createGestures:(BOOL)arg8 ;
-(void)singlePress:(id)arg1 ;
-(void)doublePress:(id)arg1 ;
-(void)triplePress:(id)arg1 ;
-(void)quadruplePress:(id)arg1 ;
-(void)_reconfigureButtonGestureRecognizers;
-(void)_updatePressCountForDownEvent;
-(void)_reportAggdLoggingForButtonEventIsDownEvent:(BOOL)arg1 ;
-(SBPressGestureRecognizer *)buttonDownGestureRecognizer;
-(void)setButtonDownGestureRecognizer:(SBPressGestureRecognizer *)arg1 ;
-(SBClickGestureRecognizer *)singlePressGestureRecognizer;
-(void)setSinglePressGestureRecognizer:(SBClickGestureRecognizer *)arg1 ;
-(SBClickGestureRecognizer *)doublePressGestureRecognizer;
-(void)setDoublePressGestureRecognizer:(SBClickGestureRecognizer *)arg1 ;
-(SBClickGestureRecognizer *)triplePressGestureRecognizer;
-(void)setTriplePressGestureRecognizer:(SBClickGestureRecognizer *)arg1 ;
-(SBClickGestureRecognizer *)quadruplePressGestureRecognizer;
-(void)setQuadruplePressGestureRecognizer:(SBClickGestureRecognizer *)arg1 ;
-(unsigned long long)configuredMaximumPressCount;
-(void)setConfiguredMaximumPressCount:(unsigned long long)arg1 ;
-(void)setCurrentPressCount:(unsigned long long)arg1 ;
@end

