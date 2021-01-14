/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<_UICollectionLayoutAuxillaryOffsets>)supplementaryFrameOffsets;
-(void)_generateGeometricIndexer;
-(NSArray *)itemFrames;
-(NSArray *)auxillaryFrames;
-(NSArray *)availableLayoutSpaces;
-(long long)supplementaryFrameCount;
-(long long)itemFrameCount;
-(NSArray *)solutionFrames;
-(NSDictionary *)supplementaryDictByKindIndex;
-(id)initWithSolutionFrames:(id)arg1 itemFrameCount:(long long)arg2 supplementaryFrameCount:(long long)arg3 availableLayoutSpaces:(id)arg4 solvedFittingFrame:(CGRect)arg5 ;
-(CGRect)solvedFittingFrame;
-(void)_generateMemoizedSolutionFramesBasedData;
-(_UIRTree *)geometricIndexer;
@end

