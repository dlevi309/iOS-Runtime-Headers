/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@class IMDoubleLinkedListNode;

@interface IMDoubleLinkedList : NSObject {

	IMDoubleLinkedListNode* _first;
	IMDoubleLinkedListNode* _last;
	unsigned long long _count;

}

@property (retain) IMDoubleLinkedListNode * first;              //@synthesize first=_first - In the implementation block
@property (retain) IMDoubleLinkedListNode * last;               //@synthesize last=_last - In the implementation block
@property (readonly) unsigned long long count;                  //@synthesize count=_count - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(void)removeAllObjects;
-(BOOL)containsObject:(id)arg1 ;
-(id)allObjects;
-(IMDoubleLinkedListNode *)first;
-(void)setFirst:(IMDoubleLinkedListNode *)arg1 ;
-(void)appendObject:(id)arg1 ;
-(void)setLast:(IMDoubleLinkedListNode *)arg1 ;
-(void)appendLinkedListNode:(id)arg1 ;
-(void)pushLinkedListNode:(id)arg1 ;
-(void)removeLinkedListNode:(id)arg1 ;
-(void)pushObject:(id)arg1 ;
-(id)popObject;
-(IMDoubleLinkedListNode *)last;
@end

