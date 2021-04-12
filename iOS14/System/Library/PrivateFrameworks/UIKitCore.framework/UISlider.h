/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol _UISliderVisualElement;
@class UIView, _UISliderDataModel, NSArray, _UIEdgeFeedbackGenerator, _UIModulationFeedbackGenerator, UIImage, UIColor;

@interface UISlider : UIControl <NSCoding> {

	UIView*<_UISliderVisualElement> _visualElement;
	_UISliderDataModel* _data;
	NSArray* _dummyViews;

}

@property (assign,setter=_setTrackEnabled:,nonatomic) BOOL _trackEnabled; 
@property (setter=_setEdgeFeedbackGenerator:,getter=_edgeFeedbackGenerator,nonatomic,retain) _UIEdgeFeedbackGenerator * edgeFeedbackGenerator; 
@property (setter=_setModulationFeedbackGenerator:,getter=_modulationFeedbackGenerator,nonatomic,retain) _UIModulationFeedbackGenerator * modulationFeedbackGenerator; 
@property (setter=_setEdgeFeedbackBehavior:,getter=_edgeFeedbackBehavior,nonatomic,retain) _UIEdgeFeedbackGenerator * edgeFeedbackBehavior; 
@property (assign,nonatomic) float value; 
@property (assign,nonatomic) float minimumValue; 
@property (assign,nonatomic) float maximumValue; 
@property (nonatomic,retain) UIImage * minimumValueImage; 
@property (nonatomic,retain) UIImage * maximumValueImage; 
@property (assign,getter=isContinuous,nonatomic) BOOL continuous; 
@property (nonatomic,retain) UIColor * minimumTrackTintColor; 
@property (nonatomic,retain) UIColor * maximumTrackTintColor; 
@property (nonatomic,retain) UIColor * thumbTintColor; 
@property (nonatomic,readonly) UIImage * currentThumbImage; 
@property (nonatomic,readonly) UIImage * currentMinimumTrackImage; 
@property (nonatomic,readonly) UIImage * currentMaximumTrackImage; 
+(BOOL)_allowActionsToQueue;
+(BOOL)_allowsUnsupportedMacIdiomBehavior;
+(void)_setAllowsUnsupportedMacIdiomBehavior:(BOOL)arg1 ;
-(void)setTracking:(BOOL)arg1 ;
-(id)maximumTrackImageForState:(unsigned long long)arg1 ;
-(UIImage *)maximumValueImage;
-(float)maximumValue;
-(unsigned long long)_controlEventsForActionTriggered;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(UIColor *)thumbTintColor;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)setThumbTintColor:(UIColor *)arg1 ;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(BOOL)isTracking;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setContinuous:(BOOL)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setMinimumValue:(float)arg1 ;
-(id)thumbImageForState:(unsigned long long)arg1 ;
-(void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(CGRect)minimumValueImageRectForBounds:(CGRect)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMaximumValueImage:(UIImage *)arg1 ;
-(void)setThumbImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)setMinimumTrackTintColor:(UIColor *)arg1 ;
-(BOOL)isAccessibilityElementByDefault;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)_alwaysHandleScrollerMouseEvent;
-(BOOL)cancelTouchTracking;
-(id)_thumbView;
-(void)setValue:(float)arg1 ;
-(BOOL)isContinuous;
-(void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)cancelMouseTracking;
-(id)description;
-(void)layoutSubviews;
-(CGRect)maximumValueImageRectForBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isAnimatingValueChange;
-(void)setMaximumTrackImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(id)minimumTrackImageForState:(unsigned long long)arg1 ;
-(void)setMinimumTrackImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)setMinimumValueImage:(UIImage *)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(void)setMaximumTrackImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(id)createThumbView;
-(void)setMaximumTrackTintColor:(UIColor *)arg1 ;
-(void)_setMaxValue:(float)arg1 ;
-(float)minimumValue;
-(void)_setMinValue:(float)arg1 ;
-(UIColor *)minimumTrackTintColor;
-(void)setMinimumTrackImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(UIImage *)currentThumbImage;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(void)setShowValue:(BOOL)arg1 ;
-(BOOL)_trackEnabled;
-(id)_minTrackView;
-(id)_maxTrackView;
-(id)_minValueView;
-(id)_maxValueView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIImage *)minimumValueImage;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(UIEdgeInsets)_thumbHitEdgeInsets;
-(void)setMaximumValue:(float)arg1 ;
-(id)_thumbViewNeue;
-(UIColor *)maximumTrackTintColor;
-(float)value;
-(void)_setTrackEnabled:(BOOL)arg1 ;
-(void)_installVisualElement;
-(BOOL)_isThumbEnabled;
-(void)_installVisualElement:(id)arg1 ;
-(void)_setEdgeFeedbackGenerator:(id)arg1 ;
-(id)_edgeFeedbackGenerator;
-(UIImage *)currentMinimumTrackImage;
-(UIImage *)currentMaximumTrackImage;
-(void)_setModulationFeedbackGenerator:(id)arg1 ;
-(void)_setThumbEnabled:(BOOL)arg1 ;
-(id)_modulationFeedbackGenerator;
-(id)_edgeFeedbackBehavior;
-(void)_setEdgeFeedbackBehavior:(id)arg1 ;
-(CGRect)valueTextRectForBounds:(CGRect)arg1 ;
-(void)_setUseLookNeue:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_setMinimumTrackVisible:(BOOL)arg1 withDuration:(double)arg2 ;
@end

