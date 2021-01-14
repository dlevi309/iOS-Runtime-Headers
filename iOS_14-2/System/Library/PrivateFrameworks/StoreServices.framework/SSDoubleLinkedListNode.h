/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class NSString;

@interface SSDoubleLinkedListNode : NSObject {

	SSDoubleLinkedListNode* _previous;
	id _object;
	SSDoubleLinkedListNode* _next;
	NSString* _listIdentifier;

}

@property (nonatomic,retain) NSString * listIdentifier;                      //@synthesize listIdentifier=_listIdentifier - In the implementation block
@property (nonatomic,retain) SSDoubleLinkedListNode * previous;              //@synthesize previous=_previous - In the implementation block
@property (nonatomic,retain) id object;                                      //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) SSDoubleLinkedListNode * next;                  //@synthesize next=_next - In the implementation block
-(SSDoubleLinkedListNode *)next;
-(SSDoubleLinkedListNode *)previous;
-(void)setListIdentifier:(NSString *)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)init;
-(void)setPrevious:(SSDoubleLinkedListNode *)arg1 ;
-(id)object;
-(void)setObject:(id)arg1 ;
-(void)setNext:(SSDoubleLinkedListNode *)arg1 ;
-(NSString *)listIdentifier;
@end

