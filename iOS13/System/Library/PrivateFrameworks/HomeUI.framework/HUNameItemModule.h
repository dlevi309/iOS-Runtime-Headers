/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(HFStaticItemProvider *)itemProvider;
-(void)setItemProvider:(HFStaticItemProvider *)arg1 ;
-(NSSet *)items;
-(void)setItems:(NSSet *)arg1 ;
-(id)itemProviders;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(HFItem*<HFNamingComponentCreating>)sourceItem;
-(void)setSourceItem:(HFItem*<HFNamingComponentCreating>)arg1 ;
-(HFTransformItem *)nameAndIconItem;
-(HFItemBuilder *)sourceItemBuilder;
-(void)setNameAndIconItem:(HFTransformItem *)arg1 ;
-(void)setSourceItemBuilder:(HFItemBuilder *)arg1 ;
-(id)initWithItemUpdater:(id)arg1 sourceServiceLikeItem:(id)arg2 itemBuilder:(id)arg3 ;
@end

