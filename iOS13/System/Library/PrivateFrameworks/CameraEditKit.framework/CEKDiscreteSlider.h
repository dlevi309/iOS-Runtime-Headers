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

@class UIScrollView, UIView, UILabel, CEKEdgeGradientView, UIImageView, CEKSliderTickMarksView, CEKSliderDotView, CEKSelectionFeedbackGenerator, CEKAnimationGenerator, NSString, UIColor;

@interface CEKDiscreteSlider : UIControl <UIScrollViewDelegate, CEKSliderTickMarksDelegate, CEKAbstractSlider> {

	BOOL _useTextLegibilityShadows;
	BOOL __needsUpdateContentOffset;
	BOOL __overscrolling;
	double _labelVerticalPadding;
	long long _sliderVerticalAlignment;
	double _sliderVerticalOffset;
	long long _textOrientation;
	long long _titleAlignment;
	unsigned long long _fontStyle;
	UIScrollView* __contentScrollView;
	UIView* __levelIndicatorView;
	UILabel* __titleLabel;
	UILabel* __valueLabel;
	CEKEdgeGradientView* __edgeGradientView;
	UIImageView* __valueBackground;
	UIImageView* __titleBackground;
	UIView* __indicatorBackground;
	CEKSliderTickMarksView* __tickMarksView;
	CEKSliderDotView* __dotView;
	CEKSelectionFeedbackGenerator* __feedbackGenerator;
	CEKAnimationGenerator* __animationGenerator;
	unsigned long long _indexCount;
	unsigned long long _selectedIndex;
	unsigned long long _markedIndex;
	unsigned long long _tickMarkCountBetweenIndexes;
	double _tickMarksHeight;
	unsigned long long _colorHighlight;
	NSString* _titleText;
	CGPoint _gradientInsets;

}

