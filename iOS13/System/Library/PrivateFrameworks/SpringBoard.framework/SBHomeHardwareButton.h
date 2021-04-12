/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBHardwareButtonGestureParametersObserver.h>

@protocol BSInvalidatable;
@class NSMutableSet, NSMutableOrderedSet, SBNotificationBannerDestination, SBHomeHardwareButtonActions, SBHardwareButtonGestureParameters, SBHomeHardwareButtonGestureRecognizerConfiguration, UIGestureRecognizer, NSMutableDictionary, BKSButtonHapticsDefinition, NSString;

@interface SBHomeHardwareButton : NSObject <UIGestureRecognizerDelegate, SBHardwareButtonGestureParametersObserver> {

	id<BSInvalidatable> _fingerDetectEnabledAssertion;
	NSMutableSet* _hintSuppressionAssertions;
	NSMutableOrderedSet* _longPressDurationAssertions;
	BOOL _longPressDidOccur;
	SBNotificationBannerDestination* _bannerDestination;
	SBHomeHardwareButtonActions* _buttonActions;
	SBHardwareButtonGestureParameters* _buttonGestureParameters;
	SBHomeHardwareButtonGestureRecognizerConfiguration* _gestureRecognizerConfiguration;
	UIGestureRecognizer* _screenshotGestureRecognizer;
	long long _homeButtonType;
	long long _maximumPressCount;
	long long _maximumTapCount;
	NSMutableDictionary* _emulatedPerSenderDownCount;
	BKSButtonHapticsDefinition* _buttonDefinition;

}

