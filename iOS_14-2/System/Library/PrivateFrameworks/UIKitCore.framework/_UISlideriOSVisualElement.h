/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UICursorInteractionDelegate.h>
#import <UIKitCore/_UISliderVisualElement.h>

@class UISlider, _UISliderDataModel, UIImageView, UIView, NSArray, NSString;

@interface _UISlideriOSVisualElement : UIView <_UICursorInteractionDelegate, _UISliderVisualElement> {

	UIImageView* _innerThumbView;
	UIImageView* _minValueImageView;
	UIImageView* _maxValueImageView;
	UIImageView* _thumbView;
	UIImageView* _minTrackView;
	UIImageView* _maxTrackView;
	UIView* _minTrackClipView;
	UIView* _maxTrackClipView;
	SCD_Struct_UI36 _sliderFlags;
	double _hitOffset;
	UIView* _thumbViewNeue;
	NSArray* _trackColors;
	BOOL _trackIsArtworkBased;
	BOOL _thumbIsArtworkBased;
	BOOL _maxColorIsValid;
	_UISliderDataModel* _data;
	UISlider* _slider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) UISlider * slider;               //@synthesize slider=_slider - In the implementation block
@property (nonatomic,retain) _UISliderDataModel * data;              //@synthesize data=_data - In the implementation block
+(id)_modernThumbImageWithTraitCollection:(id)arg1 tintColor:(id)arg2 ;
-(id)maximumValueImage;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(id)thumbTintColor;
-(UISlider *)slider;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)tintColorDidChange;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(UIEdgeInsets)alignmentRectInsets;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)minimumValueImageRectForBounds:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)cancelTouchTracking;
-(void)setData:(_UISliderDataModel *)arg1 ;
-(void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)cancelMouseTracking;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)maximumValueImageRectForBounds:(CGRect)arg1 ;
-(void)_setValue:(float)arg1 andSendAction:(BOOL)arg2 ;
-(void)_sliderAnimationWillStart;
-(void)_sliderAnimationDidStop:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_UISliderDataModel *)data;
-(BOOL)isAnimatingValueChange;
-(void)_contentSizeCategoryChanged:(id)arg1 ;
-(void)setSlider:(UISlider *)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(void)_setupFeedback;
-(void)_setSliderNeedsLayout;
-(void)_listenForContentSizeCategoryChangesIfNecessary;
-(BOOL)_shouldBeginTrackingAtPoint:(CGPoint)arg1 pointInKnob:(CGPoint*)arg2 inKnob:(BOOL*)arg3 ;
-(void)_rebuildControlThumb:(BOOL)arg1 track:(BOOL)arg2 ;
-(void)_updateMaxTrackColorForInitialization:(BOOL)arg1 ;
-(void)_buildTrackArtwork;
-(void)_updateMinimumTrackTintColor;
-(void)_layoutSubviewsForBoundsChange:(BOOL)arg1 ;
-(double)thumbDimensionNeue;
-(void)_updateAppearanceForEnabled:(BOOL)arg1 ;
-(id)createThumbViewNeue;
-(double)_cornerRadiusForRect:(CGRect)arg1 ;
-(void)showValueDidChange;
-(void)_traitCollectionDidChangeInternal:(const UITraitCollectionChangeDescription*)arg1 ;
-(unsigned long long)state;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(id)createThumbView;
-(void)didSetValues;
-(id)minTrackView;
-(id)maxTrackView;
-(void)didSetEnabled;
-(id)thumbViewNeue;
-(id)currentThumbImage;
-(void)didSetHighlighted;
-(void)_initImages;
-(void)_initSubviews;
-(void)didPerformLayout;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
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
-(void)dealloc;
-(void)didSetThumbImageForState:(unsigned long long)arg1 ;
-(void)didSetMinimumTrackImageForState:(unsigned long long)arg1 ;
-(void)didSetThumbEnabled;
-(void)didSetMaximumTrackImageForState:(unsigned long long)arg1 ;
-(UIEdgeInsets)thumbHitEdgeInsets;
-(id)currentMinimumTrackImage;
-(id)currentMaximumTrackImage;
-(CGRect)valueTextRectForBounds:(CGRect)arg1 ;
-(void)didSetThumbImageForStates;
-(void)didSetMinimumTrackImageForStates;
-(void)didSetMaximumTrackImageForStates;
-(void)didChangeMinimumTrackVisibleWithDuration:(double)arg1 ;
@end

