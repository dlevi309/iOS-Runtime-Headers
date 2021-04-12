/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/

#import <ControlCenterUIKit/ControlCenterUIKit-Structs.h>
#import <ControlCenterUIKit/CCUIBaseSliderView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CCUIContentModuleExpandedStateListener.h>
#import <libobjc.A.dylib/CCUIContentClipping.h>

@class NSArray, UIPanGestureRecognizer, UITapGestureRecognizer, UIHoverGestureRecognizer, UISelectionFeedbackGenerator, NSString;

@interface CCUISteppedSliderView : CCUIBaseSliderView <UIGestureRecognizerDelegate, CCUIContentModuleExpandedStateListener, CCUIContentClipping> {

	NSArray* _stepBackgroundViews;
	NSArray* _separatorViews;
	double _startingHeight;
	float _startingValue;
	BOOL _gestureStartedInside;
	BOOL _valueHasBeenAdjustedForSteppedSlider;
	UIPanGestureRecognizer* _valueChangeGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	unsigned long long _hoverStep;
	BOOL _isHoverHighlighting;
	UIHoverGestureRecognizer* _hoverGestureRecognizer;
	UISelectionFeedbackGenerator* _selectionFeedbackGenerator;
	BOOL _firstStepIsDisabled;
	BOOL _firstStepIsOff;
	unsigned long long _numberOfSteps;
	unsigned long long _step;

}

@property (assign,nonatomic) unsigned long long numberOfSteps;                                             //@synthesize numberOfSteps=_numberOfSteps - In the implementation block
@property (assign,nonatomic) BOOL firstStepIsDisabled;                                                     //@synthesize firstStepIsDisabled=_firstStepIsDisabled - In the implementation block
@property (assign,nonatomic) BOOL firstStepIsOff;                                                          //@synthesize firstStepIsOff=_firstStepIsOff - In the implementation block
@property (assign,nonatomic) unsigned long long step;                                                      //@synthesize step=_step - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isContentClippingRequired,nonatomic,readonly) BOOL contentClippingRequired; 
-(unsigned long long)numberOfSteps;
-(unsigned long long)_stepFromValue:(float)arg1 ;
-(BOOL)isContentClippingRequired;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateValueForPanGestureRecognizer:(id)arg1 withAbsolutePosition:(BOOL)arg2 forContinuedGesture:(BOOL)arg3 ;
-(void)_endTrackingWithGestureRecognizer:(id)arg1 ;
-(unsigned long long)_stepFromValue:(float)arg1 avoidCurrentStep:(BOOL)arg2 ;
-(void)setValue:(float)arg1 andUpdateStep:(BOOL)arg2 ;
-(void)_continueTrackingWithGestureRecognizer:(id)arg1 ;
-(void)setFirstStepIsOff:(BOOL)arg1 ;
-(BOOL)firstStepIsDisabled;
-(void)_createStepViewsForNumberOfSteps:(unsigned long long)arg1 ;
-(void)_beginTrackingWithGestureRecognizer:(id)arg1 ;
-(void)_createSeparatorViewsForNumberOfSteps:(unsigned long long)arg1 ;
-(void)_layoutStepViews;
-(BOOL)firstStepIsOff;
-(void)_handleHoverGestureRecognizer:(id)arg1 ;
-(id)topLevelBlockingGestureRecognizers;
-(void)setValue:(float)arg1 ;
-(void)setNumberOfSteps:(unsigned long long)arg1 ;
-(void)setFirstStepIsDisabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)_updateStepViewVisibility;
-(void)didMoveToWindow;
-(void)setStep:(unsigned long long)arg1 ;
-(float)_valueForTouchLocation:(CGPoint)arg1 ;
-(id)_createSeparatorView;
-(unsigned long long)step;
-(void)_updateStepFromValue:(float)arg1 playHaptic:(BOOL)arg2 ;
-(void)_updateStepFromValue:(float)arg1 playHaptic:(BOOL)arg2 toggleCurrentStep:(BOOL)arg3 ;
-(float)_valueForTouchTranslation:(CGPoint)arg1 ;
-(void)_handleValueChangeGestureRecognizer:(id)arg1 ;
-(float)_valueForPanGestureRecognizer:(id)arg1 withAbsoluteReference:(BOOL)arg2 ;
-(void)contentModuleWillTransitionToExpandedContentMode:(BOOL)arg1 ;
-(float)_valueFromStep:(unsigned long long)arg1 ;
-(void)_handleValueTapGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)_createBackgroundViewForStep:(unsigned long long)arg1 ;
@end

