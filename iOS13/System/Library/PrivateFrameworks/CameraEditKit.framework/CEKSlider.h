/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
*/

#import <CameraEditKit/CameraEditKit-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/CEKSliderTickMarksDelegate.h>
#import <libobjc.A.dylib/CEKAbstractSlider.h>

@protocol CEKSliderDelegate;
@class UIColor, NSString, UIScrollView, CEKSliderTickMarksView, UIView, CEKSliderDotView, CEKEdgeGradientView, CEKSelectionFeedbackGenerator, UILabel;

@interface CEKSlider : UIControl <UIScrollViewDelegate, CEKSliderTickMarksDelegate, CEKAbstractSlider> {

	struct {
		BOOL respondsToWillBeginScrolling;
		BOOL respondsToDidScroll;
		BOOL respondsToWillEndScrolling;
		BOOL respondsToDidEndScrolling;
		BOOL respondsToWillUpdateValue;
	}  _delegateFlags;
	BOOL __animating;
	BOOL __overscrolling;
	BOOL __active;
	BOOL __reAdjustingOffsets;
	BOOL __dimmed;
	double _labelVerticalPadding;
	long long _sliderVerticalAlignment;
	double _sliderVerticalOffset;
	long long _textOrientation;
	unsigned long long _fontStyle;
	id<CEKSliderDelegate> _delegate;
	double _animationDuration;
	double _maximumValue;
	double _minimumValue;
	double _value;
	double _defaultValue;
	double _markedValue;
	long long _tickMarkCount;
	UIColor* _tickMarkColor;
	UIColor* _prominentTickMarkColor;
	NSString* _title;
	long long _valueLabelVisibility;
	UIScrollView* __contentScrollView;
	CEKSliderTickMarksView* __tickMarksView;
	UIView* __levelIndicatorView;
	CEKSliderDotView* __dotView;
	CEKEdgeGradientView* __edgeGradientView;
	unsigned long long __tickMarkIndex;
	CEKSelectionFeedbackGenerator* __feedbackGenerator;
	UILabel* __titleLabel;
	UILabel* __valueLabel;
	UIView* __levelIndicatorBackgroundView;
	CGPoint _gradientInsets;
	CGSize _tickMarkSize;

}

