/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKitCore/_UICursorInteractionDelegate.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UIImageView, UIView, UIColor, NSArray, _UIEdgeFeedbackGenerator, _UIModulationFeedbackGenerator, UIImage, NSString;

@interface UISlider : UIControl <_UICursorInteractionDelegate, NSCoding> {

	float _value;
	float _minValue;
	float _maxValue;
	double _alpha;
	CFDictionaryRef _contentLookup;
	UIImageView* _minValueImageView;
	UIImageView* _maxValueImageView;
	UIImageView* _thumbView;
	UIImageView* _minTrackView;
	UIImageView* _maxTrackView;
	UIView* _minTrackClipView;
	UIView* _maxTrackClipView;
	struct {
		unsigned continuous : 1;
		unsigned animating : 1;
		unsigned preparingToAnimate : 1;
		unsigned showValue : 1;
		unsigned trackEnabled : 1;
		unsigned creatingSnapshot : 1;
		unsigned thumbDisabled : 1;
		unsigned minTrackHidden : 1;
	}  _sliderFlags;
	double _hitOffset;
	UIColor* _minTintColor;
	UIColor* _maxTintColor;
	UIColor* _thumbTintColor;
	UIView* _thumbViewNeue;
	NSArray* _trackColors;
	BOOL _trackIsArtworkBased;
	BOOL _thumbIsArtworkBased;
	BOOL _maxColorIsValid;
	_UIEdgeFeedbackGenerator* _edgeFeedbackGenerator;
	_UIModulationFeedbackGenerator* _modulationFeedbackGenerator;
	UIImageView* _innerThumbView;

}

