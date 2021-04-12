/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBIconImageView.h>
#import <libobjc.A.dylib/SBFolderIconObserver.h>
#import <libobjc.A.dylib/SBFolderIconImageCacheObserver.h>

@class UIView, _SBIconGridWrapperView, NSMutableArray, SBFloatyFolderView, NSHashTable, NSString;

@interface SBFolderIconImageView : SBIconImageView <SBFolderIconObserver, SBFolderIconImageCacheObserver> {

	UIView* _backgroundView;
	UIView* _solidColorBackgroundView;
	UIView* _pageGridContainer;
	_SBIconGridWrapperView* _leftWrapperView;
	_SBIconGridWrapperView* _rightWrapperView;
	NSMutableArray* _pageElements;
	unsigned long long _currentPageIndex;
	SBFloatyFolderView* _crossfadeFolderView;
	UIView* _crossfadeScalingView;
	BOOL _animating;
	NSHashTable* _imageUpdateDisableAssertions;
	unsigned long long _transitionToken;
	BOOL _hasCustomBackgroundView;
	unsigned long long _backgroundStyle;
	unsigned long long _currentBackgroundStyle;

}

@property (nonatomic,readonly) unsigned long long concreteBackgroundStyle; 
@property (assign,nonatomic) unsigned long long currentBackgroundStyle;                 //@synthesize currentBackgroundStyle=_currentBackgroundStyle - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundStyle;                        //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,readonly) unsigned long long currentPageIndex;                     //@synthesize currentPageIndex=_currentPageIndex - In the implementation block
@property (getter=isAnimating,nonatomic,readonly) BOOL animating;                       //@synthesize animating=_animating - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                   //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) BOOL hasCustomBackgroundView;                            //@synthesize hasCustomBackgroundView=_hasCustomBackgroundView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)prepareForReuse;
-(id)snapshot;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)backgroundView;
-(void)layoutSubviews;
-(BOOL)isAnimating;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)setBackgroundStyle:(unsigned long long)arg1 ;
-(unsigned long long)backgroundStyle;
-(id)contentsImage;
-(void)_setAnimating:(BOOL)arg1 ;
-(unsigned long long)currentPageIndex;
-(CGSize)_interPageSpacing;
-(void)setBackgroundScale:(double)arg1 ;
-(unsigned long long)visibleMiniIconListIndex;
-(void)scrollToTopOfPage:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)prepareToCrossfadeWithFloatyFolderView:(id)arg1 allowFolderInteraction:(BOOL)arg2 ;
-(void)setIconGridImageAlpha:(double)arg1 ;
-(void)setFloatyFolderCrossfadeFraction:(double)arg1 ;
-(void)cleanupAfterFloatyFolderCrossfade;
-(CGRect)visibleImageRelativeFrameForMiniIconAtIndex:(unsigned long long)arg1 ;
-(void)scrollToGapOrTopIfFullOfPage:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)scrollToFirstGapAnimated:(BOOL)arg1 ;
-(void)scrollToTopOfFirstPageAnimated:(BOOL)arg1 ;
-(id)_folderIconImageCache;
-(void)setIcon:(id)arg1 location:(id)arg2 animated:(BOOL)arg3 ;
-(void)updateImageAnimated:(BOOL)arg1 ;
-(void)iconViewLegibilitySettingsDidChange;
-(BOOL)hasCustomBackgroundView;
-(void)iconViewFolderIconImageCacheDidChange;
-(unsigned long long)visibleMiniIconCount;
-(unsigned long long)firstVisibleMiniIconIndex;
-(unsigned long long)centerVisibleMiniIconIndex;
-(unsigned long long)lastVisibleMiniIconIndex;
-(CGRect)frameForMiniIconAtIndex:(unsigned long long)arg1 ;
-(void)setBackgroundAndIconGridImageAlpha:(double)arg1 ;
-(id)disableImageUpdatesForReason:(id)arg1 ;
-(id)_folderIcon;
-(id)_generateSquareContentsImage;
-(void)fulfillGridImageForPageElement:(id)arg1 ;
-(void)_updateRasterization;
-(void)_updateAccessibilityBackgroundContrast;
-(void)_updateCurrentBackgroundStyle;
-(void)_setPageElements:(id)arg1 ;
-(CGSize)_interiorGridSizeClipRect;
-(void)_performScrollingDirection:(long long)arg1 targetPageIndex:(unsigned long long)arg2 targetPageScrollRow:(unsigned long long)arg3 newLeftElement:(id)arg4 newRightElement:(id)arg5 animated:(BOOL)arg6 ;
-(id)representedListLayout;
-(id)_currentPageElement;
-(CGRect)frameForMiniIconAtIndexPath:(id)arg1 ;
-(unsigned long long)concreteBackgroundStyle;
-(void)setCurrentBackgroundStyle:(unsigned long long)arg1 ;
-(void)_showLeftMinigrid;
-(void)_showRightMinigrid;
-(Class)_iconGridImageClass;
-(void)_setupGridViewsInDefaultConfiguration;
-(void)folderIconImageCache:(id)arg1 didUpdateImagesForFolderIcon:(id)arg2 ;
-(void)invalidateImageUpdatesAssertion:(id)arg1 ;
-(unsigned long long)currentBackgroundStyle;
@end

