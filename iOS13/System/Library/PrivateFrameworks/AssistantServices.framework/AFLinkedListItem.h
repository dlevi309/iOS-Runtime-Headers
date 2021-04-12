/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@interface AFLinkedListItem : NSObject {

	id _object;
	AFLinkedListItem* _previousItem;
	AFLinkedListItem* _nextItem;

}

@property (nonatomic,readonly) id object;                                  //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) AFLinkedListItem * previousItem;              //@synthesize previousItem=_previousItem - In the implementation block
@property (nonatomic,retain) AFLinkedListItem * nextItem;                  //@synthesize nextItem=_nextItem - In the implementation block
-(id)object;
-(id)initWithObject:(id)arg1 ;
-(void)removeFromList;
-(AFLinkedListItem *)previousItem;
-(AFLinkedListItem *)nextItem;
-(void)insertAfterItem:(id)arg1 ;
-(void)setNextItem:(AFLinkedListItem *)arg1 ;
-(void)setPreviousItem:(AFLinkedListItem *)arg1 ;
-(void)insertBeforeItem:(id)arg1 ;
@end

