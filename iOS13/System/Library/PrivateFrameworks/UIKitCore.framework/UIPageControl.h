/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@class NSMutableArray, UIImage, UIVisualEffectView, UIColor, _UILegibilitySettings;

@interface UIPageControl : UIControl {

	long long _lastUserInterfaceIdiom;
	NSMutableArray* _indicators;
	long long _currentPage;
	long long _displayedPage;
	SCD_Struct_UI31 _pageControlFlags;
	UIImage* _currentPageImage;
	UIImage* _pageImage;
	NSMutableArray* _currentPageImages;
	NSMutableArray* _pageImages;
	UIVisualEffectView* _backgroundVisualEffectView;
	UIColor* _currentPageIndicatorTintColor;
	UIColor* _pageIndicatorTintColor;
	_UILegibilitySettings* _legibilitySettings;
	long long _numberOfPages;

}

@property (assign,setter=_setLegibilityStyle:,getter=_legibilityStyle,nonatomic) long long legibilityStyle; 
@property (setter=_setLegibilitySettings:,getter=_legibilitySettings,nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) long long numberOfPages;                                                                                           //@synthesize numberOfPages=_numberOfPages - In the implementation block
@property (assign,nonatomic) long long currentPage; 
@property (assign,nonatomic) BOOL hidesForSinglePage; 
@property (assign,nonatomic) BOOL defersCurrentPageDisplay; 
@property (nonatomic,retain) UIColor * pageIndicatorTintColor;                                                                                  //@synthesize pageIndicatorTintColor=_pageIndicatorTintColor - In the implementation block
@property (nonatomic,retain) UIColor * currentPageIndicatorTintColor;                                                                           //@synthesize currentPageIndicatorTintColor=_currentPageIndicatorTintColor - In the implementation block
+(BOOL)doesOverrideMethod:(SEL)arg1 inBaseClass:(Class)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(BOOL)canBecomeFocused;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(void)setCurrentPage:(long long)arg1 ;
-(long long)currentPage;
-(void)setNumberOfPages:(long long)arg1 ;
-(void)setDefersCurrentPageDisplay:(BOOL)arg1 ;
-(long long)numberOfPages;
-(void)updateCurrentPageDisplay;
-(long long)_displayedPage;
-(id)_effectiveContentView;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)_pageIndicatorImageForPage:(long long)arg1 ;
-(id)_pageIndicatorCurrentImageForPage:(long long)arg1 ;
-(void)_commonPageControlInit;
-(void)setCurrentPageIndicatorTintColor:(UIColor *)arg1 ;
-(void)setPageIndicatorTintColor:(UIColor *)arg1 ;
-(void)_invalidateIndicators;
-(id)_activePageIndicatorImage;
-(id)_pageIndicatorImage;
-(void)_cachePageIndicatorImages;
-(id)_indicatorViewEnabled:(BOOL)arg1 index:(long long)arg2 ;
-(void)_setCurrentPage:(long long)arg1 ;
-(void)_setDisplayedPage:(long long)arg1 ;
-(void)_updateCurrentPageDisplay;
-(double)_indicatorSpacing;
-(BOOL)_hasCustomImageForPage:(long long)arg1 enabled:(BOOL)arg2 ;
-(CGRect)_indicatorFrameAtIndex:(long long)arg1 ;
-(CGRect)_modernBounds;
-(void)_transitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(long long)arg3 ;
-(id)_cachedPageIndicatorCurrentImageForPage:(long long)arg1 ;
-(id)_cachedPageIndicatorImageForPage:(long long)arg1 ;
-(void)_modernTransitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(long long)arg3 legible:(BOOL)arg4 ;
-(BOOL)_shouldDrawLegibly;
-(void)_transitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(long long)arg3 legible:(BOOL)arg4 ;
-(id)_indicatorViewEnabled:(BOOL)arg1 index:(long long)arg2 legible:(BOOL)arg3 ;
-(void)_drawModernIndicatorInView:(id)arg1 enabled:(BOOL)arg2 ;
-(id)_modernIndicatorImageEnabled:(BOOL)arg1 ;
-(void)_setLegibilitySettings:(id)arg1 ;
-(id)_modernColorEnabled:(BOOL)arg1 ;
-(double)_modernCornerRadius;
-(id)_createModernIndicatorImageFromView:(id)arg1 ;
-(void)setHidesForSinglePage:(BOOL)arg1 ;
-(BOOL)hidesForSinglePage;
-(BOOL)defersCurrentPageDisplay;
-(CGSize)sizeForNumberOfPages:(long long)arg1 ;
-(void)_setLegibilityStyle:(long long)arg1 ;
-(long long)_legibilityStyle;
-(UIColor *)currentPageIndicatorTintColor;
-(UIColor *)pageIndicatorTintColor;
-(id)_legibilitySettings;
@end

