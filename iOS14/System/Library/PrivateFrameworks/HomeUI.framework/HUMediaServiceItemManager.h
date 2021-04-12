/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HFItem, HUMediaServiceItem, HFUserItem, HUAccessorySettingsItemModule, HMHome;

@interface HUMediaServiceItemManager : HFItemManager {

	HFItem* _updateListeningHistoryItem;
	HFItem* _updateListeningHistoryFooterItem;
	HFItem* _removeItem;
	HFItem* _reconnectItem;
	HFItem* _reconnectTitleItem;
	HUMediaServiceItem* _mediaServiceItem;
	HFUserItem* _userItem;
	HUAccessorySettingsItemModule* _userSettingsItemModule;
	HMHome* _homeForUser;

}

@property (nonatomic,retain) HMHome * homeForUser;                                                //@synthesize homeForUser=_homeForUser - In the implementation block
@property (nonatomic,retain) HFItem * updateListeningHistoryItem;                                 //@synthesize updateListeningHistoryItem=_updateListeningHistoryItem - In the implementation block
@property (nonatomic,retain) HFItem * updateListeningHistoryFooterItem;                           //@synthesize updateListeningHistoryFooterItem=_updateListeningHistoryFooterItem - In the implementation block
@property (nonatomic,retain) HFItem * removeItem;                                                 //@synthesize removeItem=_removeItem - In the implementation block
@property (nonatomic,retain) HFItem * reconnectItem;                                              //@synthesize reconnectItem=_reconnectItem - In the implementation block
@property (nonatomic,retain) HFItem * reconnectTitleItem;                                         //@synthesize reconnectTitleItem=_reconnectTitleItem - In the implementation block
@property (nonatomic,retain) HUMediaServiceItem * mediaServiceItem;                               //@synthesize mediaServiceItem=_mediaServiceItem - In the implementation block
@property (nonatomic,retain) HFUserItem * userItem;                                               //@synthesize userItem=_userItem - In the implementation block
@property (nonatomic,retain) HUAccessorySettingsItemModule * userSettingsItemModule;              //@synthesize userSettingsItemModule=_userSettingsItemModule - In the implementation block
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(HFUserItem *)userItem;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(void)setHomeForUser:(HMHome *)arg1 ;
-(HMHome *)homeForUser;
-(void)setRemoveItem:(HFItem *)arg1 ;
-(void)setUserSettingsItemModule:(HUAccessorySettingsItemModule *)arg1 ;
-(HFItem *)removeItem;
-(HUAccessorySettingsItemModule *)userSettingsItemModule;
-(void)setUserItem:(HFUserItem *)arg1 ;
-(void)setMediaServiceItem:(HUMediaServiceItem *)arg1 ;
-(id)initWithHome:(id)arg1 mediaServiceItem:(id)arg2 delegate:(id)arg3 ;
-(HUMediaServiceItem *)mediaServiceItem;
-(void)setUpdateListeningHistoryItem:(HFItem *)arg1 ;
-(void)setUpdateListeningHistoryFooterItem:(HFItem *)arg1 ;
-(BOOL)_isAppleMusicService;
-(BOOL)_hasAuthFatalError;
-(void)setReconnectItem:(HFItem *)arg1 ;
-(void)setReconnectTitleItem:(HFItem *)arg1 ;
-(HFItem *)updateListeningHistoryItem;
-(HFItem *)updateListeningHistoryFooterItem;
-(HFItem *)reconnectItem;
-(HFItem *)reconnectTitleItem;
@end

