/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUServiceDetailsItemModule.h>

@protocol HUServiceDetailsControlAndCharacteristicStateItemModuleDelegate;
@class HFCharacteristicStateItemProvider, HFControlPanelItemProvider, NSSet;

@interface HUServiceDetailsControlAndCharacteristicStateItemModule : HUServiceDetailsItemModule {

	HFCharacteristicStateItemProvider* _characteristicStateItemProvider;
	HFControlPanelItemProvider* _controlPanelItemProvider;
	NSSet* _itemProviders;
	id<HUServiceDetailsControlAndCharacteristicStateItemModuleDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HUServiceDetailsControlAndCharacteristicStateItemModuleDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HFCharacteristicStateItemProvider * characteristicStateItemProvider;                            //@synthesize characteristicStateItemProvider=_characteristicStateItemProvider - In the implementation block
@property (nonatomic,readonly) HFControlPanelItemProvider * controlPanelItemProvider;                                          //@synthesize controlPanelItemProvider=_controlPanelItemProvider - In the implementation block
-(id<HUServiceDetailsControlAndCharacteristicStateItemModuleDelegate>)delegate;
-(void)setDelegate:(id<HUServiceDetailsControlAndCharacteristicStateItemModuleDelegate>)arg1 ;
-(id)itemProviders;
-(BOOL)isServiceGroup;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)sourceServiceItem;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3 ;
-(HFControlPanelItemProvider *)controlPanelItemProvider;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3 delegate:(id)arg4 ;
-(HFCharacteristicStateItemProvider *)characteristicStateItemProvider;
-(id)_createGroupCharacteristicSectionsForItems:(id)arg1 ;
-(id)_createStandaloneCharacteristicSectionsForItems:(id)arg1 ;
-(id)_allCharacteristicTypesForItem:(id)arg1 ;
-(/*^block*/id)_characteristicStateItemComparator;
@end

