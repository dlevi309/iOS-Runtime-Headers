/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	int _sysdiagnoseDidBeginNotificationToken;
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
-(void)setButtonActions:(SBLockHardwareButtonActions *)arg1 ;
-(UIGestureRecognizer *)screenshotGestureRecognizer;
-(void)setHomeButtonType:(long long)arg1 ;
-(void)longPress:(id)arg1 ;
-(long long)homeButtonType;
-(SBHardwareButtonGestureParameters *)buttonGestureParameters;
-(void)doublePress:(id)arg1 ;
-(unsigned long long)configuredMaximumPressCount;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)setDoublePressGestureRecognizer:(SBClickGestureRecognizer *)arg1 ;
-(void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2 ;
-(BOOL)isButtonDown;
-(void)setConfiguredMaximumPressCount:(unsigned long long)arg1 ;
-(void)SOSTriggerMechanismDidChange;
-(void)buttonDown:(id)arg1 ;
-(void)setButtonDownGestureRecognizer:(SBPressGestureRecognizer *)arg1 ;
-(id)preemptablePressGestureRecognizers;
-(void)quadruplePress:(id)arg1 ;
-(SBClickGestureRecognizer *)singlePressGestureRecognizer;
-(SBHomeHardwareButton *)homeHardwareButton;
-(void)setTriplePressGestureRecognizer:(SBClickGestureRecognizer *)arg1 ;
-(void)cancelLongPress;
-(void)setScreenshotGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(void)_updatePressCountForDownEvent;
-(id)hardwareButtonGestureParameters;
-(SBClickGestureRecognizer *)triplePressGestureRecognizer;
-(SBLongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setLongPressGestureRecognizer:(SBLongPressGestureRecognizer *)arg1 ;
-(void)setShutdownGestureRecognizer:(SBLongPressGestureRecognizer *)arg1 ;
-(void)screenshotRecognizerDidRecognize:(id)arg1 ;
-(SBLockHardwareButtonActions *)buttonActions;
-(BOOL)reverseFadeOutIfNeeded;
-(void)singlePress:(id)arg1 ;
-(void)setButtonGestureParameters:(SBHardwareButtonGestureParameters *)arg1 ;
-(void)setVolumeHardwareButton:(SBVolumeHardwareButton *)arg1 ;
-(void)setQuadruplePressGestureRecognizer:(SBClickGestureRecognizer *)arg1 ;
-(id)initWithScreenshotGestureRecognizer:(id)arg1 shutdownGestureRecognizer:(id)arg2 proximitySensorManager:(id)arg3 homeHardwareButton:(id)arg4 volumeHardwareButton:(id)arg5 buttonActions:(id)arg6 homeButtonType:(long long)arg7 createGestures:(BOOL)arg8 ;
-(void)_reconfigureButtonGestureRecognizers;
-(void)forceResetSequenceDidBegin;
-(void)_reportAggdLoggingForButtonEventIsDownEvent:(BOOL)arg1 ;
-(SBLongPressGestureRecognizer *)shutdownGestureRecognizer;
-(SBClickGestureRecognizer *)quadruplePressGestureRecognizer;
-(void)setSinglePressGestureRecognizer:(SBClickGestureRecognizer *)arg1 ;
-(void)_createGestureRecognizers;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(unsigned long long)currentPressCount;
-(id)initWithScreenshotGestureRecognizer:(id)arg1 shutdownGestureRecognizer:(id)arg2 proximitySensorManager:(id)arg3 homeHardwareButton:(id)arg4 volumeHardwareButton:(id)arg5 homeButtonType:(long long)arg6 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setHomeHardwareButton:(SBHomeHardwareButton *)arg1 ;
-(SBVolumeHardwareButton *)volumeHardwareButton;
-(SBPressGestureRecognizer *)buttonDownGestureRecognizer;
-(void)triplePress:(id)arg1 ;
-(void)dealloc;
-(SBClickGestureRecognizer *)doublePressGestureRecognizer;
-(void)setCurrentPressCount:(unsigned long long)arg1 ;
@end

