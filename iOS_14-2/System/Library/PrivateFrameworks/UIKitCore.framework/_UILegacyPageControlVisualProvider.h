/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIPageControlVisualProvider.h>

@class UIImage, NSMutableArray, UIVisualEffectView, _UILegibilitySettings;

@interface _UILegacyPageControlVisualProvider : _UIPageControlVisualProvider {

	UIImage* _currentPageImage;
	UIImage* _pageImage;
	NSMutableArray* _currentPageImages;
	NSMutableArray* _pageImages;
	UIVisualEffectView* _backgroundVisualEffectView;
	NSMutableArray* _indicators;
	_UILegibilitySettings* __legibilitySettings;

}

@property (setter=_setLegibilitySettings:,getter=_legibilitySettings,nonatomic,retain) _UILegibilitySettings * _legibilitySettings;              //@synthesize _legibilitySettings=__legibilitySettings - In the implementation block
@property (assign,setter=_setLegibilityStyle:,getter=_legibilityStyle,nonatomic) long long _legibilityStyle; 
-(void)invalidateIndicators;
-(void)didUpdatePageIndicatorTintColor;
-(CGSize)sizeForNumberOfPages:(long long)arg1 ;
-(id)preferredIndicatorImage;
-(void)didUpdateNumberOfPages;
-(void)updateDisplayedPageToCurrentPage;
-(_UILegibilitySettings *)_legibilitySettings;
-(void)pruneArchivedSubviews:(id)arg1 ;
-(void)didEndTrackingWithTouch:(id)arg1 ;
-(void)didUpdateCurrentPageIndicatorTintColor;
-(CGSize)intrinsicContentSize;
-(id)defaultActivePageIndicatorImage;
-(id)_createModernIndicatorImageFromView:(id)arg1 ;
-(BOOL)_shouldDrawLegibly;
-(double)_modernCornerRadius;
-(void)_cachePageIndicatorImages;
-(void)layoutSubviews;
-(id)_modernIndicatorImageEnabled:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_modernColorEnabled:(BOOL)arg1 ;
-(void)_transitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(long long)arg3 legible:(BOOL)arg4 ;
-(void)_drawModernIndicatorInView:(id)arg1 enabled:(BOOL)arg2 ;
-(long long)_legibilityStyle;
-(id)_indicatorViewEnabled:(BOOL)arg1 index:(long long)arg2 ;
-(void)_setLegibilitySettings:(id)arg1 ;
-(BOOL)_hasCustomImageForPage:(long long)arg1 enabled:(BOOL)arg2 ;
-(void)_transitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(long long)arg3 ;
-(id)effectiveContentView;
-(id)_indicatorViewEnabled:(BOOL)arg1 index:(long long)arg2 legible:(BOOL)arg3 ;
-(CGRect)_modernBounds;
-(id)_pageIndicatorCurrentImageForPage:(long long)arg1 ;
-(id)_pageIndicatorImageForPage:(long long)arg1 ;
-(double)_indicatorSpacing;
-(id)_cachedPageIndicatorCurrentImageForPage:(long long)arg1 ;
-(void)_modernTransitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(long long)arg3 legible:(BOOL)arg4 ;
-(void)prepare;
-(void)_setDisplayedPage:(long long)arg1 ;
-(CGRect)_indicatorFrameAtIndex:(long long)arg1 ;
-(id)_cachedPageIndicatorImageForPage:(long long)arg1 ;
-(void)_setLegibilityStyle:(long long)arg1 ;
@end

