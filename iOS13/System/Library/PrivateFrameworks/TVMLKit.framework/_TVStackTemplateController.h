/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVStackCommonTemplateController.h>
#import <TVMLKit/_TVStackViewDelegateFlowLayout.h>
#import <TVMLKit/TVTabBarAdjusting.h>
#import <TVMLKit/TVShowcasing.h>

@class NSArray, IKChangeSet, NSMutableArray, NSIndexPath, _TVNeedsMoreContentEvaluator, UIViewController, UIView, NSString;

@interface _TVStackTemplateController : _TVStackCommonTemplateController <_TVStackViewDelegateFlowLayout, TVTabBarAdjusting, TVShowcasing> {

	NSArray* _unfilteredViewControllers;
	IKChangeSet* _filteredChangeSet;
	NSArray* _viewControllers;
	NSMutableArray* _preloadQueue;
	NSArray* _stackSections;
	NSArray* _stackRows;
	double _contentHeight;
	double _showcaseFactor;
	NSIndexPath* _lastFocusedIndexPath;
	_TVNeedsMoreContentEvaluator* _needsMoreContentEvaluator;
	UIViewController* _backdropTintViewController;
	UIView* _backdropTintView;
	BOOL _requiresShowcasing;
	BOOL _shouldInvalidateMetrics;
	struct {
		BOOL _preloadingScheduled;
	}  _flags;
	double _showcaseInset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double showcaseFactor; 
@property (assign,nonatomic) double showcaseInset;                  //@synthesize showcaseInset=_showcaseInset - In the implementation block
-(id)init;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(CGPoint)arg2 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(id)viewControllers;
-(long long)numberOfCollections;
-(void)_configureBackgroundTintView;
-(void)_adjustedContentOffsetForRowIndex:(long long)arg1 targetContentOffset:(CGPoint*)arg2 ;
-(void)_buildStackSections;
-(void)_updateBackgroundTintView;
-(void)_updateBackgroundTintViewEffects;
-(double)_maxViewWidth;
-(CGSize)_maxContentSize;
-(void)_updateFirstItemRowIndexes;
-(double)showcaseFactor;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForSectionAtIndex:(long long)arg3 ;
-(void)collectionView:(id)arg1 showcaseFactorDidChangeForLayout:(id)arg2 ;
-(void)updateCollectionViewControllersAndForceReload:(BOOL)arg1 ;
-(void)updateBackgroundAndBackdrop;
-(void)updateBackgroundAndBackdropMaskFactor;
-(void)didUpdateSupplementarySectionInfo;
-(BOOL)shouldAdjustForTabBarSafeAreaInsets;
-(double)showcaseInset;
-(void)setShowcaseInset:(double)arg1 ;
-(void)mediaInfoDidChange;
-(void)showcaseFactorDidChange;
-(void)_invalidateSectionMetricsIfNeeded;
-(id)scrollStopForShowcaseTransition;
-(double)_offsetToScrollStop:(id)arg1 ;
-(id)_updateWithCollectionListElement:(id)arg1 commits:(/*^block*/id*)arg2 autoHighlightIndexPath:(id*)arg3 ;
-(UIEdgeInsets)_scrollableBoundsInset;
-(void)_scheduleNextPreloadConditional;
-(void)_preloadNext;
-(id)scrollStopForEnteringSectionAtIndex:(long long)arg1 fromEdge:(long long)arg2 ;
-(BOOL)_didExtendContentForPeekMetrics:(SCD_Struct_TV19*)arg1 above:(BOOL)arg2 initial:(BOOL)arg3 ;
-(void)didUpdateSectionInfo;
-(id)tabBarObservedScrollView;
-(void)_scrollToTopAnimated:(BOOL)arg1 ;
@end

