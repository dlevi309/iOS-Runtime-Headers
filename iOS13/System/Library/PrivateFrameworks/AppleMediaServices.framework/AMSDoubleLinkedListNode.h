/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)object;
-(id)initWithObject:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(AMSDoubleLinkedListNode *)next;
-(AMSDoubleLinkedListNode *)previous;
-(void)setNext:(AMSDoubleLinkedListNode *)arg1 ;
-(NSString *)listIdentifier;
-(void)setPrevious:(AMSDoubleLinkedListNode *)arg1 ;
-(void)setListIdentifier:(NSString *)arg1 ;
@end

