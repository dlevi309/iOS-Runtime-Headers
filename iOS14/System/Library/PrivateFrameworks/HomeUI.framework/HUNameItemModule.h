/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemModule.h>

@protocol HFNamingComponentCreating;
@class HFItem, HFItemBuilder, HFTransformItem, NSSet, HFStaticItemProvider;

@interface HUNameItemModule : HFItemModule {

	HFItem*<HFNamingComponentCreating> _sourceItem;
	HFItemBuilder* _sourceItemBuilder;
	HFTransformItem* _nameAndIconItem;
	NSSet* _items;
	HFStaticItemProvider* _itemProvider;

}

@property (nonatomic,retain) HFItem*<HFNamingComponentCreating> sourceItem;              //@synthesize sourceItem=_sourceItem - In the implementation block
@property (nonatomic,retain) HFItemBuilder * sourceItemBuilder;                          //@synthesize sourceItemBuilder=_sourceItemBuilder - In the implementation block
@property (nonatomic,retain) HFTransformItem * nameAndIconItem;                          //@synthesize nameAndIconItem=_nameAndIconItem - In the implementation block
@property (nonatomic,retain) NSSet * items;                                              //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) HFStaticItemProvider * itemProvider;                        //@synthesize itemProvider=_itemProvider - In the implementation block
-(void)setItems:(NSSet *)arg1 ;
-(id)init;
-(HFStaticItemProvider *)itemProvider;
-(NSSet *)items;
-(void)setItemProvider:(HFStaticItemProvider *)arg1 ;
-(void)setSourceItem:(HFItem*<HFNamingComponentCreating>)arg1 ;
-(id)itemProviders;
-(HFTransformItem *)nameAndIconItem;
-(HFItem*<HFNamingComponentCreating>)sourceItem;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(HFItemBuilder *)sourceItemBuilder;
-(void)setNameAndIconItem:(HFTransformItem *)arg1 ;
-(void)setSourceItemBuilder:(HFItemBuilder *)arg1 ;
-(id)initWithItemUpdater:(id)arg1 sourceServiceLikeItem:(id)arg2 itemBuilder:(id)arg3 ;
@end

