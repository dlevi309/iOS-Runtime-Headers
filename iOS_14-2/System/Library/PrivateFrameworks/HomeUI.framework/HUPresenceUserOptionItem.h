/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItem.h>

@class HFUserItem, HULocationDeviceManager, HUPresenceCurrentUserLocationDevice;

@interface HUPresenceUserOptionItem : HFItem {

	HFUserItem* _userItem;
	HULocationDeviceManager* _locationDeviceManager;
	HUPresenceCurrentUserLocationDevice* _selectedLocationDevice;

}

@property (nonatomic,readonly) HFUserItem * userItem;                                                   //@synthesize userItem=_userItem - In the implementation block
@property (nonatomic,readonly) HULocationDeviceManager * locationDeviceManager;                         //@synthesize locationDeviceManager=_locationDeviceManager - In the implementation block
@property (nonatomic,retain) HUPresenceCurrentUserLocationDevice * selectedLocationDevice;              //@synthesize selectedLocationDevice=_selectedLocationDevice - In the implementation block
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HFUserItem *)userItem;
-(HULocationDeviceManager *)locationDeviceManager;
-(void)setSelectedLocationDevice:(HUPresenceCurrentUserLocationDevice *)arg1 ;
-(id)initWithUserItem:(id)arg1 selectedLocationDevice:(id)arg2 locationDeviceManager:(id)arg3 ;
-(HUPresenceCurrentUserLocationDevice *)selectedLocationDevice;
@end

