/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSSet;

@interface HFItemUpdateRequest : NSObject {

	NSSet* _itemsToUpdate;
	NSSet* _itemsProvidersToReload;
	SEL _senderSelector;

}

@property (nonatomic,readonly) NSSet * itemsToUpdate;                       //@synthesize itemsToUpdate=_itemsToUpdate - In the implementation block
@property (nonatomic,readonly) NSSet * itemsProvidersToReload;              //@synthesize itemsProvidersToReload=_itemsProvidersToReload - In the implementation block
@property (nonatomic,readonly) SEL senderSelector;                          //@synthesize senderSelector=_senderSelector - In the implementation block
+(id)requestToReloadItemProviders:(id)arg1 senderSelector:(SEL)arg2 ;
+(id)requestToUpdateItems:(id)arg1 senderSelector:(SEL)arg2 ;
-(id)init;
-(SEL)senderSelector;
-(NSSet *)itemsProvidersToReload;
-(NSSet *)itemsToUpdate;
-(id)initWithItemProviders:(id)arg1 items:(id)arg2 senderSelector:(SEL)arg3 ;
@end

