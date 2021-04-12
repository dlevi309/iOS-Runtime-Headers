/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)insertBeforeItem:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)object;
-(void)setNextItem:(AFLinkedListItem *)arg1 ;
-(AFLinkedListItem *)nextItem;
-(void)insertAfterItem:(id)arg1 ;
-(void)setPreviousItem:(AFLinkedListItem *)arg1 ;
-(AFLinkedListItem *)previousItem;
-(void)removeFromList;
@end