@property (nonatomic,readonly) UIScrollView * _contentScrollView;                                                //@synthesize _contentScrollView=__contentScrollView - In the implementation block
@property (nonatomic,readonly) CEKSliderTickMarksView * _tickMarksView;                                          //@synthesize _tickMarksView=__tickMarksView - In the implementation block
@property (nonatomic,readonly) UIView * _levelIndicatorView;                                                     //@synthesize _levelIndicatorView=__levelIndicatorView - In the implementation block
@property (nonatomic,readonly) CEKSliderDotView * _dotView;                                                      //@synthesize _dotView=__dotView - In the implementation block
@property (setter=_setEdgeGradientView:,nonatomic,retain) CEKEdgeGradientView * _edgeGradientView;               //@synthesize _edgeGradientView=__edgeGradientView - In the implementation block
@property (assign,setter=_setAnimating:,getter=_isAnimating,nonatomic) BOOL _animating;                          //@synthesize _animating=__animating - In the implementation block
@property (assign,setter=_setOverscrolling:,getter=_isOverscrolling,nonatomic) BOOL _overscrolling;              //@synthesize _overscrolling=__overscrolling - In the implementation block
@property (assign,setter=_setTickMarkIndex:,nonatomic) unsigned long long _tickMarkIndex;                        //@synthesize _tickMarkIndex=__tickMarkIndex - In the implementation block
@property (nonatomic,readonly) CEKSelectionFeedbackGenerator * _feedbackGenerator;                               //@synthesize _feedbackGenerator=__feedbackGenerator - In the implementation block
@property (assign,setter=_setActive:,getter=_isActive,nonatomic) BOOL _active;                                   //@synthesize _active=__active - In the implementation block
@property (nonatomic,retain) UILabel * _titleLabel;                                                              //@synthesize _titleLabel=__titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * _valueLabel;                                                              //@synthesize _valueLabel=__valueLabel - In the implementation block
@property (assign,getter=_isreAdjustingOffsets,nonatomic) BOOL _reAdjustingOffsets;                              //@synthesize _reAdjustingOffsets=__reAdjustingOffsets - In the implementation block
@property (assign,setter=_setDimmed:,getter=_isDimmed,nonatomic) BOOL _dimmed;                                   //@synthesize _dimmed=__dimmed - In the implementation block
@property (nonatomic,retain) UIView * _levelIndicatorBackgroundView;                                             //@synthesize _levelIndicatorBackgroundView=__levelIndicatorBackgroundView - In the implementation block
@property (assign,nonatomic,__weak) id<CEKSliderDelegate> delegate;                                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<CEKTickMarksConfiguration> tickMarksConfiguration; 
@property (assign,nonatomic) double animationDuration;                                                           //@synthesize animationDuration=_animationDuration - In the implementation block
@property (assign,nonatomic) double maximumValue;                                                                //@synthesize maximumValue=_maximumValue - In the implementation block
@property (assign,nonatomic) double minimumValue;                                                                //@synthesize minimumValue=_minimumValue - In the implementation block
@property (assign,nonatomic) double value;                                                                       //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double defaultValue;                                                                //@synthesize defaultValue=_defaultValue - In the implementation block
@property (assign,nonatomic) double markedValue;                                                                 //@synthesize markedValue=_markedValue - In the implementation block
@property (assign,nonatomic) long long mainTickMarkInterval; 
@property (assign,nonatomic) long long tickMarkCount;                                                            //@synthesize tickMarkCount=_tickMarkCount - In the implementation block
@property (assign,nonatomic) double tickMarkSpacing; 
@property (assign,nonatomic) CGSize tickMarkSize;                                                                //@synthesize tickMarkSize=_tickMarkSize - In the implementation block
@property (nonatomic,retain) UIColor * tickMarkColor;                                                            //@synthesize tickMarkColor=_tickMarkColor - In the implementation block
@property (nonatomic,retain) UIColor * prominentTickMarkColor;                                                   //@synthesize prominentTickMarkColor=_prominentTickMarkColor - In the implementation block
@property (nonatomic,readonly) NSString * title;                                                                 //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long valueLabelVisibility;                                                     //@synthesize valueLabelVisibility=_valueLabelVisibility - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long sliderVerticalAlignment;                                                  //@synthesize sliderVerticalAlignment=_sliderVerticalAlignment - In the implementation block
@property (assign,nonatomic) double sliderVerticalOffset;                                                        //@synthesize sliderVerticalOffset=_sliderVerticalOffset - In the implementation block
@property (assign,nonatomic) double labelVerticalPadding;                                                        //@synthesize labelVerticalPadding=_labelVerticalPadding - In the implementation block
@property (assign,nonatomic) BOOL useLegibilityShadows; 
@property (assign,nonatomic) BOOL useTickMarkLegibilityShadows; 
@property (assign,nonatomic) long long textOrientation;                                                          //@synthesize textOrientation=_textOrientation - In the implementation block
@property (assign,nonatomic) long long titleAlignment; 
@property (assign,nonatomic) CGPoint gradientInsets;                                                             //@synthesize gradientInsets=_gradientInsets - In the implementation block
@property (assign,nonatomic) unsigned long long fontStyle;                                                       //@synthesize fontStyle=_fontStyle - In the implementation block
-(id<CEKSliderDelegate>)delegate;
-(void)setDelegate:(id<CEKSliderDelegate>)arg1 ;
-(double)value;
-(void)setValue:(double)arg1 ;
-(NSString *)title;
-(BOOL)_isActive;
-(double)defaultValue;
-(void)setDefaultValue:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)_titleLabel;
-(BOOL)_isAnimating;
-(void)setTitleAlignment:(long long)arg1 ;
-(long long)titleAlignment;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)initWithTitle:(id)arg1 ;
-(CEKSelectionFeedbackGenerator *)_feedbackGenerator;
-(double)animationDuration;
-(void)setAnimationDuration:(double)arg1 ;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIScrollView *)_contentScrollView;
-(void)setMinimumValue:(double)arg1 ;
-(void)setMaximumValue:(double)arg1 ;
-(double)minimumValue;
-(double)maximumValue;
-(void)setFontStyle:(unsigned long long)arg1 ;
-(unsigned long long)fontStyle;
-(void)_setAnimating:(BOOL)arg1 ;
-(CEKSliderDotView *)_dotView;
-(UILabel *)_valueLabel;
-(void)_setActive:(BOOL)arg1 ;
-(void)_updateFonts;
-(BOOL)_isDimmed;
-(void)resetToDefault;
-(BOOL)useTickMarkLegibilityShadows;
-(void)tickMarksViewDidChangeWidthForTickMarkCount:(id)arg1 ;
-(double)tickMarkSpacing;
-(long long)mainTickMarkInterval;
-(void)setMainTickMarkInterval:(long long)arg1 ;
-(void)setTickMarkSpacing:(double)arg1 ;
-(void)setUseTickMarkLegibilityShadows:(BOOL)arg1 ;
-(void)_updateColorsAnimated:(BOOL)arg1 ;
-(long long)textOrientation;
-(double)labelVerticalPadding;
-(id<CEKTickMarksConfiguration>)tickMarksConfiguration;
-(CEKEdgeGradientView *)_edgeGradientView;
-(void)_createGradientIfNeeded;
-(UIView *)_levelIndicatorView;
-(void)set_titleLabel:(UILabel *)arg1 ;
-(void)set_valueLabel:(UILabel *)arg1 ;
-(CEKSliderTickMarksView *)_tickMarksView;
-(long long)sliderVerticalAlignment;
-(double)sliderVerticalOffset;
-(CGPoint)gradientInsets;
-(void)_setOverscrolling:(BOOL)arg1 ;
-(void)setTextOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)removeGradients;
-(void)setTransparentGradients;
-(void)setOpaqueGradientsWithColor:(id)arg1 ;
-(void)setSliderVerticalAlignment:(long long)arg1 ;
-(void)setSliderVerticalOffset:(double)arg1 ;
-(void)setLabelVerticalPadding:(double)arg1 ;
-(BOOL)useLegibilityShadows;
-(void)setUseLegibilityShadows:(BOOL)arg1 ;
-(void)setTextOrientation:(long long)arg1 ;
-(void)setGradientInsets:(CGPoint)arg1 ;
-(BOOL)_isOverscrolling;
-(long long)tickMarkCount;
-(CGSize)tickMarkSize;
-(UIView *)_levelIndicatorBackgroundView;
-(double)_xOffsetForMarkedValue;
-(void)_updateScrollViewPosition;
-(void)_setValue:(double)arg1 shouldSendActions:(BOOL)arg2 shouldUpdateScrollPosition:(BOOL)arg3 ;
-(void)_clampValuesAndUpdateScrollPosition:(BOOL)arg1 ;
-(void)setMarkedValue:(double)arg1 animated:(BOOL)arg2 ;
-(void)_updateMarkedViewAnimated:(BOOL)arg1 ;
-(double)markedValue;
-(void)_updateLegibilityBackground;
-(void)_setEdgeGradientView:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 dimmed:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_setDimmed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateEnableAppearanceStateAnimated:(BOOL)arg1 ;
-(long long)valueLabelVisibility;
-(void)_setActive:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setShowValueLabel:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)xOffsetForValue:(double)arg1 ;
-(void)_updateValueLabel;
-(BOOL)_isreAdjustingOffsets;
-(void)set_reAdjustingOffsets:(BOOL)arg1 ;
-(void)_setNormalizedValue:(double)arg1 ;
-(unsigned long long)_tickMarkIndex;
-(void)_setTickMarkIndex:(unsigned long long)arg1 ;
-(void)_sliderDidEndScrolling;
-(void)setMarkedValue:(double)arg1 ;
-(void)setTickMarkCount:(long long)arg1 ;
-(void)setTickMarkSize:(CGSize)arg1 ;
-(void)_setDimmed:(BOOL)arg1 ;
-(void)setValueLabelVisibility:(long long)arg1 ;
-(UIColor *)tickMarkColor;
-(void)setTickMarkColor:(UIColor *)arg1 ;
-(UIColor *)prominentTickMarkColor;
-(void)setProminentTickMarkColor:(UIColor *)arg1 ;
-(void)set_levelIndicatorBackgroundView:(UIView *)arg1 ;
@end

