/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@interface IMDoubleLinkedListNode : NSObject {

	IMDoubleLinkedListNode* _prev;
	IMDoubleLinkedListNode* _next;
	id _object;

}

@property (retain) IMDoubleLinkedListNode * prev;              //@synthesize prev=_prev - In the implementation block
@property (retain) IMDoubleLinkedListNode * next;              //@synthesize next=_next - In the implementation block
@property (retain) id object;                                  //@synthesize object=_object - In the implementation block
-(void)dealloc;
-(id)object;
-(id)initWithObject:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(IMDoubleLinkedListNode *)next;
-(IMDoubleLinkedListNode *)prev;
-(void)setNext:(IMDoubleLinkedListNode *)arg1 ;
-(void)setPrev:(IMDoubleLinkedListNode *)arg1 ;
-(void)removeFromList;
-(void)orphan;
@end