@property (nonatomic,retain) SBHomeHardwareButtonActions * buttonActions;                                                      //@synthesize buttonActions=_buttonActions - In the implementation block
@property (nonatomic,retain) SBHardwareButtonGestureParameters * buttonGestureParameters;                                      //@synthesize buttonGestureParameters=_buttonGestureParameters - In the implementation block
@property (nonatomic,retain) SBHomeHardwareButtonGestureRecognizerConfiguration * gestureRecognizerConfiguration;              //@synthesize gestureRecognizerConfiguration=_gestureRecognizerConfiguration - In the implementation block
@property (assign,nonatomic,__weak) UIGestureRecognizer * screenshotGestureRecognizer;                                         //@synthesize screenshotGestureRecognizer=_screenshotGestureRecognizer - In the implementation block
@property (assign,nonatomic) long long homeButtonType;                                                                         //@synthesize homeButtonType=_homeButtonType - In the implementation block
@property (assign,nonatomic) long long maximumPressCount;                                                                      //@synthesize maximumPressCount=_maximumPressCount - In the implementation block
@property (assign,nonatomic) long long maximumTapCount;                                                                        //@synthesize maximumTapCount=_maximumTapCount - In the implementation block
@property (assign,nonatomic) BOOL longPressDidOccur;                                                                           //@synthesize longPressDidOccur=_longPressDidOccur - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * emulatedPerSenderDownCount;                                                 //@synthesize emulatedPerSenderDownCount=_emulatedPerSenderDownCount - In the implementation block
@property (nonatomic,retain) BKSButtonHapticsDefinition * buttonDefinition;                                                    //@synthesize buttonDefinition=_buttonDefinition - In the implementation block
@property (assign,nonatomic,__weak) SBNotificationBannerDestination * bannerDestination;                                       //@synthesize bannerDestination=_bannerDestination - In the implementation block
@property (getter=isButtonDown,nonatomic,readonly) BOOL buttonDown; 
@property (nonatomic,readonly) BOOL supportsAcceleratedAppDismiss; 
@property (assign,nonatomic) long long hapticType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)homeButtonType;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)longPress:(id)arg1 ;
-(long long)maximumTapCount;
-(void)setMaximumTapCount:(long long)arg1 ;
-(long long)maximumPressCount;
-(void)setMaximumPressCount:(long long)arg1 ;
-(SBHomeHardwareButtonActions *)buttonActions;
-(void)setButtonActions:(SBHomeHardwareButtonActions *)arg1 ;
-(void)setHomeButtonType:(long long)arg1 ;
-(id)initWithScreenshotGestureRecognizer:(id)arg1 homeButtonType:(long long)arg2 ;
-(SBNotificationBannerDestination *)bannerDestination;
-(void)setBannerDestination:(SBNotificationBannerDestination *)arg1 ;
-(void)configureForwardingToLockButton:(id)arg1 ;
-(BOOL)emulateHomeButtonEventsIfNeeded:(IOHIDEventRef)arg1 ;
-(void)removeLongPressDurationAssertion:(id)arg1 ;
-(void)addLongPressDurationAssertion:(id)arg1 ;
-(void)performAfterMenuButtonUpIsHandledUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isButtonDown;
-(void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2 ;
-(long long)hapticType;
-(BOOL)supportsAcceleratedAppDismiss;
-(void)cancelLongPress;
-(UIGestureRecognizer *)screenshotGestureRecognizer;
-(void)setScreenshotGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(void)performWhenMenuButtonIsUpUsingBlock:(/*^block*/id)arg1 ;
-(void)setHapticType:(long long)arg1 ;
-(void)removeHintSuppressionAssertion:(id)arg1 ;
-(void)addHintSuppressionAssertion:(id)arg1 ;
-(id)initWithScreenshotGestureRecognizer:(id)arg1 homeButtonType:(long long)arg2 buttonActions:(id)arg3 gestureRecognizerConfiguration:(id)arg4 ;
-(void)_createGestureRecognizersWithConfiguration:(id)arg1 ;
-(void)_reconfigureHomeButton;
-(void)_startObservingReconfigurationTriggers;
-(void)_setFingerDetectionEnabled:(BOOL)arg1 ;
-(void)_reconfigureGestureRecognizersForNewMaximumTapCount:(long long)arg1 oldMaximumTapCount:(long long)arg2 ;
-(void)_reconfigureGestureRecognizersForNewMaximumPressCount:(long long)arg1 oldMaximumPressCount:(long long)arg2 ;
-(void)setButtonDefinition:(BKSButtonHapticsDefinition *)arg1 ;
-(void)initialButtonDown:(id)arg1 ;
-(void)initialButtonUp:(id)arg1 ;
-(void)singlePressUp:(id)arg1 ;
-(void)acceleratedSinglePressUp:(id)arg1 ;
-(void)doublePressDown:(id)arg1 ;
-(void)doublePressUp:(id)arg1 ;
-(void)triplePressUp:(id)arg1 ;
-(void)doubleTapUp:(id)arg1 ;
-(void)screenshotRecognizerDidRecognize:(id)arg1 ;
-(SBHomeHardwareButtonGestureRecognizerConfiguration *)gestureRecognizerConfiguration;
-(BKSButtonHapticsDefinition *)buttonDefinition;
-(BOOL)_acceleratedSinglePressRecognizerShouldBegin;
-(BOOL)_isMenuDoublePressAllowed:(id*)arg1 ;
-(BOOL)_longPressGestureRecognizerShouldBegin:(id)arg1 ;
-(void)_terminateHomeButtonEventAtCount:(long long)arg1 ;
-(void)_singlePressUp:(id)arg1 ;
-(void)_cancelGestureRecognizer:(id)arg1 ;
-(BOOL)_processDoubleDownAndDoubleUpSimultaneously;
-(BOOL)_isMenuDoublePressDisabled;
-(SBHardwareButtonGestureParameters *)buttonGestureParameters;
-(void)setButtonGestureParameters:(SBHardwareButtonGestureParameters *)arg1 ;
-(void)setGestureRecognizerConfiguration:(SBHomeHardwareButtonGestureRecognizerConfiguration *)arg1 ;
-(BOOL)longPressDidOccur;
-(void)setLongPressDidOccur:(BOOL)arg1 ;
-(NSMutableDictionary *)emulatedPerSenderDownCount;
-(void)setEmulatedPerSenderDownCount:(NSMutableDictionary *)arg1 ;
@end

