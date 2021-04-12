/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSString;

@interface AMSDoubleLinkedListNode : NSObject {

	AMSDoubleLinkedListNode* _previous;
	id _object;
	AMSDoubleLinkedListNode* _next;
	NSString* _listIdentifier;

}

@property (nonatomic,retain) NSString * listIdentifier;                       //@synthesize listIdentifier=_listIdentifier - In the implementation block
@property (nonatomic,retain) AMSDoubleLinkedListNode * previous;              //@synthesize previous=_previous - In the implementation block
@property (nonatomic,retain) id object;                                       //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) AMSDoubleLinkedListNode * next;                  //@synthesize next=_next - In the implementation block
-(AMSDoubleLinkedListNode *)next;
-(AMSDoubleLinkedListNode *)previous;
-(void)setListIdentifier:(NSString *)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)init;
-(void)setPrevious:(AMSDoubleLinkedListNode *)arg1 ;
-(id)object;
-(void)setObject:(id)arg1 ;
-(void)setNext:(AMSDoubleLinkedListNode *)arg1 ;
-(NSString *)listIdentifier;
@end

