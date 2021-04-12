/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKitCore/_UICollectionLayoutAuxillaryHosting.h>

@protocol NSCollectionLayoutContainer, _UICollectionPreferredSizes, _UICollectionLayoutSupplementaryEnrolling;
@class NSCollectionLayoutItem, UITraitCollection, _UICollectionLayoutItemSolverState, NSArray, NSString;

@interface _UICollectionLayoutItemSolver : NSObject <NSCopying, _UICollectionLayoutAuxillaryHosting> {

	BOOL _layoutRTL;
	NSCollectionLayoutItem* _item;
	id<NSCollectionLayoutContainer> _container;
	UITraitCollection* _traitCollection;
	_UICollectionLayoutItemSolverState* _solveResult;
	id<_UICollectionPreferredSizes> _preferredSizes;
	id<_UICollectionLayoutSupplementaryEnrolling> _supplementaryEnroller;
	long long _solutionRecursionDepth;
	long long _maxFrameCount;
	unsigned long long _layoutAxis;

}

@property (nonatomic,retain) _UICollectionLayoutItemSolverState * solveResult;                                 //@synthesize solveResult=_solveResult - In the implementation block
@property (nonatomic,retain) id<_UICollectionPreferredSizes> preferredSizes;                                   //@synthesize preferredSizes=_preferredSizes - In the implementation block
@property (nonatomic,retain) id<_UICollectionLayoutSupplementaryEnrolling> supplementaryEnroller;              //@synthesize supplementaryEnroller=_supplementaryEnroller - In the implementation block
@property (nonatomic,readonly) long long solutionRecursionDepth;                                               //@synthesize solutionRecursionDepth=_solutionRecursionDepth - In the implementation block
@property (nonatomic,readonly) long long maxFrameCount;                                                        //@synthesize maxFrameCount=_maxFrameCount - In the implementation block
@property (nonatomic,readonly) unsigned long long layoutAxis;                                                  //@synthesize layoutAxis=_layoutAxis - In the implementation block
@property (nonatomic,readonly) NSCollectionLayoutItem * item;                                                  //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) id<NSCollectionLayoutContainer> container;                                      //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) UITraitCollection * traitCollection;                                            //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,readonly) BOOL layoutRTL;                                                                 //@synthesize layoutRTL=_layoutRTL - In the implementation block
@property (nonatomic,readonly) long long frameCount; 
@property (nonatomic,readonly) long long itemFrameCount; 
@property (nonatomic,readonly) long long auxillaryFrameCount; 
@property (nonatomic,readonly) CGRect layoutFrame; 
@property (nonatomic,readonly) CGRect contentFrame; 
@property (nonatomic,readonly) NSArray * itemFrames; 
@property (nonatomic,readonly) NSArray * auxillaryFrames; 
@property (nonatomic,readonly) id<_UICollectionLayoutAuxillaryOffsets> supplementaryOffsets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<NSCollectionLayoutContainer>)container;
-(NSCollectionLayoutItem *)item;
-(CGRect)contentFrame;
-(UITraitCollection *)traitCollection;
-(CGRect)layoutFrame;
-(void)setPreferredSizes:(id<_UICollectionPreferredSizes>)arg1 ;
-(long long)frameCount;
-(NSArray *)itemFrames;
-(id)supplementaryFrameWithKind:(id)arg1 index:(long long)arg2 additionalFrameOffset:(CGPoint)arg3 ;
-(id<_UICollectionLayoutAuxillaryOffsets>)supplementaryOffsets;
-(unsigned long long)layoutAxis;
-(id)supplementaryFrameWithKind:(id)arg1 absoluteIndex:(long long)arg2 additionalFrameOffset:(CGPoint)arg3 interSolutionSpacing:(double)arg4 repeatAxis:(unsigned long long)arg5 ;
-(id)initWithItem:(id)arg1 ;
-(BOOL)layoutRTL;
-(void)solveForContainer:(id)arg1 layoutAxis:(unsigned long long)arg2 traitCollection:(id)arg3 maxFrameCount:(long long)arg4 layoutRTL:(BOOL)arg5 ;
-(id<_UICollectionPreferredSizes>)preferredSizes;
-(CGSize)auxillaryHostContentSize;
-(CGSize)auxillaryHostPinningContentSize;
-(id)auxillaryHostContainer;
-(id)auxillaryHostAuxillaryItems;
-(BOOL)auxillaryHostShouldLayoutRTL;
-(unsigned long long)auxillaryHostLayoutAxis;
-(long long)auxillaryHostAuxillaryKind;
-(id)auxillaryHostSupplementaryEnroller;
-(id)auxillaryHostPreferredSizes;
-(CGPoint)auxillaryHostAdditionalFrameOffset;
-(id)visualDescription;
-(void)_solve;
-(id)initWithItem:(id)arg1 supplementaryEnroller:(id)arg2 container:(id)arg3 layoutAxis:(unsigned long long)arg4 traitCollection:(id)arg5 maxFrameCount:(long long)arg6 layoutRTL:(BOOL)arg7 preferredSizes:(id)arg8 solverResult:(id)arg9 solutionRecursionDepth:(long long)arg10 ;
-(id<_UICollectionLayoutSupplementaryEnrolling>)supplementaryEnroller;
-(long long)maxFrameCount;
-(_UICollectionLayoutItemSolverState *)solveResult;
-(long long)solutionRecursionDepth;
-(id)availableLayoutSpaces;
-(void)solveForContainer:(id)arg1 layoutAxis:(unsigned long long)arg2 traitCollection:(id)arg3 maxFrameCount:(long long)arg4 layoutRTL:(BOOL)arg5 preferredSizes:(id)arg6 ;
-(void)_solveForContainer:(id)arg1 layoutAxis:(unsigned long long)arg2 traitCollection:(id)arg3 maxFrameCount:(long long)arg4 layoutRTL:(BOOL)arg5 preferredSizes:(id)arg6 solutionRecursionDepth:(long long)arg7 ;
-(long long)itemFrameCount;
-(long long)auxillaryFrameCount;
-(id)queryFramesApplyingFrameOffset:(CGPoint)arg1 ;
-(NSArray *)auxillaryFrames;
-(id)_queryFramesWithQueryRect:(CGRect)arg1 additionalFrameOffset:(CGPoint)arg2 itemIndexOffset:(long long)arg3 supplementaryOffsets:(id)arg4 itemLimit:(long long)arg5 ;
-(id)_queryFramesWithQueryRect:(CGRect)arg1 additionalFrameOffset:(CGPoint)arg2 itemIndexOffset:(long long)arg3 itemLimit:(long long)arg4 supplementaryRepeatOffset:(long long)arg5 ;
-(id)_frameForAbsoluteIndex:(long long)arg1 additionalFrameOffset:(CGPoint)arg2 interSolutionSpacing:(double)arg3 repeatAxis:(unsigned long long)arg4 ;
-(id)_supplementaryFrameWithKind:(id)arg1 index:(long long)arg2 additionalFrameOffset:(CGPoint)arg3 ;
-(id)_supplementaryFrameWithKind:(id)arg1 absoluteIndex:(long long)arg2 additionalFrameOffset:(CGPoint)arg3 interSolutionSpacing:(double)arg4 repeatAxis:(unsigned long long)arg5 ;
-(double)_additionalDimensionForEdgeSpacingAlongAxis:(unsigned long long)arg1 group:(id)arg2 trailingEdgeOnly:(BOOL)arg3 ;
-(void)setSolveResult:(_UICollectionLayoutItemSolverState *)arg1 ;
-(void)_solveWithCustomGroupItemProvider;
-(void)_solveGroup;
-(void)_solveSingleItem;
-(CGSize)_effectiveContainerSizeForContainer:(id)arg1 ;
-(unsigned long long)_layoutAxisForGroup:(id)arg1 ;
-(CGSize)_effectiveGroupSizeForGroup:(id)arg1 container:(id)arg2 ;
-(void)_warnIfClientSpecifiesFlexibleRootGroupEdgeSpacingAlongLayoutAxisAsNeededForGroup:(id)arg1 layoutAxis:(unsigned long long)arg2 ;
-(void)_updateGroupByQueryingItemsIfNeeded:(id)arg1 container:(id)arg2 ;
-(id)initWithItem:(id)arg1 supplementaryEnroller:(id)arg2 ;
-(CGPoint)_outerContainerOffsetForGroup:(id)arg1 groupComputedSize:(CGSize)arg2 container:(id)arg3 outerLayoutAxis:(unsigned long long)arg4 ;
-(id)_arrangeSolutionItems:(id)arg1 alongLayoutAxis:(unsigned long long)arg2 forContainer:(id)arg3 additionalLayoutOffset:(CGPoint)arg4 interItemSpacing:(id)arg5 ;
-(void)_transformGroupArrangementItemsForRTL:(id)arg1 ;
-(unsigned long long)_directionalEdgeForLayoutAxis:(unsigned long long)arg1 preEdge:(BOOL)arg2 ;
-(CGPoint)_layoutOffsetForContainer:(id)arg1 ;
-(void)_enumerateSolutionFramesForQueryRect:(CGRect)arg1 itemLimit:(long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(CGPoint)_frameOffsetForAdditionalFrameOffset:(CGPoint)arg1 repeatOffset:(long long)arg2 repeatAxis:(unsigned long long)arg3 interSolutionSpacing:(double)arg4 ;
-(BOOL)canAccomodateItemWithSize:(CGSize)arg1 ;
-(CGSize)contentSizeForFrameCount:(long long)arg1 layoutAxis:(unsigned long long)arg2 ;
-(id)queryFramesWithQueryRect:(CGRect)arg1 ;
-(id)queryFramesWithQueryRect:(CGRect)arg1 additionalFrameOffset:(CGPoint)arg2 ;
-(id)queryFramesWithItemLimit:(long long)arg1 ;
-(id)queryFramesWithQueryRect:(CGRect)arg1 additionalFrameOffset:(CGPoint)arg2 itemIndexOffset:(long long)arg3 supplementaryOffsets:(id)arg4 itemLimit:(long long)arg5 ;
-(id)queryFramesWithQueryRect:(CGRect)arg1 additionalFrameOffset:(CGPoint)arg2 itemIndexOffset:(long long)arg3 itemLimit:(long long)arg4 supplementaryRepeatOffset:(long long)arg5 ;
-(id)frameForAbsoluteIndex:(long long)arg1 additionalFrameOffset:(CGPoint)arg2 interSolutionSpacing:(double)arg3 repeatAxis:(unsigned long long)arg4 ;
-(CGRect)_adjustedFrameForFrame:(CGRect)arg1 offset:(CGPoint)arg2 ;
-(id)_normalizeVisualFormatParserItems:(id)arg1 layoutAxis:(unsigned long long)arg2 ;
-(void)setSupplementaryEnroller:(id<_UICollectionLayoutSupplementaryEnrolling>)arg1 ;
@end

