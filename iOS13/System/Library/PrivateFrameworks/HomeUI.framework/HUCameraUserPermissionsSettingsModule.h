/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUExpandableItemModule.h>
#import <libobjc.A.dylib/HUCameraSettingsModule.h>

@class NSSet, HFItem, HMUser, HMHome, HUCameraAccessLevelOptionItemProvider, HFStaticItemProvider, NSArray, NSString, UIViewController;

@interface HUCameraUserPermissionsSettingsModule : HUExpandableItemModule <HUCameraSettingsModule> {

	NSSet* _itemProviders;
	HFItem* _showOptionsItem;
	HMUser* _user;
	HMHome* _home;
	HUCameraAccessLevelOptionItemProvider* _accessLevelSettingItemProvider;
	HFStaticItemProvider* _itemProvider;
	NSArray* _optionItems;

}

@property (nonatomic,retain) HUCameraAccessLevelOptionItemProvider * accessLevelSettingItemProvider;              //@synthesize accessLevelSettingItemProvider=_accessLevelSettingItemProvider - In the implementation block
@property (nonatomic,retain) HFStaticItemProvider * itemProvider;                                                 //@synthesize itemProvider=_itemProvider - In the implementation block
@property (nonatomic,retain) NSArray * optionItems;                                                               //@synthesize optionItems=_optionItems - In the implementation block
@property (nonatomic,readonly) HMUser * user;                                                                     //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                                     //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) unsigned long long userAccessLevelSetting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long displayStyle; 
@property (nonatomic,retain) UIViewController * presentingViewController; 
-(HMUser *)user;
-(HFStaticItemProvider *)itemProvider;
-(void)setItemProvider:(HFStaticItemProvider *)arg1 ;
-(HMHome *)home;
-(id)itemProviders;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)didSelectItem:(id)arg1 ;
-(id)initWithItemUpdater:(id)arg1 user:(id)arg2 home:(id)arg3 ;
-(BOOL)isItemHeader:(id)arg1 ;
-(id)showOptionsItem;
-(void)_buildItemProvider;
-(void)setOptionItems:(NSArray *)arg1 ;
-(NSArray *)optionItems;
-(void)_dispatchUpdateForHome:(id)arg1 user:(id)arg2 ;
-(HUCameraAccessLevelOptionItemProvider *)accessLevelSettingItemProvider;
-(id)updateUserAccessLevelSetting:(unsigned long long)arg1 ;
-(void)setAccessLevelSettingItemProvider:(HUCameraAccessLevelOptionItemProvider *)arg1 ;
-(unsigned long long)userAccessLevelSetting;
@end

