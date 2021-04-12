/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/

#import <ControlCenterUIKit/ControlCenterUIKit-Structs.h>
#import <ControlCenterUIKit/CCUIBaseSliderView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIView, UIPanGestureRecognizer, _UIEdgeFeedbackGenerator, NSString;

@interface CCUIContinuousSliderView : CCUIBaseSliderView <UIGestureRecognizerDelegate> {

	UIView* _valueIndicatorClippingView;
	UIView* _backgroundView;
	double _startingLength;
	float _startingValue;
	BOOL _gestureStartedInside;
	UIPanGestureRecognizer* _valueChangeGestureRecognizer;
	_UIEdgeFeedbackGenerator* _edgeFeedbackGenerator;
	double _continuousSliderCornerRadius;
	unsigned long long _axis;

}

@property (assign,nonatomic) double continuousSliderCornerRadius;                //@synthesize continuousSliderCornerRadius=_continuousSliderCornerRadius - In the implementation block
@property (assign,nonatomic) unsigned long long axis;                            //@synthesize axis=_axis - In the implementation block
@property (nonatomic,readonly) UIView * valueIndicatorClippingView;              //@synthesize valueIndicatorClippingView=_valueIndicatorClippingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAxis:(unsigned long long)arg1 ;
-(unsigned long long)axis;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)valueIndicatorClippingView;
-(void)_endTrackingWithGestureRecognizer:(id)arg1 ;
-(void)_continueTrackingWithGestureRecognizer:(id)arg1 ;
-(void)_beginTrackingWithGestureRecognizer:(id)arg1 ;
-(id)topLevelBlockingGestureRecognizers;
-(void)layoutSubviews;
-(double)continuousSliderCornerRadius;
-(void)setContinuousSliderCornerRadius:(double)arg1 ;
-(void)_updateValueForPanGestureRecognizer:(id)arg1 forContinuedGesture:(BOOL)arg2 ;
-(float)filteredValueForValue:(float)arg1 ;
-(float)_valueForTouchTranslation:(CGPoint)arg1 ;
-(void)_handleValueChangeGestureRecognizer:(id)arg1 ;
-(double)sliderLengthForValue:(float)arg1 ;
-(CGPoint)glyphCenter;
@end

