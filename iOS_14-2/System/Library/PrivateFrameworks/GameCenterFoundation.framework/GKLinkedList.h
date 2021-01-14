/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class GKListNode;

@interface GKLinkedList : NSObject {

	GKListNode* _headNode;
	GKListNode* _tailNode;

}

@property (assign,nonatomic) GKListNode * headNode;              //@synthesize headNode=_headNode - In the implementation block
@property (assign,nonatomic) GKListNode * tailNode;              //@synthesize tailNode=_tailNode - In the implementation block
-(void)removeAllNodes;
-(id)init;
-(void)insertNode:(id)arg1 before:(id)arg2 ;
-(void)removeNode:(id)arg1 ;
-(id)description;
-(GKListNode *)tailNode;
-(GKListNode *)headNode;
-(BOOL)hasCycle;
-(void)dealloc;
-(id)nodeForInsertionWithValue:(id)arg1 ;
-(void)insertNodeAtBeginning:(id)arg1 ;
-(id)insertNodeAtBeginningWithValue:(id)arg1 forKey:(id)arg2 ;
-(void)setHeadNode:(GKListNode *)arg1 ;
-(void)setTailNode:(GKListNode *)arg1 ;
-(BOOL)isConsistent;
@end

