/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(CGPoint)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)init;
-(id)viewControllers;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)viewDidLoad;
-(long long)numberOfCollections;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(double)showcaseFactor;
-(void)showcaseFactorDidChange;
-(id)scrollStopForShowcaseTransition;
-(id)scrollStopForEnteringSectionAtIndex:(long long)arg1 fromEdge:(long long)arg2 ;
-(BOOL)shouldAdjustForTabBarSafeAreaInsets;
-(void)_configureBackgroundTintView;
-(void)_adjustedContentOffsetForRowIndex:(long long)arg1 targetContentOffset:(CGPoint*)arg2 ;
-(void)_buildStackSections;
-(void)_updateBackgroundTintView;
-(void)_updateBackgroundTintViewEffects;
-(double)_maxViewWidth;
-(CGSize)_maxContentSize;
-(void)_updateFirstItemRowIndexes;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForSectionAtIndex:(long long)arg3 ;
-(void)collectionView:(id)arg1 showcaseFactorDidChangeForLayout:(id)arg2 ;
-(void)updateCollectionViewControllersAndForceReload:(BOOL)arg1 ;
-(void)updateBackgroundAndBackdrop;
-(void)updateBackgroundAndBackdropMaskFactor;
-(void)didUpdateSupplementarySectionInfo;
-(void)_scrollToTopAnimated:(BOOL)arg1 ;
-(double)showcaseInset;
-(void)setShowcaseInset:(double)arg1 ;
-(void)mediaInfoDidChange;
-(void)_invalidateSectionMetricsIfNeeded;
-(double)_offsetToScrollStop:(id)arg1 ;
-(id)_updateWithCollectionListElement:(id)arg1 commits:(/*^block*/id*)arg2 autoHighlightIndexPath:(id*)arg3 ;
-(UIEdgeInsets)_scrollableBoundsInset;
-(void)_scheduleNextPreloadConditional;
-(void)_preloadNext;
-(BOOL)_didExtendContentForPeekMetrics:(SCD_Struct_TV20*)arg1 above:(BOOL)arg2 initial:(BOOL)arg3 ;
-(void)didUpdateSectionInfo;
-(id)tabBarObservedScrollView;
@end

