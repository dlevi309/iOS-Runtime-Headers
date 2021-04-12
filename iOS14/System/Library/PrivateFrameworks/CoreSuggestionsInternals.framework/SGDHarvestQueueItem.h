/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class CSSearchableItem;

@interface SGDHarvestQueueItem : NSObject {

	long long _itemId;
	CSSearchableItem* _item;
	unsigned long long _fails;
	unsigned char _customPriorityCriteria;

}

@property (nonatomic,readonly) long long itemId;                                  //@synthesize itemId=_itemId - In the implementation block
@property (readonly) CSSearchableItem * item;                                     //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) unsigned long long fails;                          //@synthesize fails=_fails - In the implementation block
@property (nonatomic,readonly) BOOL highPriority; 
@property (nonatomic,readonly) unsigned char customPriorityCriteria;              //@synthesize customPriorityCriteria=_customPriorityCriteria - In the implementation block
-(void)finish;
-(long long)itemId;
-(void)markAsFailed;
-(unsigned long long)fails;
-(CSSearchableItem *)item;
-(BOOL)highPriority;
-(id)initWithItemId:(long long)arg1 item:(id)arg2 fails:(int)arg3 customPriorityCriteria:(unsigned char)arg4 ;
-(unsigned char)customPriorityCriteria;
@end

