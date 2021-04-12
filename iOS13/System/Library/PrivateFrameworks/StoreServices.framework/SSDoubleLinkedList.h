/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class SSDoubleLinkedListNode, NSString, NSArray;

@interface SSDoubleLinkedList : NSObject {

	unsigned long long _count;
	SSDoubleLinkedListNode* _head;
	SSDoubleLinkedListNode* _tail;
	NSString* _listIdentifier;

}

@property (nonatomic,retain) NSString * listIdentifier;                  //@synthesize listIdentifier=_listIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * allNodes; 
@property (nonatomic,readonly) unsigned long long count;                 //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) SSDoubleLinkedListNode * head;              //@synthesize head=_head - In the implementation block
@property (nonatomic,retain) SSDoubleLinkedListNode * tail;              //@synthesize tail=_tail - In the implementation block
-(id)init;
-(id)description;
-(unsigned long long)count;
-(SSDoubleLinkedListNode *)head;
-(SSDoubleLinkedListNode *)tail;
-(id)insertObject:(id)arg1 ;
-(id)appendObject:(id)arg1 ;
-(void)removeNode:(id)arg1 ;
-(void)insertNode:(id)arg1 ;
-(NSString *)listIdentifier;
-(void)setTail:(SSDoubleLinkedListNode *)arg1 ;
-(void)setHead:(SSDoubleLinkedListNode *)arg1 ;
-(void)setListIdentifier:(NSString *)arg1 ;
-(void)appendNode:(id)arg1 ;
-(NSArray *)allNodes;
-(void)removeAllNodes;
@end