@property (nonatomic,readonly) UIScrollView * _contentScrollView;                                                     //@synthesize _contentScrollView=__contentScrollView - In the implementation block
@property (nonatomic,readonly) UIView * _levelIndicatorView;                                                          //@synthesize _levelIndicatorView=__levelIndicatorView - In the implementation block
@property (nonatomic,retain) UILabel * _titleLabel;                                                                   //@synthesize _titleLabel=__titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * _valueLabel;                                                                   //@synthesize _valueLabel=__valueLabel - In the implementation block
@property (nonatomic,retain) CEKEdgeGradientView * _edgeGradientView;                                                 //@synthesize _edgeGradientView=__edgeGradientView - In the implementation block
@property (nonatomic,retain) UIImageView * _valueBackground;                                                          //@synthesize _valueBackground=__valueBackground - In the implementation block
@property (nonatomic,retain) UIImageView * _titleBackground;                                                          //@synthesize _titleBackground=__titleBackground - In the implementation block
@property (nonatomic,retain) UIView * _indicatorBackground;                                                           //@synthesize _indicatorBackground=__indicatorBackground - In the implementation block
@property (nonatomic,readonly) CEKSliderTickMarksView * _tickMarksView;                                               //@synthesize _tickMarksView=__tickMarksView - In the implementation block
@property (nonatomic,retain) CEKSliderDotView * _dotView;                                                             //@synthesize _dotView=__dotView - In the implementation block
@property (nonatomic,readonly) CEKSelectionFeedbackGenerator * _feedbackGenerator;                                    //@synthesize _feedbackGenerator=__feedbackGenerator - In the implementation block
@property (setter=_setAnimationGenerator:,nonatomic,retain) CEKAnimationGenerator * _animationGenerator;              //@synthesize _animationGenerator=__animationGenerator - In the implementation block
@property (assign,setter=_setNeedsUpdateContentOffset:,nonatomic) BOOL _needsUpdateContentOffset;                     //@synthesize _needsUpdateContentOffset=__needsUpdateContentOffset - In the implementation block
@property (assign,setter=_setOverscrolling:,getter=_isOverscrolling,nonatomic) BOOL _overscrolling;                   //@synthesize _overscrolling=__overscrolling - In the implementation block
@property (getter=_isScrollActive,nonatomic,readonly) BOOL _scrollActive; 
@property (nonatomic,readonly) BOOL _shouldUseHighlightColor; 
@property (nonatomic,readonly) id<CEKTickMarksConfiguration> tickMarksConfiguration; 
@property (assign,nonatomic) unsigned long long indexCount;                                                           //@synthesize indexCount=_indexCount - In the implementation block
@property (assign,nonatomic) unsigned long long selectedIndex;                                                        //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (assign,nonatomic) unsigned long long markedIndex;                                                          //@synthesize markedIndex=_markedIndex - In the implementation block
@property (assign,nonatomic) unsigned long long tickMarkCountBetweenIndexes;                                          //@synthesize tickMarkCountBetweenIndexes=_tickMarkCountBetweenIndexes - In the implementation block
@property (assign,nonatomic) double tickMarksHeight;                                                                  //@synthesize tickMarksHeight=_tickMarksHeight - In the implementation block
@property (assign,nonatomic) unsigned long long colorHighlight;                                                       //@synthesize colorHighlight=_colorHighlight - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                                                      //@synthesize titleText=_titleText - In the implementation block
@property (assign,nonatomic) BOOL useLegibilityBackgrounds; 
@property (assign,nonatomic) BOOL useTextLegibilityShadows;                                                           //@synthesize useTextLegibilityShadows=_useTextLegibilityShadows - In the implementation block
@property (nonatomic,retain) UIColor * gradientColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long sliderVerticalAlignment;                                                       //@synthesize sliderVerticalAlignment=_sliderVerticalAlignment - In the implementation block
@property (assign,nonatomic) double sliderVerticalOffset;                                                             //@synthesize sliderVerticalOffset=_sliderVerticalOffset - In the implementation block
@property (assign,nonatomic) double labelVerticalPadding;                                                             //@synthesize labelVerticalPadding=_labelVerticalPadding - In the implementation block
@property (assign,nonatomic) BOOL useLegibilityShadows; 
@property (assign,nonatomic) BOOL useTickMarkLegibilityShadows; 
@property (assign,nonatomic) long long textOrientation;                                                               //@synthesize textOrientation=_textOrientation - In the implementation block
@property (assign,nonatomic) long long titleAlignment;                                                                //@synthesize titleAlignment=_titleAlignment - In the implementation block
@property (assign,nonatomic) CGPoint gradientInsets;                                                                  //@synthesize gradientInsets=_gradientInsets - In the implementation block
@property (assign,nonatomic) unsigned long long fontStyle;                                                            //@synthesize fontStyle=_fontStyle - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)_titleLabel;
-(void)setTitleAlignment:(long long)arg1 ;
-(long long)titleAlignment;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(CEKSelectionFeedbackGenerator *)_feedbackGenerator;
-(unsigned long long)selectedIndex;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
-(UIScrollView *)_contentScrollView;
-(void)setFontStyle:(unsigned long long)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(unsigned long long)fontStyle;
-(CEKSliderDotView *)_dotView;
-(UILabel *)_valueLabel;
-(NSString *)titleText;
-(void)_updateFonts;
-(UIColor *)gradientColor;
-(unsigned long long)indexCount;
-(void)setGradientColor:(UIColor *)arg1 ;
-(void)setIndexCount:(unsigned long long)arg1 ;
-(id)valueText;
-(BOOL)useTickMarkLegibilityShadows;
-(void)tickMarksViewDidChangeWidthForTickMarkCount:(id)arg1 ;
-(void)setUseTickMarkLegibilityShadows:(BOOL)arg1 ;
-(void)_updateColorsAnimated:(BOOL)arg1 ;
-(void)updateValueLabel;
-(long long)textOrientation;
-(void)_layoutSubviewsWithLabelRotation:(double)arg1 ;
-(void)_layoutSubviewsWithNoRotation;
-(double)labelVerticalPadding;
-(double)tickMarksHeight;
-(void)_setNeedsUpdateContentOffset:(BOOL)arg1 ;
-(void)_updateTextLegibilityBackground;
-(id<CEKTickMarksConfiguration>)tickMarksConfiguration;
-(CEKEdgeGradientView *)_edgeGradientView;
-(void)set_edgeGradientView:(CEKEdgeGradientView *)arg1 ;
-(void)_createGradientIfNeeded;
-(UIView *)_levelIndicatorView;
-(void)setSelectedIndex:(unsigned long long)arg1 animatedDuration:(double)arg2 animatedCurve:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setSelectedIndex:(unsigned long long)arg1 shouldDelegate:(BOOL)arg2 shouldEmitFeedback:(BOOL)arg3 shouldScroll:(BOOL)arg4 scrollDuration:(double)arg5 scrollCurve:(id)arg6 scrollCompletion:(/*^block*/id)arg7 ;
-(void)_updateScrollViewContentOffset;
-(void)setMarkedIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateMarkedIndexViewAnimated:(BOOL)arg1 ;
-(void)setMarkedIndex:(unsigned long long)arg1 ;
-(void)set_titleLabel:(UILabel *)arg1 ;
-(void)set_valueLabel:(UILabel *)arg1 ;
-(CEKSliderTickMarksView *)_tickMarksView;
-(void)setTickMarksHeight:(double)arg1 animated:(BOOL)arg2 ;
-(void)setColorHighlight:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(long long)sliderVerticalAlignment;
-(double)sliderVerticalOffset;
-(void)_layoutSliderContentAtY:(double)arg1 withHorizontalPadding:(double)arg2 ;
-(double)horizontalValueLabelOffset;
-(BOOL)useTextLegibilityShadows;
-(UIImageView *)_valueBackground;
-(UIImageView *)_titleBackground;
-(UIView *)_indicatorBackground;
-(unsigned long long)tickMarkCountBetweenIndexes;
-(unsigned long long)markedIndex;
-(CGPoint)gradientInsets;
-(BOOL)_needsUpdateContentOffset;
-(unsigned long long)colorHighlight;
-(BOOL)_isScrollActive;
-(CEKAnimationGenerator *)_animationGenerator;
-(BOOL)_shouldUseHighlightColor;
-(CGPoint)_contentOffsetForIndex:(unsigned long long)arg1 ;
-(void)set_dotView:(CEKSliderDotView *)arg1 ;
-(id)_createLegibilityImage;
-(void)set_valueBackground:(UIImageView *)arg1 ;
-(void)set_titleBackground:(UIImageView *)arg1 ;
-(void)set_indicatorBackground:(UIView *)arg1 ;
-(unsigned long long)_tickMarkIndexForIndex:(unsigned long long)arg1 ;
-(void)_setAnimationGenerator:(id)arg1 ;
-(double)_interpolatedIndexForContentOffset:(CGPoint)arg1 ;
-(void)_updateAppearanceForActiveScrolling;
-(unsigned long long)_biasedIndexForContentOffset:(CGPoint)arg1 ;
-(void)_setOverscrolling:(BOOL)arg1 ;
-(unsigned long long)_nearestIndexForContentOffset:(CGPoint)arg1 ;
-(void)setTextOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setUseTextLegibilityShadows:(BOOL)arg1 ;
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
-(void)removeMarkedIndex;
-(void)setTickMarkCountBetweenIndexes:(unsigned long long)arg1 ;
-(void)setTickMarksHeight:(double)arg1 ;
-(void)setColorHighlight:(unsigned long long)arg1 ;
-(void)setUseLegibilityBackgrounds:(BOOL)arg1 ;
-(BOOL)useLegibilityBackgrounds;
-(BOOL)_isOverscrolling;
@end

