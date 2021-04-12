/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@protocol HFItemUpdating;
@class NSSet;

@interface HFItemModule : NSObject {

	id<HFItemUpdating> _itemUpdater;

}

@property (nonatomic,readonly) NSSet * itemProviders; 
@property (nonatomic,readonly) NSSet * allItems; 
@property (nonatomic,__weak,readonly) id<HFItemUpdating> itemUpdater;              //@synthesize itemUpdater=_itemUpdater - In the implementation block
-(id)init;
-(NSSet *)itemProviders;
-(BOOL)containsItem:(id)arg1 ;
-(NSSet *)allItems;
-(id<HFItemUpdating>)itemUpdater;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(void)registerForExternalUpdates;
-(void)unregisterForExternalUpdates;
@end

