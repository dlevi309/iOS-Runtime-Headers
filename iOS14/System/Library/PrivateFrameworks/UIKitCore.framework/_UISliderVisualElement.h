/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UISlider, _UISliderDataModel;


@protocol _UISliderVisualElement
@property (assign,nonatomic,__weak) UISlider * slider; 
@property (nonatomic,retain) _UISliderDataModel * data; 
@required
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
-(CGRect*)trackRectForBounds:(CGRect)arg1;
-(UISlider *)slider;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
-(CGRect*)minimumValueImageRectForBounds:(CGRect)arg1;
-(BOOL)cancelTouchTracking;
-(void)setData:(id)arg1;
-(void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
-(void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
-(void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
-(BOOL)cancelMouseTracking;
-(CGRect*)maximumValueImageRectForBounds:(CGRect)arg1;
-(_UISliderDataModel *)data;
-(BOOL)isAnimatingValueChange;
-(void)setSlider:(id)arg1;
-(CGRect*)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3;
-(void)setValue:(float)arg1 animated:(BOOL)arg2;
-(id)createThumbView;
-(void)didSetValues;
-(id)minTrackView;
-(id)maxTrackView;
-(void)didSetEnabled;
-(id)thumbViewNeue;
-(id)currentThumbImage;
-(void)didSetHighlighted;
-(void)didPerformLayout;
-(id)minValueImageView;
-(id)thumbView;
-(void)didSetSelected;
-(id)maxValueImageView;
-(void)didSetMinimumValueImage;
-(void)didSetShowValue;
-(void)didSetMaximumValueImage;
-(void)didSetMinimumTrackTintColor;
-(void)didSetMaximumTrackTintColor;
-(void)didSetThumbTintColor;
-(void)didSetThumbImageForState:(unsigned long long)arg1;
-(void)didSetMinimumTrackImageForState:(unsigned long long)arg1;
-(void)didSetThumbEnabled;
-(void)didSetMaximumTrackImageForState:(unsigned long long)arg1;
-(UIEdgeInsets*)thumbHitEdgeInsets;
-(id)currentMinimumTrackImage;
-(id)currentMaximumTrackImage;
-(CGRect*)valueTextRectForBounds:(CGRect)arg1;
-(void)didSetThumbImageForStates;
-(void)didSetMinimumTrackImageForStates;
-(void)didSetMaximumTrackImageForStates;
-(void)didChangeMinimumTrackVisibleWithDuration:(double)arg1;

@end

