/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setHead:(SSDoubleLinkedListNode *)arg1 ;
-(void)setTail:(SSDoubleLinkedListNode *)arg1 ;
-(SSDoubleLinkedListNode *)tail;
-(void)setListIdentifier:(NSString *)arg1 ;
-(void)removeAllNodes;
-(void)appendNode:(id)arg1 ;
-(id)init;
-(SSDoubleLinkedListNode *)head;
-(void)removeNode:(id)arg1 ;
-(unsigned long long)count;
-(id)insertObject:(id)arg1 ;
-(id)description;
-(NSArray *)allNodes;
-(void)insertNode:(id)arg1 ;
-(NSString *)listIdentifier;
-(id)appendObject:(id)arg1 ;
@end

