/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UICollectionLayoutAuxillaryOffsets;
#import <UIKitCore/UIKitCore-Structs.h>
@class _UICollectionLayoutItemSolver;

@interface _UICollectionEstimatedSolutionBookmark : NSObject {

	_UICollectionLayoutItemSolver* _solution;
	id<_UICollectionLayoutAuxillaryOffsets> _supplementaryOffsets;
	NSRange _itemRange;
	CGRect _solutionFrame;

}

@property (nonatomic,readonly) _UICollectionLayoutItemSolver * solution;                                  //@synthesize solution=_solution - In the implementation block
@property (nonatomic,readonly) CGRect solutionFrame;                                                      //@synthesize solutionFrame=_solutionFrame - In the implementation block
@property (nonatomic,readonly) NSRange itemRange;                                                         //@synthesize itemRange=_itemRange - In the implementation block
@property (nonatomic,readonly) id<_UICollectionLayoutAuxillaryOffsets> supplementaryOffsets;              //@synthesize supplementaryOffsets=_supplementaryOffsets - In the implementation block
-(id)description;
-(_UICollectionLayoutItemSolver *)solution;
-(id<_UICollectionLayoutAuxillaryOffsets>)supplementaryOffsets;
-(NSRange)itemRange;
-(CGRect)solutionFrame;
-(id)initWithSolution:(id)arg1 frame:(CGRect)arg2 itemIndexOffset:(long long)arg3 supplementaryOffsets:(id)arg4 maxItemFrameCount:(long long)arg5 ;
-(id)_supplementaryOffsetsForItemRange:(NSRange)arg1 solution:(id)arg2 supplementaryOffsets:(id)arg3 ;
@end