@property (setter=_setEdgeFeedbackGenerator:,getter=_edgeFeedbackGenerator,nonatomic,retain) _UIEdgeFeedbackGenerator * edgeFeedbackGenerator; 
@property (setter=_setModulationFeedbackGenerator:,getter=_modulationFeedbackGenerator,nonatomic,retain) _UIModulationFeedbackGenerator * modulationFeedbackGenerator; 
@property (setter=_setEdgeFeedbackBehavior:,getter=_edgeFeedbackBehavior,nonatomic,retain) _UIEdgeFeedbackGenerator * edgeFeedbackBehavior; 
@property (assign,nonatomic) float value; 
@property (assign,nonatomic) float minimumValue; 
@property (assign,nonatomic) float maximumValue; 
@property (nonatomic,retain) UIImage * minimumValueImage; 
@property (nonatomic,retain) UIImage * maximumValueImage; 
@property (assign,getter=isContinuous,nonatomic) BOOL continuous; 
@property (nonatomic,retain) UIColor * minimumTrackTintColor;                                                                                                                       //@synthesize minTintColor=_minTintColor - In the implementation block
@property (nonatomic,retain) UIColor * maximumTrackTintColor;                                                                                                                       //@synthesize maxTintColor=_maxTintColor - In the implementation block
@property (nonatomic,retain) UIColor * thumbTintColor;                                                                                                                              //@synthesize thumbTintColor=_thumbTintColor - In the implementation block
@property (nonatomic,readonly) UIImage * currentThumbImage; 
@property (nonatomic,readonly) UIImage * currentMinimumTrackImage; 
@property (nonatomic,readonly) UIImage * currentMaximumTrackImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_allowActionsToQueue;
+(id)_modernThumbImageWithTraitCollection:(id)arg1 tintColor:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)value;
-(void)setValue:(float)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)tintColorDidChange;
-(void)setSelected:(BOOL)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)_contentForState:(unsigned long long)arg1 ;
-(void)_setContent:(id)arg1 forState:(unsigned long long)arg2 ;
-(BOOL)_alwaysHandleScrollerMouseEvent;
-(void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)cancelTouchTracking;
-(BOOL)cancelMouseTracking;
-(void)_sendDelayedActions;
-(void)_initSubviews;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(void)_setValue:(float)arg1 andSendAction:(BOOL)arg2 ;
-(void)_sliderAnimationWillStart;
-(void)_sliderAnimationDidStop:(BOOL)arg1 ;
-(BOOL)isContinuous;
-(void)setContinuous:(BOOL)arg1 ;
-(BOOL)isAnimatingValueChange;
-(void)setMinimumValue:(float)arg1 ;
-(void)setMaximumValue:(float)arg1 ;
-(void)setMinimumTrackTintColor:(UIColor *)arg1 ;
-(void)setMaximumTrackTintColor:(UIColor *)arg1 ;
-(void)setThumbTintColor:(UIColor *)arg1 ;
-(void)_setupFeedback;
-(void)_listenForContentSizeCategoryChangesIfNecessary;
-(void)_contentSizeCategoryChanged:(id)arg1 ;
-(void)_setEdgeFeedbackGenerator:(id)arg1 ;
-(id)_edgeFeedbackGenerator;
-(BOOL)_shouldBeginTrackingAtPoint:(CGPoint)arg1 pointInKnob:(CGPoint*)arg2 inKnob:(BOOL*)arg3 ;
-(UIImage *)minimumValueImage;
-(UIImage *)maximumValueImage;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(UIColor *)thumbTintColor;
-(id)minimumTrackImageForState:(unsigned long long)arg1 ;
-(void)setMinimumTrackImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)maximumTrackImageForState:(unsigned long long)arg1 ;
-(void)_updateMaxTrackColorForInitialization:(BOOL)arg1 ;
-(void)_buildTrackArtwork;
-(id)createThumbView;
-(void)_rebuildControlThumb:(BOOL)arg1 track:(BOOL)arg2 ;
-(void)setThumbImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)setMinimumTrackImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)_updateMinimumTrackTintColor;
-(id)_thumbImageForState:(unsigned long long)arg1 ;
-(id)_minimumTrackImageForState:(unsigned long long)arg1 ;
-(id)_maximumTrackImageForState:(unsigned long long)arg1 ;
-(id)thumbImageForState:(unsigned long long)arg1 ;
-(void)_layoutSubviewsForBoundsChange:(BOOL)arg1 ;
-(CGRect)minimumValueImageRectForBounds:(CGRect)arg1 ;
-(CGRect)maximumValueImageRectForBounds:(CGRect)arg1 ;
-(CGRect)valueTextRectForBounds:(CGRect)arg1 ;
-(float)minimumValue;
-(float)maximumValue;
-(UIImage *)currentThumbImage;
-(void)_initImages;
-(void)_traitCollectionDidChangeInternal:(const UITraitCollectionChangeDescription*)arg1 ;
-(void)setMaximumTrackImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)setMaximumTrackImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(UIImage *)currentMinimumTrackImage;
-(UIImage *)currentMaximumTrackImage;
-(void)_updateAppearanceForEnabled:(BOOL)arg1 ;
-(void)_setValue:(float)arg1 minValue:(float)arg2 maxValue:(float)arg3 andSendAction:(BOOL)arg4 ;
-(UIEdgeInsets)_thumbHitEdgeInsets;
-(void)_setModulationFeedbackGenerator:(id)arg1 ;
-(id)_modulationFeedbackGenerator;
-(void)_setEdgeFeedbackBehavior:(id)arg1 ;
-(id)_edgeFeedbackBehavior;
-(id)createThumbViewNeue;
-(double)_cornerRadiusForRect:(CGRect)arg1 ;
-(void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setMinimumValueImage:(UIImage *)arg1 ;
-(void)setMaximumValueImage:(UIImage *)arg1 ;
-(UIColor *)minimumTrackTintColor;
-(UIColor *)maximumTrackTintColor;
-(id)_minTrackView;
-(id)_maxTrackView;
-(void)_setThumbImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)_setMinimumTrackImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)_setMaximumTrackImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)setShowValue:(BOOL)arg1 ;
-(void)_setTrackEnabled:(BOOL)arg1 ;
-(BOOL)_trackEnabled;
-(void)_setThumbEnabled:(BOOL)arg1 ;
-(void)_setMinimumTrackVisible:(BOOL)arg1 withDuration:(double)arg2 ;
-(BOOL)_isThumbEnabled;
-(void)_setUseLookNeue:(BOOL)arg1 ;
-(id)_minValueView;
-(id)_maxValueView;
@end

