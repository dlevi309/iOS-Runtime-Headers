/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UICollectionLayoutAuxillaryOffsets;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSArray, NSDictionary, _UIRTree;

@interface _UICollectionLayoutItemSolverState : NSObject {

	NSArray* _itemFrames;
	NSArray* _auxillaryFrames;
	NSDictionary* _supplementaryDictByKindIndex;
	id<_UICollectionLayoutAuxillaryOffsets> _supplementaryFrameOffsets;
	_UIRTree* _geometricIndexer;
	NSArray* _solutionFrames;
	long long _itemFrameCount;
	long long _supplementaryFrameCount;
	NSArray* _availableLayoutSpaces;
	CGRect _solvedFittingFrame;

}

@property (nonatomic,readonly) NSArray * solutionFrames;                                                       //@synthesize solutionFrames=_solutionFrames - In the implementation block
@property (nonatomic,readonly) _UIRTree * geometricIndexer;                                                    //@synthesize geometricIndexer=_geometricIndexer - In the implementation block
@property (nonatomic,readonly) long long itemFrameCount;                                                       //@synthesize itemFrameCount=_itemFrameCount - In the implementation block
@property (nonatomic,readonly) long long supplementaryFrameCount;                                              //@synthesize supplementaryFrameCount=_supplementaryFrameCount - In the implementation block
@property (nonatomic,readonly) NSArray * availableLayoutSpaces;                                                //@synthesize availableLayoutSpaces=_availableLayoutSpaces - In the implementation block
@property (nonatomic,readonly) CGRect solvedFittingFrame;                                                      //@synthesize solvedFittingFrame=_solvedFittingFrame - In the implementation block
@property (nonatomic,readonly) NSArray * itemFrames;                                                           //@synthesize itemFrames=_itemFrames - In the implementation block
@property (nonatomic,readonly) NSArray * auxillaryFrames;                                                      //@synthesize auxillaryFrames=_auxillaryFrames - In the implementation block
@property (nonatomic,readonly) NSDictionary * supplementaryDictByKindIndex;                                    //@synthesize supplementaryDictByKindIndex=_supplementaryDictByKindIndex - In the implementation block
@property (nonatomic,readonly) id<_UICollectionLayoutAuxillaryOffsets> supplementaryFrameOffsets;              //@synthesize supplementaryFrameOffsets=_supplementaryFrameOffsets - In the implementation block
-(NSArray *)itemFrames;
-(NSArray *)availableLayoutSpaces;
-(NSArray *)solutionFrames;
-(long long)itemFrameCount;
-(long long)supplementaryFrameCount;
-(NSArray *)auxillaryFrames;
-(id<_UICollectionLayoutAuxillaryOffsets>)supplementaryFrameOffsets;
-(CGRect)solvedFittingFrame;
-(id)initWithSolutionFrames:(id)arg1 itemFrameCount:(long long)arg2 supplementaryFrameCount:(long long)arg3 availableLayoutSpaces:(id)arg4 solvedFittingFrame:(CGRect)arg5 ;
-(_UIRTree *)geometricIndexer;
-(NSDictionary *)supplementaryDictByKindIndex;
-(void)_generateGeometricIndexer;
-(void)_generateMemoizedSolutionFramesBasedData;
@end

