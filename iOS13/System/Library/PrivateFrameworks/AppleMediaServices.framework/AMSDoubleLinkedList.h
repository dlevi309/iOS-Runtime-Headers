/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class AMSDoubleLinkedListNode, NSString, NSArray;

@interface AMSDoubleLinkedList : NSObject {

	unsigned long long _count;
	AMSDoubleLinkedListNode* _head;
	AMSDoubleLinkedListNode* _tail;
	NSString* _listIdentifier;

}

@property (nonatomic,retain) NSString * listIdentifier;                   //@synthesize listIdentifier=_listIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * allNodes; 
@property (nonatomic,readonly) unsigned long long count;                  //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) AMSDoubleLinkedListNode * head;              //@synthesize head=_head - In the implementation block
@property (nonatomic,retain) AMSDoubleLinkedListNode * tail;              //@synthesize tail=_tail - In the implementation block
-(id)init;
-(id)description;
-(unsigned long long)count;
-(AMSDoubleLinkedListNode *)head;
-(AMSDoubleLinkedListNode *)tail;
-(id)insertObject:(id)arg1 ;
-(id)appendObject:(id)arg1 ;
-(void)removeNode:(id)arg1 ;
-(void)insertNode:(id)arg1 ;
-(NSString *)listIdentifier;
-(void)setTail:(AMSDoubleLinkedListNode *)arg1 ;
-(void)setHead:(AMSDoubleLinkedListNode *)arg1 ;
-(void)setListIdentifier:(NSString *)arg1 ;
-(void)appendNode:(id)arg1 ;
-(NSArray *)allNodes;
-(void)removeAllNodes;
@end

