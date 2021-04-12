/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionLayoutSectionSolver.h>
#import <UIKitCore/_UICollectionLayoutAuxillaryHosting.h>

@protocol NSCollectionLayoutContainer;
@class NSCollectionLayoutSection, UITraitCollection, _UICollectionLayoutItemSolver, _UICollectionLayoutAuxillaryItemSolver, _UICollectionLayoutSupplementaryRegistrar, _UICollectionLayoutSectionGeometryTranslator, NSString, NSIndexSet;

@interface _UICollectionLayoutSectionFixedSolver : NSObject <_UICollectionLayoutSectionSolver, _UICollectionLayoutAuxillaryHosting> {

	BOOL _shouldAdjustContentSizeForPartialLastGroupSolution;
	BOOL _layoutRTL;
	NSCollectionLayoutSection* _layoutSection;
	id<NSCollectionLayoutContainer> _container;
	UITraitCollection* _traitCollection;
	unsigned long long _layoutAxis;
	unsigned long long _containerLayoutAxis;
	long long _frameCount;
	_UICollectionLayoutItemSolver* _solution;
	_UICollectionLayoutAuxillaryItemSolver* _sectionAuxillarySolution;
	_UICollectionLayoutSupplementaryRegistrar* _sectionSupplementaryRegistrar;
	_UICollectionLayoutSectionGeometryTranslator* _sectionGeometryTranslator;
	id<NSCollectionLayoutContainer> _memoizedAuxillaryHostContainer;
	CGPoint _orthogonalOffset;
	CGVector _orthogonalScrollingPrefetchingUnitVector;

}

@property (nonatomic,retain) NSCollectionLayoutSection * layoutSection;                                              //@synthesize layoutSection=_layoutSection - In the implementation block
@property (nonatomic,retain) id<NSCollectionLayoutContainer> container;                                              //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;                                                    //@synthesize traitCollection=_traitCollection - In the implementation block
@property (assign,nonatomic) BOOL layoutRTL;                                                                         //@synthesize layoutRTL=_layoutRTL - In the implementation block
@property (assign,nonatomic) unsigned long long layoutAxis;                                                          //@synthesize layoutAxis=_layoutAxis - In the implementation block
@property (assign,nonatomic) unsigned long long containerLayoutAxis;                                                 //@synthesize containerLayoutAxis=_containerLayoutAxis - In the implementation block
@property (assign,nonatomic) long long frameCount;                                                                   //@synthesize frameCount=_frameCount - In the implementation block
@property (nonatomic,retain) _UICollectionLayoutItemSolver * solution;                                               //@synthesize solution=_solution - In the implementation block
@property (nonatomic,retain) _UICollectionLayoutAuxillaryItemSolver * sectionAuxillarySolution;                      //@synthesize sectionAuxillarySolution=_sectionAuxillarySolution - In the implementation block
@property (nonatomic,retain) _UICollectionLayoutSupplementaryRegistrar * sectionSupplementaryRegistrar;              //@synthesize sectionSupplementaryRegistrar=_sectionSupplementaryRegistrar - In the implementation block
@property (nonatomic,retain) _UICollectionLayoutSectionGeometryTranslator * sectionGeometryTranslator;               //@synthesize sectionGeometryTranslator=_sectionGeometryTranslator - In the implementation block
@property (nonatomic,retain) id<NSCollectionLayoutContainer> memoizedAuxillaryHostContainer;                         //@synthesize memoizedAuxillaryHostContainer=_memoizedAuxillaryHostContainer - In the implementation block
@property (assign,nonatomic) CGVector orthogonalScrollingPrefetchingUnitVector;                                      //@synthesize orthogonalScrollingPrefetchingUnitVector=_orthogonalScrollingPrefetchingUnitVector - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect effectiveContentFrame; 
@property (nonatomic,readonly) CGSize contentSize; 
@property (nonatomic,readonly) NSIndexSet * pinnedSupplementaryIndexes; 
@property (assign,nonatomic) BOOL shouldAdjustContentSizeForPartialLastGroupSolution;                                //@synthesize shouldAdjustContentSizeForPartialLastGroupSolution=_shouldAdjustContentSizeForPartialLastGroupSolution - In the implementation block
@property (assign,nonatomic) CGPoint orthogonalOffset;                                                               //@synthesize orthogonalOffset=_orthogonalOffset - In the implementation block
-(id<NSCollectionLayoutContainer>)container;
-(void)setContainer:(id<NSCollectionLayoutContainer>)arg1 ;
-(CGSize)contentSize;
-(_UICollectionLayoutItemSolver *)solution;
-(UITraitCollection *)traitCollection;
-(void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4 preferredSizes:(id)arg5 layoutRTL:(BOOL)arg6 ;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(void)setContainerLayoutAxis:(unsigned long long)arg1 ;
-(NSCollectionLayoutSection *)layoutSection;
-(void)setLayoutAxis:(unsigned long long)arg1 ;
-(void)setFrameCount:(long long)arg1 ;
-(void)setLayoutRTL:(BOOL)arg1 ;
-(void)setSectionSupplementaryRegistrar:(_UICollectionLayoutSupplementaryRegistrar *)arg1 ;
-(_UICollectionLayoutAuxillaryItemSolver *)sectionAuxillarySolution;
-(id)_queryFramesIntersectingRect:(CGRect)arg1 frameOffset:(CGPoint)arg2 ;
-(NSIndexSet *)pinnedSupplementaryIndexes;
-(_UICollectionLayoutSectionGeometryTranslator *)sectionGeometryTranslator;
-(long long)frameCount;
-(unsigned long long)layoutAxis;
-(_UICollectionLayoutSupplementaryRegistrar *)sectionSupplementaryRegistrar;
-(id)supplementaryFrameWithKind:(id)arg1 index:(long long)arg2 ;
-(id)_sectionContainer;
-(BOOL)layoutRTL;
-(unsigned long long)containerLayoutAxis;
-(void)setSectionGeometryTranslator:(_UICollectionLayoutSectionGeometryTranslator *)arg1 ;
-(void)setSectionAuxillarySolution:(_UICollectionLayoutAuxillaryItemSolver *)arg1 ;
-(void)setSolution:(_UICollectionLayoutItemSolver *)arg1 ;
-(id)queryFramesIntersectingRect:(CGRect)arg1 frameOffset:(CGPoint)arg2 ;
-(CGSize)auxillaryHostContentSize;
-(id<NSCollectionLayoutContainer>)memoizedAuxillaryHostContainer;
-(void)setMemoizedAuxillaryHostContainer:(id<NSCollectionLayoutContainer>)arg1 ;
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
-(void)setLayoutSection:(NSCollectionLayoutSection *)arg1 ;
-(void)setOrthogonalScrollingPrefetchingUnitVector:(CGVector)arg1 ;
-(void)_solve;
-(void)_configureInitialOrthogonalPrefetchingUnitVector;
@end

