/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UICollectionLayoutAuxillaryHosting;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSArray, NSSet, NSIndexSet, _UICollectionLayoutAuxillaryOffsets, NSDictionary, _UIRTree;

@interface _UICollectionLayoutAuxillaryItemSolver : NSObject {

	long long _memoizedSupplementaryKind;
	NSArray* _memoizedAuxillaryItems;
	NSSet* _elementKinds;
	BOOL _hasEstimatedSizes;
	NSIndexSet* _pinnedSupplementaryIndexes;
	_UICollectionLayoutAuxillaryOffsets* _supplementariesThatCanAffectContentSize;
	id<_UICollectionLayoutAuxillaryHosting> _auxillaryHost;
	NSArray* _frames;
	NSDictionary* _enrolledSupplementaryFramesDict;
	NSDictionary* _supplementaryFramesKeyedByKindIndex;
	_UIRTree* _supplementaryItemGeometricIndexer;
	CGSize _contentSize;
	CGPoint _hostContentOffset;
	NSDirectionalEdgeInsets _hostContentSizeInsets;

}

@property (assign,nonatomic,__weak) id<_UICollectionLayoutAuxillaryHosting> auxillaryHost;                               //@synthesize auxillaryHost=_auxillaryHost - In the implementation block
@property (nonatomic,retain) NSArray * frames;                                                                           //@synthesize frames=_frames - In the implementation block
@property (nonatomic,retain) NSDictionary * enrolledSupplementaryFramesDict;                                             //@synthesize enrolledSupplementaryFramesDict=_enrolledSupplementaryFramesDict - In the implementation block
@property (nonatomic,retain) NSDictionary * supplementaryFramesKeyedByKindIndex;                                         //@synthesize supplementaryFramesKeyedByKindIndex=_supplementaryFramesKeyedByKindIndex - In the implementation block
@property (nonatomic,retain) _UICollectionLayoutAuxillaryOffsets * supplementariesThatCanAffectContentSize;              //@synthesize supplementariesThatCanAffectContentSize=_supplementariesThatCanAffectContentSize - In the implementation block
@property (nonatomic,readonly) long long memoizedSupplementaryKind; 
@property (nonatomic,readonly) NSArray * memoizedSupplementaryItems; 
@property (assign,nonatomic) BOOL hasEstimatedSizes;                                                                     //@synthesize hasEstimatedSizes=_hasEstimatedSizes - In the implementation block
@property (nonatomic,retain) _UIRTree * supplementaryItemGeometricIndexer;                                               //@synthesize supplementaryItemGeometricIndexer=_supplementaryItemGeometricIndexer - In the implementation block
@property (nonatomic,retain) NSIndexSet * pinnedSupplementaryIndexes;                                                    //@synthesize pinnedSupplementaryIndexes=_pinnedSupplementaryIndexes - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                                                         //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets hostContentSizeInsets;                                              //@synthesize hostContentSizeInsets=_hostContentSizeInsets - In the implementation block
@property (nonatomic,readonly) NSArray * supplementaryFrames; 
@property (nonatomic,readonly) NSSet * elementKinds; 
@property (nonatomic,readonly) BOOL contentSizeDiffersFromHostContentSize; 
@property (nonatomic,readonly) CGPoint hostContentOffset;                                                                //@synthesize hostContentOffset=_hostContentOffset - In the implementation block
-(id)visualDescription;
-(id)_queryFramesIntersectingRect:(CGRect)arg1 frameOffset:(CGPoint)arg2 ;
-(id)supplementaryFrameWithKind:(id)arg1 index:(long long)arg2 ;
-(void)setContentSize:(CGSize)arg1 ;
-(id)queryFramesIntersectingRect:(CGRect)arg1 frameOffset:(CGPoint)arg2 ;
-(CGSize)_requiredContentSizeForSupplementaryFrames:(id)arg1 forLayoutAxis:(unsigned long long)arg2 containerSize:(CGSize)arg3 ;
-(NSIndexSet *)pinnedSupplementaryIndexes;
-(NSArray *)frames;
-(void)setFrames:(NSArray *)arg1 ;
-(void)resolveSupplementaryItemsForVisibleBounds:(CGRect)arg1 ;
-(id<_UICollectionLayoutAuxillaryHosting>)auxillaryHost;
-(NSDictionary *)enrolledSupplementaryFramesDict;
-(NSSet *)elementKinds;
-(CGSize)contentSize;
-(NSDictionary *)supplementaryFramesKeyedByKindIndex;
-(id)supplementaryFrameWithKind:(id)arg1 index:(long long)arg2 additionalFrameOffset:(CGPoint)arg3 ;
-(long long)memoizedSupplementaryKind;
-(NSArray *)supplementaryFrames;
-(void)setPinnedSupplementaryIndexes:(NSIndexSet *)arg1 ;
-(void)setEnrolledSupplementaryFramesDict:(NSDictionary *)arg1 ;
-(void)setSupplementaryItemGeometricIndexer:(_UIRTree *)arg1 ;
-(id)initWithAuxillaryHost:(id)arg1 ;
-(CGPoint)hostContentOffset;
-(BOOL)hasEstimatedSizes;
-(CGRect)_frameForSupplementaryItem:(id)arg1 container:(id)arg2 contentSize:(CGSize)arg3 frameOffset:(CGPoint)arg4 applyPinning:(BOOL)arg5 visibleBounds:(CGRect)arg6 preferredSizes:(id)arg7 preferredIndex:(long long)arg8 layoutRTL:(BOOL)arg9 ;
-(NSArray *)memoizedSupplementaryItems;
-(void)_updateGeometricIndexer;
-(void)setHasEstimatedSizes:(BOOL)arg1 ;
-(void)setHostContentSizeInsets:(NSDirectionalEdgeInsets)arg1 ;
-(NSDirectionalEdgeInsets)hostContentSizeInsets;
-(id)_rearrangedFramesForFrames:(id)arg1 container:(id)arg2 contentSize:(CGSize)arg3 applyPinning:(BOOL)arg4 frameOffset:(CGPoint)arg5 visibleBounds:(CGRect)arg6 preferredSizes:(id)arg7 layoutRTL:(BOOL)arg8 supplementaryKind:(long long)arg9 ;
-(id)_normalizedFramesAlongLayoutAxisForFrames:(id)arg1 layoutAxis:(unsigned long long)arg2 ;
-(id)supplementaryFramesWithOffset:(CGPoint)arg1 ;
-(id)_rearrangeSupplementaryItems:(id)arg1 byUpdatingPinning:(BOOL)arg2 forVisibleBounds:(CGRect)arg3 frameOffset:(CGPoint)arg4 ;
-(void)setSupplementaryFramesKeyedByKindIndex:(NSDictionary *)arg1 ;
-(void)resolve;
-(CGSize)_largestPossibleHostContentSizeForContainerSize:(CGSize)arg1 layoutAxis:(unsigned long long)arg2 ;
-(id)_effectiveBoundarySupplementrayItem:(id)arg1 forLayoutAxis:(unsigned long long)arg2 ;
-(CGPoint)_offsetForContentSizeInsets:(NSDirectionalEdgeInsets)arg1 ;
-(void)setSupplementariesThatCanAffectContentSize:(_UICollectionLayoutAuxillaryOffsets *)arg1 ;
-(void)_solveForPinning:(BOOL)arg1 visibleRect:(CGRect)arg2 ;
-(_UICollectionLayoutAuxillaryOffsets *)supplementariesThatCanAffectContentSize;
-(void)setAuxillaryHost:(id<_UICollectionLayoutAuxillaryHosting>)arg1 ;
-(BOOL)contentSizeDiffersFromHostContentSize;
-(_UIRTree *)supplementaryItemGeometricIndexer;
-(CGSize)_computeContentSizeForEmptyHostContentSizeForContainer:(id)arg1 hostContentSize:(CGSize)arg2 layoutAxis:(unsigned long long)arg3 supplementaryFrames:(id)arg4 preferredSizes:(id)arg5 layoutRTL:(BOOL)arg6 supplementaryKind:(long long)arg7 ;
@end

