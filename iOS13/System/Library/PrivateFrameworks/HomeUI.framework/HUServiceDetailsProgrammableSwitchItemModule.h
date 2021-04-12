/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

