/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUServiceDetailsItemModule.h>

@class HUCharacteristicEventOptionProvider, NSSet;

@interface HUServiceDetailsProgrammableSwitchItemModule : HUServiceDetailsItemModule {

	HUCharacteristicEventOptionProvider* _programmableSwitchOptionsProvider;
	NSSet* _itemProviders;

}

@property (nonatomic,copy) NSSet * itemProviders;                                                                    //@synthesize itemProviders=_itemProviders - In the implementation block
@property (nonatomic,readonly) HFItem*<HFServiceLikeItem> sourceItem; 
@property (nonatomic,readonly) HUCharacteristicEventOptionProvider * programmableSwitchOptionsProvider;              //@synthesize programmableSwitchOptionsProvider=_programmableSwitchOptionsProvider - In the implementation block
-(NSSet *)itemProviders;
-(void)setItemProviders:(NSSet *)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(HUCharacteristicEventOptionProvider *)programmableSwitchOptionsProvider;
@end

