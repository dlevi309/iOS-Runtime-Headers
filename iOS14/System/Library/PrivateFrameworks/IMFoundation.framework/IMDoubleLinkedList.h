/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(IMDoubleLinkedListNode *)first;
-(id)init;
-(void)setFirst:(IMDoubleLinkedListNode *)arg1 ;
-(unsigned long long)count;
-(BOOL)containsObject:(id)arg1 ;
-(id)allObjects;
-(void)setLast:(IMDoubleLinkedListNode *)arg1 ;
-(void)pushObject:(id)arg1 ;
-(void)removeAllObjects;
-(id)popObject;
-(void)appendLinkedListNode:(id)arg1 ;
-(void)pushLinkedListNode:(id)arg1 ;
-(void)removeLinkedListNode:(id)arg1 ;
-(IMDoubleLinkedListNode *)last;
-(void)appendObject:(id)arg1 ;
-(void)dealloc;
@end

