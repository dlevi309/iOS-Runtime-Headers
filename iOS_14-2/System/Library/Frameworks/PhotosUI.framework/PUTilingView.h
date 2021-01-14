/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIScrollView.h>

@protocol PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, PUTilingViewScrollDelegate, PUTilingViewTileUseDelegate, PUTilingCoordinateSystem;
@class PUTilingLayout, PUTileAnimator, PUReuseQueue, PUTileTree, NSMutableDictionary, NSMutableSet, PUTileTransitionCoordinator, NSMutableArray;

@interface PUTilingView : UIScrollView {

	struct {
		BOOL respondsToDataSourceConverterForTransitionFromLayoutToLayout;
		BOOL respondsToTileTransitionCoordinatorForTransitionFromLayoutWithContext;
		BOOL respondsToTileTransitionCoordinatorForUpdateWithItems;
		BOOL respondsToTileTransitionCoordinatorForChangeFromFrame;
		BOOL respondsToTileTransitionCoordinatorForReattachedTileControllers;
		BOOL respondsToTileTransitionCoordinatorForLayoutInvalidationContext;
		BOOL respondsToCanBypass20069585Check;
	}  _tileTransitionDelegateFlags;
	struct {
		BOOL respondsToScrollInfoWithLayout;
		BOOL respondsToInitialVisibleOriginWithLayout;
		BOOL respondsToTargetVisibleOriginForProposedVisibleOrigin;
	}  _scrollDelegateFlags;
	SCD_Struct_PU28 _tileUseDelegateFlags;
	BOOL __needsUpdateLayoutVisibleRect;
	BOOL __needsUpdateTileControllersVisibleRect;
	BOOL __needsUpdateLayoutCoordinateSystem;
	BOOL __needsUpdateLayout;
	BOOL __needsUpdateScrollViewProperties;
	BOOL __needsUpdateTileControllers;
	BOOL __needsUpdateReferencedDataSources;
	BOOL __needsUpdateReferencedCoordinateSystems;
	BOOL __performingBatchUpdates;
	id<PUTilingViewTileSource> _tileSource;
	PUTilingLayout* _layout;
	PUTileAnimator* _tileAnimator;
	id<PUTilingViewTileTransitionDelegate> _tileTransitionDelegate;
	id<PUTilingViewScrollDelegate> _scrollDelegate;
	id<PUTilingViewTileUseDelegate> _tileUseDelegate;
	id<PUTilingCoordinateSystem> _contentCoordinateSystem;
	id<PUTilingCoordinateSystem> _fixedCoordinateSystem;
	PUTilingLayout* __pendingLayout;
	PUReuseQueue* __tileControllerReuseQueue;
	PUTileTree* __activeTileControllers;
	PUTileTree* __inactiveTileControllers;
	PUTileTree* __detachedTileControllers;
	NSMutableDictionary* __referencedDataSourcesByIdentifiers;
	NSMutableSet* __referencedCoordinateSystems;
	PUTileTransitionCoordinator* __tileTransitionCoordinatorForNextLayout;
	long long __reasonForNextLayoutCoordinateSystemUpdate;
	NSMutableArray* __pendingUpdateItems;
	double __pagingSpringPullAdjustment;
	double __pagingFrictionAdjustment;
	NSMutableDictionary* __postLayoutBlocks;
	/*^block*/id _onNextTileControllersUpdateBlock;
	UIEdgeInsets _loadingInsets;

}

