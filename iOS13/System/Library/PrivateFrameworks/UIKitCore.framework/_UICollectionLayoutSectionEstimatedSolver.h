/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionLayoutSectionSolver.h>
#import <UIKitCore/_UICollectionLayoutAuxillaryHosting.h>

@protocol NSCollectionLayoutContainer, _UICollectionPreferredSizes;
@class NSCollectionLayoutSection, UITraitCollection, _UICollectionLayoutAuxillaryItemSolver, _UICollectionLayoutSupplementaryRegistrar, _UICollectionLayoutSolutionState, NSString, NSIndexSet;

@interface _UICollectionLayoutSectionEstimatedSolver : NSObject <_UICollectionLayoutSectionSolver, _UICollectionLayoutAuxillaryHosting> {

	BOOL _layoutRTL;
	BOOL _shouldAdjustContentSizeForPartialLastGroupSolution;
	NSCollectionLayoutSection* _layoutSection;
	id<NSCollectionLayoutContainer> _container;
	UITraitCollection* _traitCollection;
	unsigned long long _layoutAxis;
	long long _frameCount;
	id<_UICollectionPreferredSizes> _preferredSizes;
	_UICollectionLayoutAuxillaryItemSolver* _sectionSupplementarySolution;
	_UICollectionLayoutSupplementaryRegistrar* _sectionSupplementaryRegistrar;
	id<NSCollectionLayoutContainer> _memoizedSupplementaryHostContainer;
	_UICollectionLayoutSolutionState* _solutionState;
	unsigned long long _containerLayoutAxis;
	CGPoint _orthogonalOffset;
	CGVector _orthogonalScrollingPrefetchingUnitVector;

}

