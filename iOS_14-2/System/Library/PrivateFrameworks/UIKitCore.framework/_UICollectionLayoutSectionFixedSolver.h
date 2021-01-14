/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionLayoutSectionSolver.h>
#import <UIKitCore/_UICollectionLayoutAuxillaryHosting.h>

@protocol NSCollectionLayoutContainer;
@class NSCollectionLayoutSection, UITraitCollection, _UICollectionLayoutItemSolver, _UICollectionLayoutAuxillaryItemSolver, _UICollectionLayoutSupplementaryRegistrar, _UICollectionLayoutSectionGeometryTranslator, NSIndexSet, NSString;

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
-(void)setLayoutAxis:(unsigned long long)arg1 ;
-(id)visualDescription;
-(_UICollectionLayoutSupplementaryRegistrar *)sectionSupplementaryRegistrar;
-(id)_queryFramesIntersectingRect:(CGRect)arg1 frameOffset:(CGPoint)arg2 ;
-(_UICollectionLayoutSectionGeometryTranslator *)sectionGeometryTranslator;
-(id)supplementaryFrameWithKind:(id)arg1 index:(long long)arg2 ;
-(unsigned long long)containerLayoutAxis;
-(CGSize)auxillaryHostContentSize;
-(id)auxillaryHostAuxillaryItems;
-(id)sectionSupplementaryFrameForIndex:(long long)arg1 ;
-(BOOL)auxillaryHostShouldLayoutRTL;
-(CGVector)orthogonalScrollingPrefetchingUnitVector;
-(_UICollectionLayoutAuxillaryItemSolver *)sectionAuxillarySolution;
-(id)frameForIndex:(long long)arg1 ;
-(UITraitCollection *)traitCollection;
-(id)queryFramesIntersectingRect:(CGRect)arg1 frameOffset:(CGPoint)arg2 ;
-(BOOL)layoutRTL;
-(void)updatePinnedSupplementaryItemsWithVisibleBounds:(CGRect)arg1 ;
-(void)_configureInitialOrthogonalPrefetchingUnitVector;
-(id)resolveWithParameters:(id)arg1 preferredSizes:(id)arg2 ;
-(NSCollectionLayoutSection *)layoutSection;
-(void)setFrameCount:(long long)arg1 ;
-(void)setSolution:(_UICollectionLayoutItemSolver *)arg1 ;
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
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(void)_solve;
-(_UICollectionLayoutItemSolver *)solution;
-(id)_sectionContainer;
-(void)setLayoutSection:(NSCollectionLayoutSection *)arg1 ;
-(double)_dimensionForRootGroupAlongAxis:(unsigned long long)arg1 ;
-(void)setSectionGeometryTranslator:(_UICollectionLayoutSectionGeometryTranslator *)arg1 ;
-(void)setOrthogonalScrollingPrefetchingUnitVector:(CGVector)arg1 ;
-(void)setMemoizedAuxillaryHostContainer:(id<NSCollectionLayoutContainer>)arg1 ;
-(long long)auxillaryHostAuxillaryKind;
-(BOOL)shouldAdjustContentSizeForPartialLastGroupSolution;
-(id)queryFramesIntersectingRect:(CGRect)arg1 ;
-(CGPoint)orthogonalOffset;
-(id)auxillaryHostPreferredSizes;
-(void)setSectionAuxillarySolution:(_UICollectionLayoutAuxillaryItemSolver *)arg1 ;
-(void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4 preferredSizes:(id)arg5 ;
-(id)sectionSupplementaryFrameWithKind:(id)arg1 index:(long long)arg2 ;
-(void)setSectionSupplementaryRegistrar:(_UICollectionLayoutSupplementaryRegistrar *)arg1 ;
-(void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4 ;
-(unsigned long long)auxillaryHostLayoutAxis;
-(void)setLayoutRTL:(BOOL)arg1 ;
-(id)auxillaryHostSupplementaryEnroller;
-(id<NSCollectionLayoutContainer>)memoizedAuxillaryHostContainer;
-(CGSize)contentSize;
-(void)setContainer:(id<NSCollectionLayoutContainer>)arg1 ;
-(id<NSCollectionLayoutContainer>)container;
@end

