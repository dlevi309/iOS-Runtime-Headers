/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionLayoutAuxillaryHosting.h>
#import <UIKitCore/_UIDynamicReferenceSystem.h>

@protocol NSCollectionLayoutContainer;
@class UITraitCollection, _UIDataSourceSnapshotter, NSIndexSet, _UICollectionCompositionalLayoutSolverOptions, _UICollectionCompositionalLayoutDynamicAnimator, _UICollectionLayoutDynamicsConfiguration, NSArray, _UIRTree, _UICollectionLayoutSectionGeometryTranslator, NSMutableDictionary, _UICollectionLayoutAuxillaryItemSolver, _UICollectionPreferredSizes, NSString;

@interface _UICollectionCompositionalLayoutSolver : NSObject <_UICollectionLayoutAuxillaryHosting, _UIDynamicReferenceSystem> {

	BOOL _estimatesSizes;
	BOOL _hasOrthogonalSrollingSections;
	BOOL _shouldPerformPhysicalRTLTransforms;
	BOOL _roundsToScreenScale;
	BOOL _layoutRTL;
	id<NSCollectionLayoutContainer> _container;
	UITraitCollection* _traitCollection;
	unsigned long long _layoutAxis;
	_UIDataSourceSnapshotter* _dataSourceSnapshot;
	double _interSectionSpacing;
	NSIndexSet* _orthogonalScrollingSectionIndexes;
	/*^block*/id _dynamicsConfigurationHandler;
	_UICollectionCompositionalLayoutSolverOptions* _options;
	Class _layoutAttributeClass;
	Class _invalidationContextClass;
	/*^block*/id _invalidationHandler;
	double _memoizedScreenScale;
	/*^block*/id _sectionProvider;
	NSIndexSet* _solutionBookmarkIndexesWithPinnedSupplementaryItems;
	_UICollectionCompositionalLayoutDynamicAnimator* _dynamicAnimator;
	_UICollectionLayoutDynamicsConfiguration* _dynamicsConfiguration;
	NSArray* _solutionBookmarks;
	_UIRTree* _sectionIndexer;
	_UICollectionLayoutSectionGeometryTranslator* _sectionGeometryTranslator;
	NSMutableDictionary* _cachedItemAttributes;
	NSMutableDictionary* _cachedSupplementaryAttributes;
	NSMutableDictionary* _cachedDecorationAttributes;
	NSArray* _globalSupplementaryItems;
	_UICollectionLayoutAuxillaryItemSolver* _globalSupplementarySolver;
	_UICollectionPreferredSizes* _globalSupplementaryPreferredSizes;
	long long _numberOfSectionsWithTransformVisibleItemsHandler;
	CGSize _actualContentSize;

}

