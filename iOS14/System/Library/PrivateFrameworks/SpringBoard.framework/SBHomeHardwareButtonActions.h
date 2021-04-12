/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>
#import <libobjc.A.dylib/SBHardwareButtonGestureParametersObserver.h>

@protocol SBHardwareButtonInteractionSBHardwareButtonGestureParametersProvider;
@class SBHardwareButtonActionList, SBProximitySensorManager, SBHardwareButtonService, SBHardwareButtonGestureParameters, NSString;

@interface SBHomeHardwareButtonActions : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonGestureParametersObserver> {

	BOOL _screenWasDimOnMenuDown;
	BOOL _dontUnlockOnButtonUp;
	long long _homeButtonType;
	SBHardwareButtonActionList* _buttonUpActions;
	SBHardwareButtonActionList* _buttonUpPostActions;
	unsigned long long _menuButtonHoldStartTime;
	double _menuButtonHoldStartAbsoluteTime;
	SBProximitySensorManager* _proximitySensorManager;
	SBHardwareButtonService* _hardwareButtonService;
	id<SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> _accessibilityButtonInteraction;
	id<SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> _siriButtonInteraction;
	SBHardwareButtonGestureParameters* _accessibilityGestureParameters;
	SBHardwareButtonGestureParameters* _siriGestureParameters;
	BOOL _buttonDown;
	double _currentLongPressDuration;

}

@property (assign,getter=isButtonDown,nonatomic) BOOL buttonDown;              //@synthesize buttonDown=_buttonDown - In the implementation block
@property (assign,nonatomic) double currentLongPressDuration;                  //@synthesize currentLongPressDuration=_currentLongPressDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performLongPressCancelledActions;
-(void)performDoubleTapUpActions;
-(void)configureForwardingToLockButtonActions:(id)arg1 ;
-(void)performAfterMenuButtonUpIsHandledUsingBlock:(/*^block*/id)arg1 ;
-(void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2 ;
-(BOOL)isButtonDown;
-(double)currentLongPressDuration;
-(id)hardwareButtonGestureParameters;
-(void)performTriplePressUpActions;
-(void)_logMenuButtonHoldTime;
-(void)performSinglePressUpActionsWithSourceType:(unsigned long long)arg1 ;
-(void)performDoublePressDownActions;
-(void)performSinglePressUpActions;
-(id)initWitHomeButtonType:(long long)arg1 ;
-(void)setButtonDown:(BOOL)arg1 ;
-(void)setCurrentLongPressDuration:(double)arg1 ;
-(void)performInitialButtonUpActions;
-(void)performWhenMenuButtonIsUpUsingBlock:(/*^block*/id)arg1 ;
-(void)performFinalButtonUpActions;
-(BOOL)_performButtonPreflightActions;
-(void)performLongPressActions;
-(BOOL)_shouldIgnorePressesDueToProxOrIdle:(id*)arg1 ;
-(void)performInitialButtonDownActions;
@end

