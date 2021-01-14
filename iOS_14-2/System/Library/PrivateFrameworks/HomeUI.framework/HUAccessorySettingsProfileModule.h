/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemModule.h>
#import <libobjc.A.dylib/HFAccessorySettingManagedConfigurationAdapterObserver.h>

@protocol HUAccessorySettingsProfileModuleDelegate;
@class HUAccessorySettingsProfileItemProvider, HFAccessorySettingGroupItem, HFAccessorySettingManagedConfigurationAdapter, NSString;

@interface HUAccessorySettingsProfileModule : HFItemModule <HFAccessorySettingManagedConfigurationAdapterObserver> {

	id<HUAccessorySettingsProfileModuleDelegate> _delegate;
	HUAccessorySettingsProfileItemProvider* _profileItemProvider;
	HFAccessorySettingGroupItem* _settingGroupItem;
	HFAccessorySettingManagedConfigurationAdapter* _adapter;

}

@property (assign,nonatomic,__weak) id<HUAccessorySettingsProfileModuleDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HUAccessorySettingsProfileItemProvider * profileItemProvider;              //@synthesize profileItemProvider=_profileItemProvider - In the implementation block
@property (nonatomic,readonly) HFAccessorySettingGroupItem * settingGroupItem;                            //@synthesize settingGroupItem=_settingGroupItem - In the implementation block
@property (nonatomic,readonly) HFAccessorySettingManagedConfigurationAdapter * adapter;                   //@synthesize adapter=_adapter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HUAccessorySettingsProfileModuleDelegate>)delegate;
-(void)setDelegate:(id<HUAccessorySettingsProfileModuleDelegate>)arg1 ;
-(HFAccessorySettingManagedConfigurationAdapter *)adapter;
-(void)managedConfigurationAdapterSettingsWereUpdated:(id)arg1 ;
-(id)itemProviders;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(HUAccessorySettingsProfileItemProvider *)profileItemProvider;
-(id)_actuallyRemoveProfileItem:(id)arg1 ;
-(id)initWithItemUpdater:(id)arg1 settingGroupItem:(id)arg2 ;
-(id)promptForRemoveProfileItem:(id)arg1 ;
-(HFAccessorySettingGroupItem *)settingGroupItem;
@end

