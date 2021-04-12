/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITreeDataSourceSnapshotter.h>

@protocol _UITreeDataSourceSnapshotter
@required
-(id)visualDescription;
-(BOOL)isFlat;
-(long long)count;
-(id)indexesForLevel:(long long)arg1;
-(id)childrenForParentAtIndex:(long long)arg1;
-(id)snapshotterRepresentingSubtreeForIndex:(long long)arg1;
-(BOOL)indexIsVisible:(long long)arg1;
-(long long)levelForIndex:(long long)arg1;
-(id)childrenForParentAtIndex:(long long)arg1 recursive:(BOOL)arg2;
-(id)rootIndexes;
-(BOOL)indexIsExpanded:(long long)arg1;
-(id)snapshotterRepresentingSubtreeForIndex:(long long)arg1 includingParent:(BOOL)arg2;
-(BOOL)hasChildrenForParentAtIndex:(long long)arg1;
-(long long)parentForChildAtIndex:(long long)arg1;
-(id)expandedIndexes;
-(id)visibleIndexes;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableIndexSet;

@interface _UITreeDataSourceSnapshotter : NSObject <_UITreeDataSourceSnapshotter, NSCopying> {

	vector<_UIOutlineNode, std::__1::allocator<_UIOutlineNode> >* _nodes;
	long long _count;
	NSMutableIndexSet* _expandedIndexes;

}

@property (assign,nonatomic) long long count;              //@synthesize count=_count - In the implementation block
-(id)visualDescription;
-(void)setCount:(long long)arg1 ;
-(BOOL)isFlat;
-(id)init;
-(long long)count;
-(id)description;
-(void)deleteIndexes:(id)arg1 ;
-(id)initWithNodes:(vector<_UIOutlineNode, std::__1::allocator<_UIOutlineNode> >*)arg1 count:(long long)arg2 expandedIndexes:(id)arg3 ;
-(long long)_nodeIndexForGlobalIndex:(long long)arg1 ;
-(BOOL)_shouldSplitNodeAtInsertionIndex:(long long)arg1 ;
-(id)indexesForLevel:(long long)arg1 ;
-(void)_splitNodeAtInsertionIndex:(long long)arg1 ;
-(long long)_childNodeIndexForGloalIndex:(long long)arg1 ;
-(id)_childrenForParent:(long long)arg1 ;
-(void)_recomputeRangeOffsetForGlobalIndex:(long long)arg1 ;
-(long long)_insertCount:(long long)arg1 afterIndex:(long long)arg2 ;
-(void)_recomputeExpandedIndexesForInsertedRange:(NSRange)arg1 ;
-(void)_insertCount:(long long)arg1 beforeIndex:(long long)arg2 ;
-(id)_deleteChildNodesForParentNodeIndex:(long long)arg1 ;
-(BOOL)_isNodeIndexVisible:(long long)arg1 ;
-(void)_recomputeExpandedIndexesForDeletedIndexes:(id)arg1 ;
-(UIOutlineNode*)_nodeForGlobalIndex:(long long)arg1 ;
-(void)_insertSubtreeFromSnapshotter:(id)arg1 atIndex:(long long)arg2 adjustedIndex:(long long)arg3 ;
-(UIOutlineNode)_nextNodeForNodeIndex:(long long*)arg1 ;
-(long long)_indexForInsertingAfterIndex:(long long)arg1 ;
-(long long)_parentNodeIndexForNodeIndex:(long long)arg1 ;
-(long long)_binarySearchForGlobalIndex:(long long)arg1 startIndex:(long long)arg2 endIndex:(long long)arg3 ;
-(id)childrenForParentAtIndex:(long long)arg1 ;
-(id)_allIndexes;
-(id)snapshotterRepresentingSubtreeForIndex:(long long)arg1 ;
-(long long)insertCount:(long long)arg1 afterIndex:(long long)arg2 ;
-(id)_snapshotterByNormalizingRangeOffsets;
-(void)expandIndexes:(id)arg1 ;
-(BOOL)indexIsVisible:(long long)arg1 ;
-(long long)levelForIndex:(long long)arg1 ;
-(NSRange)appendChildItemsWithCount:(long long)arg1 ;
-(NSRange)appendChildItemsWithCount:(long long)arg1 toParentIndex:(long long)arg2 ;
-(void)insertCount:(long long)arg1 beforeIndex:(long long)arg2 ;
-(long long)insertCount:(long long)arg1 afterIndex:(long long)arg2 insertionMode:(long long)arg3 ;
-(id)childrenForParentAtIndex:(long long)arg1 recursive:(BOOL)arg2 ;
-(void)deleteIndexes:(id)arg1 orphanDisposition:(long long)arg2 ;
-(void)collapseIndexes:(id)arg1 ;
-(id)rootIndexes;
-(void)replaceChildItemsFromSnapshotter:(id)arg1 forParentIndex:(long long)arg2 ;
-(BOOL)indexIsExpanded:(long long)arg1 ;
-(id)snapshotterRepresentingSubtreeForIndex:(long long)arg1 includingParent:(BOOL)arg2 ;
-(id)_snapshotterByShiftingIndexesByCount:(long long)arg1 ;
-(BOOL)hasChildrenForParentAtIndex:(long long)arg1 ;
-(long long)parentForChildAtIndex:(long long)arg1 ;
-(void)insertSubtreeFromSnapshotter:(id)arg1 beforeIndex:(long long)arg2 ;
-(long long)insertSubtreeFromSnapshotter:(id)arg1 afterIndex:(long long)arg2 ;
-(id)expandedIndexes;
-(id)visibleIndexes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

