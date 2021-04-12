/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/SBIconIndexNodeObserver.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol SBIconIndexMutableListObserver;
@class NSMutableArray, NSMapTable, NSString;

@interface SBIconIndexMutableList : NSObject <SBIconIndexNodeObserver, NSFastEnumeration> {

	NSMutableArray* _nodes;
	NSMapTable* _index;
	id<SBIconIndexMutableListObserver> _observer;

}

@property (assign,nonatomic,__weak) id<SBIconIndexMutableListObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) id<SBIconIndexNode> firstNode; 
@property (nonatomic,readonly) id<SBIconIndexNode> lastNode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id<SBIconIndexMutableListObserver>)observer;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_SB12*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)sortUsingSelector:(SEL)arg1 ;
-(void)setObserver:(id<SBIconIndexMutableListObserver>)arg1 ;
-(void)addNode:(id)arg1 ;
-(id)nodes;
-(void)removeNode:(id)arg1 ;
-(BOOL)containsNode:(id)arg1 ;
-(id<SBIconIndexNode>)firstNode;
-(void)removeAllNodes;
-(void)enumerateNodesUsingBlock:(/*^block*/id)arg1 ;
-(id<SBIconIndexNode>)lastNode;
-(void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(void)nodeDidMoveContainedNodes:(id)arg1 ;
-(BOOL)containsNodeIdentifier:(id)arg1 ;
-(unsigned long long)indexOfNode:(id)arg1 ;
-(id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2 ;
-(id)nodeAtIndex:(unsigned long long)arg1 ;
-(id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2 ;
-(id)containedNodeIdentifiers;
-(void)insertNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeNodesAtIndexes:(id)arg1 ;
-(void)moveNodes:(id)arg1 toContiguousIndicesStartingAt:(unsigned long long)arg2 ;
-(id)nodesContainingNodeIdentifier:(id)arg1 ;
-(unsigned long long)indexOfNodePassingTest:(/*^block*/id)arg1 ;
-(id)indexesOfNodesPassingTest:(/*^block*/id)arg1 ;
-(void)replaceNodeAtIndex:(unsigned long long)arg1 withNode:(id)arg2 ;
-(void)removeNodeAtIndex:(unsigned long long)arg1 ;
-(void)removeLastNode;
-(void)moveNode:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)enumerateNodesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)indexDescriptionWithPrefix:(id)arg1 ;
@end

