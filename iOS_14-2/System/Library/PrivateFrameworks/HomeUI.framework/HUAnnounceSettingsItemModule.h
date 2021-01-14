/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemModule.h>

@class HMHome, HUAnnounceNotificationSettingsItemProvider, HFItemProvider, HFUserItemProvider;

@interface HUAnnounceSettingsItemModule : HFItemModule {

	HMHome* _home;
	unsigned long long _settingsContext;
	HUAnnounceNotificationSettingsItemProvider* _notificationSettingsItemProvider;
	HFItemProvider* _announceDeviceItemProvider;
	HFUserItemProvider* _userItemProvider;

}

@property (nonatomic,retain) HUAnnounceNotificationSettingsItemProvider * notificationSettingsItemProvider;              //@synthesize notificationSettingsItemProvider=_notificationSettingsItemProvider - In the implementation block
@property (nonatomic,retain) HFItemProvider * announceDeviceItemProvider;                                                //@synthesize announceDeviceItemProvider=_announceDeviceItemProvider - In the implementation block
@property (nonatomic,retain) HFUserItemProvider * userItemProvider;                                                      //@synthesize userItemProvider=_userItemProvider - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                                            //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) unsigned long long settingsContext;                                                       //@synthesize settingsContext=_settingsContext - In the implementation block
+(/*^block*/id)_userItemComparator;
+(/*^block*/id)_announceDeviceItemComparator;
-(id)updateNotificationSettings:(id)arg1 ;
-(id)itemProviders;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(HMHome *)home;
-(void)_buildItemProviders;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 settingsContext:(unsigned long long)arg3 ;
-(id)enableAnnounceSetting:(BOOL)arg1 forItem:(id)arg2 ;
-(id)enablePermissionSetting:(BOOL)arg1 forItem:(id)arg2 ;
-(id)_updateNotificationSettings:(id)arg1 ;
-(unsigned long long)settingsContext;
-(HUAnnounceNotificationSettingsItemProvider *)notificationSettingsItemProvider;
-(HFItemProvider *)announceDeviceItemProvider;
-(HFUserItemProvider *)userItemProvider;
-(void)setNotificationSettingsItemProvider:(HUAnnounceNotificationSettingsItemProvider *)arg1 ;
-(void)setAnnounceDeviceItemProvider:(HFItemProvider *)arg1 ;
-(void)setUserItemProvider:(HFUserItemProvider *)arg1 ;
@end

