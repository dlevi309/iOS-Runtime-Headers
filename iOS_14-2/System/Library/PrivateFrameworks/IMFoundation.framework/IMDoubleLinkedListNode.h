/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(IMDoubleLinkedListNode *)next;
-(id)initWithObject:(id)arg1 ;
-(void)orphan;
-(id)object;
-(void)setObject:(id)arg1 ;
-(void)setPrev:(IMDoubleLinkedListNode *)arg1 ;
-(void)setNext:(IMDoubleLinkedListNode *)arg1 ;
-(IMDoubleLinkedListNode *)prev;
-(void)removeFromList;
@end