@property (setter=_setLayout:,nonatomic,retain) PUTilingLayout * layout;                                                                                            //@synthesize layout=_layout - In the implementation block
@property (setter=_setPendingLayout:,nonatomic,retain) PUTilingLayout * _pendingLayout;                                                                             //@synthesize _pendingLayout=__pendingLayout - In the implementation block
@property (nonatomic,readonly) PUReuseQueue * _tileControllerReuseQueue;                                                                                            //@synthesize _tileControllerReuseQueue=__tileControllerReuseQueue - In the implementation block
@property (nonatomic,readonly) PUTileTree * _activeTileControllers;                                                                                                 //@synthesize _activeTileControllers=__activeTileControllers - In the implementation block
@property (nonatomic,readonly) PUTileTree * _inactiveTileControllers;                                                                                               //@synthesize _inactiveTileControllers=__inactiveTileControllers - In the implementation block
@property (nonatomic,readonly) PUTileTree * _detachedTileControllers;                                                                                               //@synthesize _detachedTileControllers=__detachedTileControllers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _referencedDataSourcesByIdentifiers;                                                                           //@synthesize _referencedDataSourcesByIdentifiers=__referencedDataSourcesByIdentifiers - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _referencedCoordinateSystems;                                                                                         //@synthesize _referencedCoordinateSystems=__referencedCoordinateSystems - In the implementation block
@property (assign,setter=_setNeedsUpdateLayoutVisibleRect:,nonatomic) BOOL _needsUpdateLayoutVisibleRect;                                                           //@synthesize _needsUpdateLayoutVisibleRect=__needsUpdateLayoutVisibleRect - In the implementation block
@property (assign,setter=_setNeedsUpdateTileControllersVisibleRect:,nonatomic) BOOL _needsUpdateTileControllersVisibleRect;                                         //@synthesize _needsUpdateTileControllersVisibleRect=__needsUpdateTileControllersVisibleRect - In the implementation block
@property (assign,setter=_setNeedsUpdateLayoutCoordinateSystem:,nonatomic) BOOL _needsUpdateLayoutCoordinateSystem;                                                 //@synthesize _needsUpdateLayoutCoordinateSystem=__needsUpdateLayoutCoordinateSystem - In the implementation block
@property (assign,setter=_setNeedsUpdateLayout:,nonatomic) BOOL _needsUpdateLayout;                                                                                 //@synthesize _needsUpdateLayout=__needsUpdateLayout - In the implementation block
@property (assign,setter=_setNeedsUpdateScrollViewProperties:,nonatomic) BOOL _needsUpdateScrollViewProperties;                                                     //@synthesize _needsUpdateScrollViewProperties=__needsUpdateScrollViewProperties - In the implementation block
@property (assign,setter=_setNeedsUpdateTileControllers:,nonatomic) BOOL _needsUpdateTileControllers;                                                               //@synthesize _needsUpdateTileControllers=__needsUpdateTileControllers - In the implementation block
@property (assign,setter=_setNeedsUpdateReferencedDataSources:,nonatomic) BOOL _needsUpdateReferencedDataSources;                                                   //@synthesize _needsUpdateReferencedDataSources=__needsUpdateReferencedDataSources - In the implementation block
@property (assign,setter=_setNeedsUpdateReferencedCoordinateSystems:,nonatomic) BOOL _needsUpdateReferencedCoordinateSystems;                                       //@synthesize _needsUpdateReferencedCoordinateSystems=__needsUpdateReferencedCoordinateSystems - In the implementation block
@property (setter=_setTileTransitionCoordinatorForNextLayout:,nonatomic,retain) PUTileTransitionCoordinator * _tileTransitionCoordinatorForNextLayout;              //@synthesize _tileTransitionCoordinatorForNextLayout=__tileTransitionCoordinatorForNextLayout - In the implementation block
@property (assign,setter=_setReasonForNextLayoutCoordinateSystemUpdate:,nonatomic) long long _reasonForNextLayoutCoordinateSystemUpdate;                            //@synthesize _reasonForNextLayoutCoordinateSystemUpdate=__reasonForNextLayoutCoordinateSystemUpdate - In the implementation block
@property (assign,setter=_setPerformingBatchUpdates:,getter=_isPerformingBatchUpdates,nonatomic) BOOL _performingBatchUpdates;                                      //@synthesize _performingBatchUpdates=__performingBatchUpdates - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _pendingUpdateItems;                                                                                                //@synthesize _pendingUpdateItems=__pendingUpdateItems - In the implementation block
@property (assign,setter=_setPagingSpringPullAdjustment:,nonatomic) double _pagingSpringPullAdjustment;                                                             //@synthesize _pagingSpringPullAdjustment=__pagingSpringPullAdjustment - In the implementation block
@property (assign,setter=_setPagingFrictionAdjustment:,nonatomic) double _pagingFrictionAdjustment;                                                                 //@synthesize _pagingFrictionAdjustment=__pagingFrictionAdjustment - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _postLayoutBlocks;                                                                                             //@synthesize _postLayoutBlocks=__postLayoutBlocks - In the implementation block
@property (nonatomic,copy) id onNextTileControllersUpdateBlock;                                                                                                     //@synthesize onNextTileControllersUpdateBlock=_onNextTileControllersUpdateBlock - In the implementation block
@property (assign,nonatomic,__weak) id<PUTilingViewTileSource> tileSource;                                                                                          //@synthesize tileSource=_tileSource - In the implementation block
@property (assign,nonatomic) UIEdgeInsets loadingInsets;                                                                                                            //@synthesize loadingInsets=_loadingInsets - In the implementation block
@property (assign,nonatomic,__weak) PUTileAnimator * tileAnimator;                                                                                                  //@synthesize tileAnimator=_tileAnimator - In the implementation block
@property (assign,nonatomic,__weak) id<PUTilingViewTileTransitionDelegate> tileTransitionDelegate;                                                                  //@synthesize tileTransitionDelegate=_tileTransitionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PUTilingViewScrollDelegate> scrollDelegate;                                                                                  //@synthesize scrollDelegate=_scrollDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PUTilingViewTileUseDelegate> tileUseDelegate;                                                                                //@synthesize tileUseDelegate=_tileUseDelegate - In the implementation block
@property (nonatomic,readonly) id<PUTilingCoordinateSystem> contentCoordinateSystem;                                                                                //@synthesize contentCoordinateSystem=_contentCoordinateSystem - In the implementation block
@property (nonatomic,readonly) id<PUTilingCoordinateSystem> fixedCoordinateSystem;                                                                                  //@synthesize fixedCoordinateSystem=_fixedCoordinateSystem - In the implementation block
@property (nonatomic,readonly) BOOL isAnyTileControllerAnimating; 
+(unsigned long long)_defaultEdgesScrollingContentIntoSafeArea;
-(BOOL)_needsUpdateLayout;
-(void)reattachTileControllers:(id)arg1 withContext:(id)arg2 ;
-(double)_pagingFrictionAdjustment;
-(PUReuseQueue *)_tileControllerReuseQueue;
-(PUTileTree *)_detachedTileControllers;
-(double)_pagingSpringPullAdjustment;
-(void)tileControllerDidEndAnimating:(id)arg1 ;
-(void)_setNeedsUpdateTileControllers:(BOOL)arg1 ;
-(void)_invalidateTileControllersWithTileTransitionCoordinator:(id)arg1 ;
-(void)_invalidateLayoutCoordinateSystemWithReason:(long long)arg1 ;
-(id)_createTileControllerWithIndexPath:(id)arg1 kind:(id)arg2 dataSource:(id)arg3 tileSource:(id)arg4 ;
-(BOOL)_needsUpdateLayoutCoordinateSystem;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateTileControllersWithLayout:(id)arg1 reactivatability:(/*^block*/id)arg2 appearanceHandler:(/*^block*/id)arg3 updateHandler:(/*^block*/id)arg4 disappearanceHandler:(/*^block*/id)arg5 heartBeatHandler:(/*^block*/id)arg6 ;
-(BOOL)isAnyTileControllerAnimating;
-(void)_updateTileControllersVisibleRectIfNeeded;
-(id)onNextTileControllersUpdateBlock;
-(id<PUTilingCoordinateSystem>)contentCoordinateSystem;
-(void)_setNeedsUpdateLayoutCoordinateSystem:(BOOL)arg1 ;
-(id)presentedTileControllerWithIndexPath:(id)arg1 kind:(id)arg2 dataSourceIdentifier:(id)arg3 ;
-(void)_setReasonForNextLayoutCoordinateSystemUpdate:(long long)arg1 ;
-(BOOL)_needsUpdateReferencedCoordinateSystems;
-(void)moveItemFromIndexPath:(id)arg1 toIndexPath:(id)arg2 dataSource:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 layout:(id)arg2 ;
-(id<PUTilingViewTileSource>)tileSource;
-(void)_setNeedsUpdateReferencedDataSources:(BOOL)arg1 ;
-(void)_updateScrollViewPropertiesWithLayout:(id)arg1 ;
-(void)_registerDataSource:(id)arg1 ;
-(void)registerTileControllerClass:(Class)arg1 forReuseIdentifier:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_setLayout:(id)arg1 ;
-(void)_setNeedsUpdateReferencedCoordinateSystems:(BOOL)arg1 ;
-(void)_updateScrollViewPropertiesIfNeeded;
-(void)_updateIfNeeded;
-(void)setScrollDelegate:(id<PUTilingViewScrollDelegate>)arg1 ;
-(void)_handleChangeFromBounds:(CGRect)arg1 fromFrame:(CGRect)arg2 ;
-(PUTileTransitionCoordinator *)_tileTransitionCoordinatorForNextLayout;
-(void)_transferTileControllersToDataSource:(id)arg1 usingDataSourceConverter:(id)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(NSMutableSet *)_referencedCoordinateSystems;
-(id<PUTilingViewScrollDelegate>)scrollDelegate;
-(void)enumerateAllTileControllersUsingBlock:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)_referencedDataSourcesByIdentifiers;
-(void)_applyPendingUpdates;
-(void)setLoadingInsets:(UIEdgeInsets)arg1 ;
-(void)_updateTileControllersWithLayout:(id)arg1 tileTransitionCoordinator:(id)arg2 ;
-(void)setOnNextTileControllersUpdateBlock:(id)arg1 ;
-(UIEdgeInsets)loadingInsets;
-(void)_invalidateReferencedCoordinateSystems;
-(id)freezeTileController:(id)arg1 ;
-(id)_dataSourceWithIdentifier:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(PUTilingLayout *)_pendingLayout;
-(PUTileAnimator *)tileAnimator;
-(void)_updateLayoutCoordinateSystemIfNeeded;
-(NSMutableDictionary *)_postLayoutBlocks;
-(PUTileTree *)_activeTileControllers;
-(void)insertItemAtIndexPath:(id)arg1 dataSource:(id)arg2 ;
-(void)transitionToLayout:(id)arg1 withContext:(id)arg2 animationSetupCompletionHandler:(/*^block*/id)arg3 ;
-(void)registerPostLayoutBlock:(/*^block*/id)arg1 forIdentifier:(id)arg2 ;
-(void)deleteItemAtIndexPath:(id)arg1 dataSource:(id)arg2 ;
-(void)_invalidateLayoutVisibleRect;
-(void)enqueueTileControllerForReuse:(id)arg1 ;
-(void)_setNeedsUpdateTileControllersVisibleRect:(BOOL)arg1 ;
-(BOOL)_needsUpdateReferencedDataSources;
-(void)enumeratePresentedTileControllersInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_setPerformingBatchUpdates:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<PUTilingCoordinateSystem>)fixedCoordinateSystem;
-(void)_setNeedsUpdateScrollViewProperties:(BOOL)arg1 ;
-(void)setTileAnimator:(PUTileAnimator *)arg1 ;
-(id<PUTilingViewTileUseDelegate>)tileUseDelegate;
-(BOOL)_needsUpdateScrollViewProperties;
-(void)_updateLayoutVisibleRectIfNeeded;
-(NSMutableArray *)_pendingUpdateItems;
-(id)dequeueTileControllerWithReuseIdentifier:(id)arg1 ;
-(void)_setPagingFrictionAdjustment:(double)arg1 ;
-(BOOL)_isPerformingBatchUpdates;
-(void)_invalidateTileControllersVisibleRect;
-(void)_updateTileControllersIfNeeded;
-(PUTileTree *)_inactiveTileControllers;
-(long long)_reasonForNextLayoutCoordinateSystemUpdate;
-(id<PUTilingViewTileTransitionDelegate>)tileTransitionDelegate;
-(void)setTileTransitionDelegate:(id<PUTilingViewTileTransitionDelegate>)arg1 ;
-(void)_setPendingLayout:(id)arg1 ;
-(void)reloadItemAtIndexPath:(id)arg1 dataSource:(id)arg2 ;
-(void)_setNeedsUpdate;
-(BOOL)_needsUpdateTileControllersVisibleRect;
-(void)_updateLayoutIfNeeded;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(void)_updateReferencedDataSourcesIfNeeded;
-(void)invalidateLayout:(id)arg1 withContext:(id)arg2 ;
-(void)setTileUseDelegate:(id<PUTilingViewTileUseDelegate>)arg1 ;
-(void)_runPostLayoutBlocks;
-(void)_invalidateScrollViewProperties;
-(void)_updateReferencedCoordinateSystemsIfNeeded;
-(void)setTileSource:(id<PUTilingViewTileSource>)arg1 ;
-(BOOL)_needsUpdateTileControllers;
-(void)_invalidateReferencedDataSources;
-(void)_setPagingSpringPullAdjustment:(double)arg1 ;
-(void)_setTileTransitionCoordinatorForNextLayout:(id)arg1 ;
-(void)_enumerateActiveTileControllersUsingBlock:(/*^block*/id)arg1 ;
-(void)_invalidateTileControllers;
-(void)_enumerateAllTileControllersUsingBlock:(/*^block*/id)arg1 ;
-(void)_setNeedsUpdateLayout:(BOOL)arg1 ;
-(void)_setNeedsUpdateLayoutVisibleRect:(BOOL)arg1 ;
-(void)detachTileControllers:(id)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(id)tileControllerWithIndexPath:(id)arg1 kind:(id)arg2 dataSourceIdentifier:(id)arg3 ;
-(void)_invalidateLayout;
-(void)transitionToLayout:(id)arg1 ;
-(PUTilingLayout *)layout;
-(BOOL)_needsUpdateLayoutVisibleRect;
-(void)_adjustScrollViewPagingDeceleration;
@end