@property (nonatomic,readonly) id<_UICollectionPreferredSizes> preferredSizes;                                       //@synthesize preferredSizes=_preferredSizes - In the implementation block
@property (nonatomic,retain) _UICollectionLayoutAuxillaryItemSolver * sectionSupplementarySolution;                  //@synthesize sectionSupplementarySolution=_sectionSupplementarySolution - In the implementation block
@property (nonatomic,retain) _UICollectionLayoutSupplementaryRegistrar * sectionSupplementaryRegistrar;              //@synthesize sectionSupplementaryRegistrar=_sectionSupplementaryRegistrar - In the implementation block
@property (nonatomic,retain) id<NSCollectionLayoutContainer> memoizedSupplementaryHostContainer;                     //@synthesize memoizedSupplementaryHostContainer=_memoizedSupplementaryHostContainer - In the implementation block
@property (nonatomic,retain) _UICollectionLayoutSolutionState * solutionState;                                       //@synthesize solutionState=_solutionState - In the implementation block
@property (assign,nonatomic) unsigned long long containerLayoutAxis;                                                 //@synthesize containerLayoutAxis=_containerLayoutAxis - In the implementation block
@property (assign,nonatomic) CGVector orthogonalScrollingPrefetchingUnitVector;                                      //@synthesize orthogonalScrollingPrefetchingUnitVector=_orthogonalScrollingPrefetchingUnitVector - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSCollectionLayoutSection * layoutSection;                                            //@synthesize layoutSection=_layoutSection - In the implementation block
@property (nonatomic,readonly) id<NSCollectionLayoutContainer> container;                                            //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) UITraitCollection * traitCollection;                                                  //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,readonly) BOOL layoutRTL;                                                                       //@synthesize layoutRTL=_layoutRTL - In the implementation block
@property (nonatomic,readonly) unsigned long long layoutAxis;                                                        //@synthesize layoutAxis=_layoutAxis - In the implementation block
@property (nonatomic,readonly) long long frameCount;                                                                 //@synthesize frameCount=_frameCount - In the implementation block
@property (nonatomic,readonly) CGRect effectiveContentFrame; 
@property (nonatomic,readonly) CGSize contentSize; 
@property (nonatomic,readonly) NSIndexSet * pinnedSupplementaryIndexes; 
@property (assign,nonatomic) BOOL shouldAdjustContentSizeForPartialLastGroupSolution;                                //@synthesize shouldAdjustContentSizeForPartialLastGroupSolution=_shouldAdjustContentSizeForPartialLastGroupSolution - In the implementation block
@property (assign,nonatomic) CGPoint orthogonalOffset;                                                               //@synthesize orthogonalOffset=_orthogonalOffset - In the implementation block
-(id<NSCollectionLayoutContainer>)container;
-(CGSize)contentSize;
-(UITraitCollection *)traitCollection;
-(void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4 preferredSizes:(id)arg5 layoutRTL:(BOOL)arg6 ;
-(void)setContainerLayoutAxis:(unsigned long long)arg1 ;
-(NSCollectionLayoutSection *)layoutSection;
-(void)setSectionSupplementaryRegistrar:(_UICollectionLayoutSupplementaryRegistrar *)arg1 ;
-(NSIndexSet *)pinnedSupplementaryIndexes;
-(long long)frameCount;
-(unsigned long long)layoutAxis;
-(_UICollectionLayoutSupplementaryRegistrar *)sectionSupplementaryRegistrar;
-(id)supplementaryFrameWithKind:(id)arg1 index:(long long)arg2 ;
-(id)_sectionContainer;
-(BOOL)layoutRTL;
-(id<_UICollectionPreferredSizes>)preferredSizes;
-(unsigned long long)containerLayoutAxis;
-(id)queryFramesIntersectingRect:(CGRect)arg1 frameOffset:(CGPoint)arg2 ;
-(CGSize)auxillaryHostContentSize;
-(CGSize)auxillaryHostPinningContentSize;
-(id)auxillaryHostContainer;
-(id)auxillaryHostAuxillaryItems;
-(BOOL)auxillaryHostShouldLayoutRTL;
-(unsigned long long)auxillaryHostLayoutAxis;
-(long long)auxillaryHostAuxillaryKind;
-(id)auxillaryHostSupplementaryEnroller;
-(id)auxillaryHostPreferredSizes;
-(void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4 ;
-(void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4 preferredSizes:(id)arg5 ;
-(id)resolveWithParameters:(id)arg1 preferredSizes:(id)arg2 ;
-(void)updatePinnedSupplementaryItemsWithVisibleBounds:(CGRect)arg1 ;
-(id)queryFramesIntersectingRect:(CGRect)arg1 ;
-(id)frameForIndex:(long long)arg1 ;
-(id)sectionSupplementaryFrameWithKind:(id)arg1 index:(long long)arg2 ;
-(id)sectionSupplementaryFrameForIndex:(long long)arg1 ;
-(long long)sectionSupplementaryKindIndexForEnrollmentIdentifier:(id)arg1 ;
-(id)allSupplementaryKeys;
-(id)supplementaryKeysAssociatedWithItemAtIndex:(long long)arg1 ;
-(id)visualDescription;
-(void)_setOrthogonalOffset:(CGPoint)arg1 ;
-(double)_dimensionForRootGroupAlongAxis:(unsigned long long)arg1 ;
-(CGRect)effectiveContentFrame;
-(BOOL)shouldAdjustContentSizeForPartialLastGroupSolution;
-(void)setShouldAdjustContentSizeForPartialLastGroupSolution:(BOOL)arg1 ;
-(CGPoint)orthogonalOffset;
-(void)setOrthogonalOffset:(CGPoint)arg1 ;
-(CGVector)orthogonalScrollingPrefetchingUnitVector;
-(id)initWithLayoutSection:(id)arg1 ;
-(void)setOrthogonalScrollingPrefetchingUnitVector:(CGVector)arg1 ;
-(id)_solveWithParameters:(id)arg1 ;
-(void)_configureInitialOrthogonalPrefetchingUnitVector;
-(_UICollectionLayoutAuxillaryItemSolver *)sectionSupplementarySolution;
-(_UICollectionLayoutSolutionState *)solutionState;
-(id)_indexesOfBookmarksAffectedByResolveItems:(id)arg1 ;
-(void)_updateSolutionAuxillaryRangeIndexerKindDict:(id)arg1 fromBookmark:(id)arg2 ;
-(CGRect)_adjustContentFrameForLastPartialSolutionIfNeededForContentFrame:(CGRect)arg1 bookmarks:(id)arg2 ;
-(void)setSolutionState:(_UICollectionLayoutSolutionState *)arg1 ;
-(void)setSectionSupplementarySolution:(_UICollectionLayoutAuxillaryItemSolver *)arg1 ;
-(id<NSCollectionLayoutContainer>)memoizedSupplementaryHostContainer;
-(void)setMemoizedSupplementaryHostContainer:(id<NSCollectionLayoutContainer>)arg1 ;
-(CGRect)_rectWithContentInsetTrailingLayoutDimensionAddedToToRect:(CGRect)arg1 insets:(NSDirectionalEdgeInsets)arg2 layoutAxis:(unsigned long long)arg3 ;
@end

