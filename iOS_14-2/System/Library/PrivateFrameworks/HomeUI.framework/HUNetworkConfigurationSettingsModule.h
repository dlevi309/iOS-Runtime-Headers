/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemModule.h>

@protocol HUNetworkConfigurationSettingsModuleDelegate;
@class HMAccessoryNetworkProtectionGroup, HUNetworkProtectionModeOptionItemProvider, NSTimer, HFNetworkConfigurationGroupItem;

@interface HUNetworkConfigurationSettingsModule : HFItemModule {

	BOOL _isUpdatingProtectionMode;
	id<HUNetworkConfigurationSettingsModuleDelegate> _networkConfigurationSettingsModuleDelegate;
	HMAccessoryNetworkProtectionGroup* _group;
	HUNetworkProtectionModeOptionItemProvider* _networkProtectionModeOptionItemProvider;
	NSTimer* _updateProtectionModeTimer;

}

@property (nonatomic,retain) HUNetworkProtectionModeOptionItemProvider * networkProtectionModeOptionItemProvider;                             //@synthesize networkProtectionModeOptionItemProvider=_networkProtectionModeOptionItemProvider - In the implementation block
@property (assign,nonatomic) BOOL isUpdatingProtectionMode;                                                                                   //@synthesize isUpdatingProtectionMode=_isUpdatingProtectionMode - In the implementation block
@property (nonatomic,retain) NSTimer * updateProtectionModeTimer;                                                                             //@synthesize updateProtectionModeTimer=_updateProtectionModeTimer - In the implementation block
@property (assign,nonatomic,__weak) id<HUNetworkConfigurationSettingsModuleDelegate> networkConfigurationSettingsModuleDelegate;              //@synthesize networkConfigurationSettingsModuleDelegate=_networkConfigurationSettingsModuleDelegate - In the implementation block
@property (nonatomic,readonly) HMAccessoryNetworkProtectionGroup * group;                                                                     //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) HFNetworkConfigurationGroupItem * sourceItem; 
+(id)_attributedCheckmarkIcon;
+(id)_allowedHostDescriptionForHostGroup:(id)arg1 ;
+(id)_attributedExclamationIcon;
+(id)_attributedIconNamed:(id)arg1 ;
-(HMAccessoryNetworkProtectionGroup *)group;
-(id)description;
-(id)itemProviders;
-(HFNetworkConfigurationGroupItem *)sourceItem;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithItemUpdater:(id)arg1 group:(id)arg2 ;
-(HUNetworkProtectionModeOptionItemProvider *)networkProtectionModeOptionItemProvider;
-(void)setIsUpdatingProtectionMode:(BOOL)arg1 ;
-(NSTimer *)updateProtectionModeTimer;
-(void)setUpdateProtectionModeTimer:(NSTimer *)arg1 ;
-(id<HUNetworkConfigurationSettingsModuleDelegate>)networkConfigurationSettingsModuleDelegate;
-(id)_protectionModeOptionSectionFooter;
-(BOOL)isUpdatingProtectionMode;
-(BOOL)isItemNetworkProtectionModeOptionItem:(id)arg1 ;
-(id)updateProtectionMode:(long long)arg1 ;
-(void)setNetworkConfigurationSettingsModuleDelegate:(id<HUNetworkConfigurationSettingsModuleDelegate>)arg1 ;
-(void)setNetworkProtectionModeOptionItemProvider:(HUNetworkProtectionModeOptionItemProvider *)arg1 ;
@end