@property (nonatomic,retain) _UICollectionCompositionalLayoutSolverOptions * options;                               //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) id<NSCollectionLayoutContainer> container;                                             //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) unsigned long long layoutAxis;                                                         //@synthesize layoutAxis=_layoutAxis - In the implementation block
@property (nonatomic,retain) _UIDataSourceSnapshotter * dataSourceSnapshot;                                         //@synthesize dataSourceSnapshot=_dataSourceSnapshot - In the implementation block
@property (nonatomic,retain) Class layoutAttributeClass;                                                            //@synthesize layoutAttributeClass=_layoutAttributeClass - In the implementation block
@property (nonatomic,retain) Class invalidationContextClass;                                                        //@synthesize invalidationContextClass=_invalidationContextClass - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                                                  //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) double memoizedScreenScale;                                                            //@synthesize memoizedScreenScale=_memoizedScreenScale - In the implementation block
@property (assign,nonatomic) BOOL roundsToScreenScale;                                                              //@synthesize roundsToScreenScale=_roundsToScreenScale - In the implementation block
@property (nonatomic,copy) id sectionProvider;                                                                      //@synthesize sectionProvider=_sectionProvider - In the implementation block
@property (assign,nonatomic) BOOL layoutRTL;                                                                        //@synthesize layoutRTL=_layoutRTL - In the implementation block
@property (assign,nonatomic) CGSize actualContentSize;                                                              //@synthesize actualContentSize=_actualContentSize - In the implementation block
@property (assign,nonatomic) BOOL estimatesSizes;                                                                   //@synthesize estimatesSizes=_estimatesSizes - In the implementation block
@property (nonatomic,retain) NSIndexSet * solutionBookmarkIndexesWithPinnedSupplementaryItems;                      //@synthesize solutionBookmarkIndexesWithPinnedSupplementaryItems=_solutionBookmarkIndexesWithPinnedSupplementaryItems - In the implementation block
@property (nonatomic,retain) _UICollectionCompositionalLayoutDynamicAnimator * dynamicAnimator;                     //@synthesize dynamicAnimator=_dynamicAnimator - In the implementation block
@property (nonatomic,retain) _UICollectionLayoutDynamicsConfiguration * dynamicsConfiguration;                      //@synthesize dynamicsConfiguration=_dynamicsConfiguration - In the implementation block
@property (nonatomic,retain) NSArray * solutionBookmarks;                                                           //@synthesize solutionBookmarks=_solutionBookmarks - In the implementation block
@property (nonatomic,retain) _UIRTree * sectionIndexer;                                                             //@synthesize sectionIndexer=_sectionIndexer - In the implementation block
@property (nonatomic,retain) _UICollectionLayoutSectionGeometryTranslator * sectionGeometryTranslator;              //@synthesize sectionGeometryTranslator=_sectionGeometryTranslator - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedItemAttributes;                                            //@synthesize cachedItemAttributes=_cachedItemAttributes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedSupplementaryAttributes;                                   //@synthesize cachedSupplementaryAttributes=_cachedSupplementaryAttributes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedDecorationAttributes;                                      //@synthesize cachedDecorationAttributes=_cachedDecorationAttributes - In the implementation block
@property (nonatomic,retain) NSArray * globalSupplementaryItems;                                                    //@synthesize globalSupplementaryItems=_globalSupplementaryItems - In the implementation block
@property (nonatomic,retain) _UICollectionLayoutAuxillaryItemSolver * globalSupplementarySolver;                    //@synthesize globalSupplementarySolver=_globalSupplementarySolver - In the implementation block
@property (nonatomic,retain) _UICollectionPreferredSizes * globalSupplementaryPreferredSizes;                       //@synthesize globalSupplementaryPreferredSizes=_globalSupplementaryPreferredSizes - In the implementation block
@property (assign,nonatomic) long long numberOfSectionsWithTransformVisibleItemsHandler;                            //@synthesize numberOfSectionsWithTransformVisibleItemsHandler=_numberOfSectionsWithTransformVisibleItemsHandler - In the implementation block
@property (assign,nonatomic) BOOL shouldPerformPhysicalRTLTransforms;                                               //@synthesize shouldPerformPhysicalRTLTransforms=_shouldPerformPhysicalRTLTransforms - In the implementation block
@property (assign,nonatomic) BOOL hasOrthogonalSrollingSections;                                                    //@synthesize hasOrthogonalSrollingSections=_hasOrthogonalSrollingSections - In the implementation block
@property (nonatomic,retain) NSIndexSet * orthogonalScrollingSectionIndexes;                                        //@synthesize orthogonalScrollingSectionIndexes=_orthogonalScrollingSectionIndexes - In the implementation block
@property (nonatomic,readonly) UITraitCollection * traitCollection;                                                 //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,readonly) double interSectionSpacing;                                                          //@synthesize interSectionSpacing=_interSectionSpacing - In the implementation block
@property (nonatomic,readonly) CGSize contentSize; 
@property (nonatomic,readonly) BOOL hasPinnedSupplementaryItems; 
@property (nonatomic,readonly) NSArray * layoutAttributesForPinnedSupplementaryItems; 
@property (nonatomic,readonly) BOOL shouldTransformVisibleItemsDuringContentOffsetChanges; 
@property (nonatomic,readonly) BOOL shouldUpdateVisibleBoundsForDynamicAnimator; 
@property (nonatomic,copy) id dynamicsConfigurationHandler;                                                         //@synthesize dynamicsConfigurationHandler=_dynamicsConfigurationHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_UICollectionCompositionalLayoutSolverOptions *)options;
-(id<NSCollectionLayoutContainer>)container;
-(void)setContainer:(id<NSCollectionLayoutContainer>)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setOptions:(_UICollectionCompositionalLayoutSolverOptions *)arg1 ;
-(id)invalidationHandler;
-(CGRect)bounds;
-(CGSize)contentSize;
-(UITraitCollection *)traitCollection;
-(void)setLayoutAxis:(unsigned long long)arg1 ;
-(void)setLayoutRTL:(BOOL)arg1 ;
-(_UICollectionLayoutSectionGeometryTranslator *)sectionGeometryTranslator;
-(unsigned long long)layoutAxis;
-(BOOL)layoutRTL;
-(void)setSectionGeometryTranslator:(_UICollectionLayoutSectionGeometryTranslator *)arg1 ;
-(CGSize)auxillaryHostContentSize;
-(CGSize)auxillaryHostPinningContentSize;
-(id)auxillaryHostContainer;
-(id)auxillaryHostAuxillaryItems;
-(BOOL)auxillaryHostShouldLayoutRTL;
-(unsigned long long)auxillaryHostLayoutAxis;
-(long long)auxillaryHostAuxillaryKind;
-(id)auxillaryHostSupplementaryEnroller;
-(id)auxillaryHostPreferredSizes;
-(id)visualDescription;
-(id)resolveForUpdatedGlobalSupplementaries:(id)arg1 ;
-(Class)invalidationContextClass;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 withIndexPath:(id)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 withIndexPath:(id)arg2 ;
-(BOOL)hasPinnedSupplementaryItems;
-(BOOL)shouldTransformVisibleItemsDuringContentOffsetChanges;
-(BOOL)shouldUpdateVisibleBoundsForDynamicAnimator;
-(NSArray *)layoutAttributesForPinnedSupplementaryItems;
-(BOOL)updatePreferredSizeIfNeededForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2 ;
-(BOOL)estimatesSizes;
-(id)resolveForInvalidatedPreferredAttributes:(id)arg1 ;
-(void)prepareForPreferredAttributesQueryForView:(id)arg1 withLayoutAttributes:(id)arg2 ;
-(double)interSectionSpacing;
-(void)setInvalidationContextClass:(Class)arg1 ;
-(BOOL)roundsToScreenScale;
-(void)setRoundsToScreenScale:(BOOL)arg1 ;
-(void)setGlobalSupplementaryItems:(NSArray *)arg1 ;
-(id)initWithContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 dataSourceSnapshot:(id)arg4 options:(id)arg5 sectionProvider:(/*^block*/id)arg6 ;
-(id)dynamicsConfigurationHandler;
-(void)setDynamicsConfigurationHandler:(id)arg1 ;
-(BOOL)shouldPerformPhysicalRTLTransforms;
-(id)resolveSolutionForUpdate:(id)arg1 ;
-(id)resolveForContainerChange:(id)arg1 ;
-(id)resolveForMarginsChange:(id)arg1 ;
-(BOOL)shouldInvalidateForNewTraitCollection:(id)arg1 ;
-(BOOL)updateVisibleBoundsForDynamicAnimator:(CGRect)arg1 previousVisibleBounds:(CGRect)arg2 ;
-(id)updatePinnedSectionSupplementaryItemsForVisibleBounds:(CGRect)arg1 ;
-(BOOL)hasOrthogonalSrollingSections;
-(NSIndexSet *)orthogonalScrollingSectionIndexes;
-(void)setOrthogonalOffset:(CGPoint)arg1 forSection:(long long)arg2 ;
-(CGPoint)orthogonalOffsetForSection:(long long)arg1 ;
-(long long)orthogonalScrollingBehaviorForSection:(long long)arg1 ;
-(double)orthogonalScrollingPagingDimensionForSection:(long long)arg1 ;
-(BOOL)shouldCenterOrthogonalScrollingPageForSection:(long long)arg1 ;
-(CGPoint)orthogonalContentOffsetForProposedContentOffset:(CGPoint)arg1 section:(long long)arg2 ;
-(BOOL)orthogonalScrollingUsesCustomContentOffsetForSection:(long long)arg1 ;
-(double)orthogonalScrollingDecelerationRateForSection:(long long)arg1 ;
-(CGVector)scrollingUnitVectorForOrthogonalScrollingSection:(long long)arg1 ;
-(CGRect)layoutRectForSection:(long long)arg1 ;
-(CGSize)effectiveContentSizeForSection:(long long)arg1 ;
-(NSDirectionalEdgeInsets)contentInsetsForSection:(long long)arg1 ;
-(id)extendedAttributesQueryIncludingOrthogonalScrollingRegions:(CGRect)arg1 ;
-(BOOL)orthogonalScrollingSectionSupplementaryShouldScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2 ;
-(CGRect)orthogonalFrameWithOffsetElidedForItemWithLayoutAttributes:(id)arg1 frame:(CGRect)arg2 ;
-(BOOL)elementShouldAppearAbove:(id)arg1 ;
-(id)mutatedVisibleItemsForElementsForVisibleBounds:(CGRect)arg1 ;
-(NSArray *)globalSupplementaryItems;
-(void)_solve;
-(NSIndexSet *)solutionBookmarkIndexesWithPinnedSupplementaryItems;
-(NSArray *)solutionBookmarks;
-(id)_cachedSupplementaryAttributesForElementKind:(id)arg1 indexPath:(id)arg2 ;
-(void)_invalidateAttributes:(id)arg1 ;
-(_UICollectionLayoutAuxillaryItemSolver *)globalSupplementarySolver;
-(CGPoint)_globalSupplementaryFrameOffset;
-(id)_createAndCacheLayoutAttributesForSupplementaryItemAtIndexPath:(id)arg1 elementKind:(id)arg2 frame:(CGRect)arg3 zIndex:(long long)arg4 ;
-(_UICollectionLayoutDynamicsConfiguration *)dynamicsConfiguration;
-(_UIDataSourceSnapshotter *)dataSourceSnapshot;
-(void)_layoutAttributesForElementsInRect:(CGRect)arg1 handler:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)cachedSupplementaryAttributes;
-(NSMutableDictionary *)cachedDecorationAttributes;
-(NSMutableDictionary *)cachedItemAttributes;
-(CGRect)_globalFrameForSolutionFrame:(CGRect)arg1 bookmark:(id)arg2 ;
-(id)_createAndCacheLayoutAttributesForItemAtIndexPath:(id)arg1 frame:(CGRect)arg2 zIndex:(long long)arg3 ;
-(id)_cachedDecorationAttributesForElementKind:(id)arg1 indexPath:(id)arg2 ;
-(id)_createAndCacheLayoutAttributesForDecorationItemAtIndexPath:(id)arg1 elementKind:(id)arg2 frame:(CGRect)arg3 additionalContentInset:(NSDirectionalEdgeInsets)arg4 zIndex:(long long)arg5 ;
-(long long)numberOfSectionsWithTransformVisibleItemsHandler;
-(id)_attributesQueryRectsForQueryRect:(CGRect)arg1 ;
-(void)_computeDeletedItemsAffectingSupplementariesForUpdate:(id)arg1 resolveResult:(id)arg2 ;
-(id)_computeInitialSupplementaryKeysSectionDictForUpdate:(id)arg1 ;
-(void)setDataSourceSnapshot:(_UIDataSourceSnapshotter *)arg1 ;
-(id)_rebasedPreferredSizesWithDataSourceTranslator:(id)arg1 ;
-(id)_rebasedSectionLayoutsWithDataSourceTranslator:(id)arg1 ;
-(id)_queryClientForSectionDefintionForSectionIndex:(long long)arg1 ;
-(void)_solveWithSectionLayouts:(id)arg1 preferredSizesDict:(id)arg2 dataSourceSnapshot:(id)arg3 update:(id)arg4 ;
-(void)_diffNonItemSupplementariesForUpdate:(id)arg1 resolveResult:(id)arg2 initialSupplementaryKeysSectionDict:(id)arg3 ;
-(void)_configureLayoutForSections:(id)arg1 ;
-(BOOL)_canResolveWithoutQueryingSectionDefintionsForContainerChange;
-(id)_resolveOptionallyQueryingForSectionDefintions:(BOOL)arg1 retainPreferredSizing:(BOOL)arg2 ;
-(void)_recomputeSolutionBookmarksAndContentSize;
-(void)_updateBookmarkOffsetsForGlobalSupplementariesIfNeeded;
-(void)_invalidateAllAttributes;
-(id)_resolveOptionallyQueryingForSectionDefintions:(BOOL)arg1 ;
-(_UICollectionPreferredSizes *)globalSupplementaryPreferredSizes;
-(void)invalidateCachedItemsAttributes;
-(void)invalidateCachedSupplementaryAttributes;
-(void)invalidateCachedDecorationAttributes;
-(CGSize)actualContentSize;
-(BOOL)orthogonalScrollingSectionDecorationShouldScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2 ;
-(_UIRTree *)sectionIndexer;
-(id)_snapshotBookmarks:(id)arg1 ;
-(void)setShouldPerformPhysicalRTLTransforms:(BOOL)arg1 ;
-(CGSize)_clampedSolutionSizeForSolution:(id)arg1 layoutAxis:(unsigned long long)arg2 scrollsOrthogonally:(BOOL)arg3 ;
-(void)_updateSectionIndexer:(id)arg1 frame:(CGRect)arg2 solution:(id)arg3 section:(long long)arg4 ;
-(void)_restoreStateFromBookmarkSnapshots:(id)arg1 bookmarks:(id)arg2 update:(id)arg3 ;
-(void)setSolutionBookmarks:(NSArray *)arg1 ;
-(CGSize)_adjustedContentSizeIncludingContainerInsetsForSize:(CGSize)arg1 ;
-(void)setActualContentSize:(CGSize)arg1 ;
-(void)setSectionIndexer:(_UIRTree *)arg1 ;
-(void)setSolutionBookmarkIndexesWithPinnedSupplementaryItems:(NSIndexSet *)arg1 ;
-(void)setNumberOfSectionsWithTransformVisibleItemsHandler:(long long)arg1 ;
-(void)_updateGeometryTranslator;
-(void)setGlobalSupplementarySolver:(_UICollectionLayoutAuxillaryItemSolver *)arg1 ;
-(void)setGlobalSupplementaryPreferredSizes:(_UICollectionPreferredSizes *)arg1 ;
-(void)setOrthogonalScrollingSectionIndexes:(NSIndexSet *)arg1 ;
-(void)setHasOrthogonalSrollingSections:(BOOL)arg1 ;
-(void)setEstimatesSizes:(BOOL)arg1 ;
-(BOOL)_sectionHasBackgroundDecorationView:(long long)arg1 ;
-(Class)layoutAttributeClass;
-(void)_enrichLayoutAttributes:(id)arg1 inSection:(id)arg2 ;
-(void)_setCachedSupplementaryAttributesForElementKind:(id)arg1 indexPath:(id)arg2 attributes:(id)arg3 ;
-(void)_setCachedDecorationAttributesForElementKind:(id)arg1 indexPath:(id)arg2 attributes:(id)arg3 ;
-(CGPoint)_attributesOffsetFromContainer;
-(CGRect)_attributesQueryRectForRect:(CGRect)arg1 ;
-(void)invalidateCachedItemsAttributesForItemsAtIndexPaths:(id)arg1 ;
-(void)invalidateCachedSupplementaryAttributesForElementKind:(id)arg1 atIndexPaths:(id)arg2 ;
-(void)invalidateCachedDecorationAttributesForElementKind:(id)arg1 atIndexPaths:(id)arg2 ;
-(id)sectionProvider;
-(void)_registerDecorationItemsIfNeeded:(id)arg1 ;
-(CGPoint)_firstBookmarkOffset;
-(CGRect)_dynamicReferenceBounds;
-(void)setLayoutAttributeClass:(Class)arg1 ;
-(double)memoizedScreenScale;
-(void)setMemoizedScreenScale:(double)arg1 ;
-(void)setSectionProvider:(id)arg1 ;
-(_UICollectionCompositionalLayoutDynamicAnimator *)dynamicAnimator;
-(void)setDynamicAnimator:(_UICollectionCompositionalLayoutDynamicAnimator *)arg1 ;
-(void)setDynamicsConfiguration:(_UICollectionLayoutDynamicsConfiguration *)arg1 ;
-(void)setCachedItemAttributes:(NSMutableDictionary *)arg1 ;
-(void)setCachedSupplementaryAttributes:(NSMutableDictionary *)arg1 ;
-(void)setCachedDecorationAttributes:(NSMutableDictionary *)arg1 ;
@end

