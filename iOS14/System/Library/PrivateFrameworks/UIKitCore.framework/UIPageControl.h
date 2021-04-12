/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@class _UIPageControlVisualProvider, UIColor, _UILegibilitySettings, UIImage;

@interface UIPageControl : UIControl {

	_UIPageControlVisualProvider* _visualProvider;
	struct {
		unsigned hideForSinglePage : 1;
		unsigned defersCurrentPageDisplay : 1;
		unsigned allowScrubbing : 1;
		unsigned flickToEndGestureEnabled : 1;
	}  _pageControlFlags;
	SCD_Struct_UI62 _custom;
	double _horizontalPadding;
	double _verticalPadding;
	double _indicatorSpacing;
	unsigned long long _preferredNumberOfVisibleIndicators;
	long long _numberOfPages;
	long long _currentPage;
	UIColor* _pageIndicatorTintColor;
	UIColor* _currentPageIndicatorTintColor;
	long long _backgroundStyle;
	long long _previousPage;

}

@property (assign,nonatomic) long long previousPage;                                                                                            //@synthesize previousPage=_previousPage - In the implementation block
@property (assign,setter=_setFlickToEndGestureEnabled:,nonatomic) BOOL _flickToEndGestureEnabled; 
@property (assign,setter=_setLegibilityStyle:,getter=_legibilityStyle,nonatomic) long long legibilityStyle; 
@property (setter=_setLegibilitySettings:,getter=_legibilitySettings,nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic) long long numberOfPages;                                                                                           //@synthesize numberOfPages=_numberOfPages - In the implementation block
@property (assign,nonatomic) long long currentPage;                                                                                             //@synthesize currentPage=_currentPage - In the implementation block
@property (assign,nonatomic) BOOL hidesForSinglePage; 
@property (nonatomic,retain) UIColor * pageIndicatorTintColor;                                                                                  //@synthesize pageIndicatorTintColor=_pageIndicatorTintColor - In the implementation block
@property (nonatomic,retain) UIColor * currentPageIndicatorTintColor;                                                                           //@synthesize currentPageIndicatorTintColor=_currentPageIndicatorTintColor - In the implementation block
@property (assign,nonatomic) long long backgroundStyle;                                                                                         //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,readonly) long long interactionState; 
@property (assign,nonatomic) BOOL allowsContinuousInteraction; 
@property (nonatomic,retain) UIImage * preferredIndicatorImage; 
@property (assign,nonatomic) BOOL defersCurrentPageDisplay; 
+(BOOL)doesOverrideMethod:(SEL)arg1 inBaseClass:(Class)arg2 ;
+(BOOL)_supportsInteractivePageControl;
+(id)_visualProviderForPageControl:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(id)indicatorImageForPage:(long long)arg1 ;
-(CGSize)sizeForNumberOfPages:(long long)arg1 ;
-(long long)_displayMode;
-(UIImage *)preferredIndicatorImage;
-(unsigned long long)_controlEventsForActionTriggered;
-(id)_legibilitySettings;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(void)setPreferredIndicatorImage:(UIImage *)arg1 ;
-(CGSize)intrinsicContentSize;
-(long long)interactionState;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(long long)backgroundStyle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_createModernIndicatorImageFromView:(id)arg1 ;
-(void)_traitCollectionDidChangeOnSubtreeInternal:(const UITraitCollectionChangeDescription*)arg1 ;
-(BOOL)shouldTrack;
-(long long)currentPage;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(void)_setFlickToEndGestureEnabled:(BOOL)arg1 ;
-(long long)previousPage;
-(void)layoutSubviews;
-(void)setBackgroundStyle:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_drawModernIndicatorInView:(id)arg1 enabled:(BOOL)arg2 ;
-(long long)_legibilityStyle;
-(BOOL)hidesForSinglePage;
-(BOOL)_implementsCustomPageImagesOverride;
-(BOOL)_implementsCustomCurrentPageImagesOverride;
-(void)_setIndicatorImage:(id)arg1 ;
-(void)setHidesForSinglePage:(BOOL)arg1 ;
-(void)setDefersCurrentPageDisplay:(BOOL)arg1 ;
-(void)setCurrentPageIndicatorTintColor:(UIColor *)arg1 ;
-(void)_setDisplayMode:(long long)arg1 ;
-(id)_indicatorViewEnabled:(BOOL)arg1 index:(long long)arg2 ;
-(void)setPageIndicatorTintColor:(UIColor *)arg1 ;
-(UIColor *)pageIndicatorTintColor;
-(UIColor *)currentPageIndicatorTintColor;
-(void)_invalidateIndicators;
-(void)_updateCurrentPage:(long long)arg1 updateDisplayImmediately:(BOOL)arg2 ;
-(void)_updateCurrentPageDisplayWithForceUpdate:(BOOL)arg1 ;
-(BOOL)defersCurrentPageDisplay;
-(void)setIndicatorImage:(id)arg1 forPage:(long long)arg2 ;
-(void)_setCurrentPage:(long long)arg1 ;
-(void)updateCurrentPageDisplay;
-(BOOL)_flickToEndGestureEnabled;
-(BOOL)allowsContinuousInteraction;
-(double)_customVerticalPadding;
-(void)setAllowsContinuousInteraction:(BOOL)arg1 ;
-(void)setPreviousPage:(long long)arg1 ;
-(void)_setIndicatorImage:(id)arg1 forPage:(long long)arg2 ;
-(double)_customIndicatorSpacing;
-(double)_customHorizontalPadding;
-(void)_setCustomVerticalPadding:(double)arg1 ;
-(void)setCurrentPage:(long long)arg1 ;
-(void)_setCustomHorizontalPadding:(double)arg1 ;
-(void)_setCurrentPageImage:(id)arg1 ;
-(void)_setCustomIndicatorSpacing:(double)arg1 ;
-(void)_setPreferredNumberOfVisibleIndicators:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_setLegibilitySettings:(id)arg1 ;
-(long long)_interactionState;
-(void)_transitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(long long)arg3 ;
-(long long)numberOfPages;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(void)setNumberOfPages:(long long)arg1 ;
-(id)_pageIndicatorCurrentImageForPage:(long long)arg1 ;
-(id)_pageIndicatorImageForPage:(long long)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(long long)_displayedPage;
-(void)_setPageImage:(id)arg1 ;
-(void)_setLegibilityStyle:(long long)arg1 ;
-(void)dealloc;
@end

