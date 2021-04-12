/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionLayoutSectionSolver.h>
#import <UIKitCore/_UICollectionLayoutAuxillaryHosting.h>

@protocol NSCollectionLayoutContainer, _UICollectionPreferredSizes;
@class NSCollectionLayoutSection, UITraitCollection, _UICollectionLayoutAuxillaryItemSolver, _UICollectionLayoutSupplementaryRegistrar, _UICollectionLayoutSolutionState, NSIndexSet, NSString;

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)frameCount;
-(id)auxillaryHostContainer;
-(id)visualDescription;
-(_UICollectionLayoutSupplementaryRegistrar *)sectionSupplementaryRegistrar;
-(id)supplementaryFrameWithKind:(id)arg1 index:(long long)arg2 ;
-(unsigned long long)containerLayoutAxis;
-(CGSize)auxillaryHostContentSize;
-(id)auxillaryHostAuxillaryItems;
-(id)sectionSupplementaryFrameForIndex:(long long)arg1 ;
-(BOOL)auxillaryHostShouldLayoutRTL;
-(CGVector)orthogonalScrollingPrefetchingUnitVector;
-(id<NSCollectionLayoutContainer>)memoizedSupplementaryHostContainer;
-(id)frameForIndex:(long long)arg1 ;
-(UITraitCollection *)traitCollection;
-(id)queryFramesIntersectingRect:(CGRect)arg1 frameOffset:(CGPoint)arg2 ;
-(BOOL)layoutRTL;
-(void)updatePinnedSupplementaryItemsWithVisibleBounds:(CGRect)arg1 ;
-(void)_configureInitialOrthogonalPrefetchingUnitVector;
-(id)resolveWithParameters:(id)arg1 preferredSizes:(id)arg2 ;
-(NSCollectionLayoutSection *)layoutSection;
-(CGRect)effectiveContentFrame;
-(void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4 preferredSizes:(id)arg5 layoutRTL:(BOOL)arg6 ;
-(id)initWithLayoutSection:(id)arg1 ;
-(void)setShouldAdjustContentSizeForPartialLastGroupSolution:(BOOL)arg1 ;
-(void)setContainerLayoutAxis:(unsigned long long)arg1 ;
-(unsigned long long)layoutAxis;
-(NSIndexSet *)pinnedSupplementaryIndexes;
-(void)setOrthogonalOffset:(CGPoint)arg1 ;
-(void)_setOrthogonalOffset:(CGPoint)arg1 ;
-(CGSize)auxillaryHostPinningContentSize;
-(long long)sectionSupplementaryKindIndexForEnrollmentIdentifier:(id)arg1 ;
-(id)_sectionContainer;
-(double)_dimensionForRootGroupAlongAxis:(unsigned long long)arg1 ;
-(void)setOrthogonalScrollingPrefetchingUnitVector:(CGVector)arg1 ;
-(long long)auxillaryHostAuxillaryKind;
-(BOOL)shouldAdjustContentSizeForPartialLastGroupSolution;
-(id)queryFramesIntersectingRect:(CGRect)arg1 ;
-(CGPoint)orthogonalOffset;
-(id)auxillaryHostPreferredSizes;
-(void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4 preferredSizes:(id)arg5 ;
-(id)sectionSupplementaryFrameWithKind:(id)arg1 index:(long long)arg2 ;
-(void)setSectionSupplementaryRegistrar:(_UICollectionLayoutSupplementaryRegistrar *)arg1 ;
-(void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4 ;
-(unsigned long long)auxillaryHostLayoutAxis;
-(id)auxillaryHostSupplementaryEnroller;
-(CGSize)contentSize;
-(void)setSectionSupplementarySolution:(_UICollectionLayoutAuxillaryItemSolver *)arg1 ;
-(_UICollectionLayoutAuxillaryItemSolver *)sectionSupplementarySolution;
-(_UICollectionLayoutSolutionState *)solutionState;
-(id)_solveWithParameters:(id)arg1 ;
-(id<_UICollectionPreferredSizes>)preferredSizes;
-(CGRect)_rectWithContentInsetTrailingLayoutDimensionAddedToToRect:(CGRect)arg1 insets:(NSDirectionalEdgeInsets)arg2 layoutAxis:(unsigned long long)arg3 ;
-(CGRect)_adjustContentFrameForLastPartialSolutionIfNeededForContentFrame:(CGRect)arg1 bookmarks:(id)arg2 ;
-(id)_indexesOfBookmarksAffectedByResolveItems:(id)arg1 ;
-(void)setSolutionState:(_UICollectionLayoutSolutionState *)arg1 ;
-(id<NSCollectionLayoutContainer>)container;
-(void)setMemoizedSupplementaryHostContainer:(id<NSCollectionLayoutContainer>)arg1 ;
-(void)_updateSolutionAuxillaryRangeIndexerKindDict:(id)arg1 fromBookmark:(id)arg2 ;
@end

