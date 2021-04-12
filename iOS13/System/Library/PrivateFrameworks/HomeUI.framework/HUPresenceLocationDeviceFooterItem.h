/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItem.h>

@class HULocationDeviceManager, HUPresenceCurrentUserLocationDevice, HMHome;

@interface HUPresenceLocationDeviceFooterItem : HFItem {

	BOOL _useSingleUserStyle;
	HULocationDeviceManager* _locationDeviceManager;
	HUPresenceCurrentUserLocationDevice* _selectedLocationDevice;
	HMHome* _home;

}

@property (nonatomic,readonly) HULocationDeviceManager * locationDeviceManager;                         //@synthesize locationDeviceManager=_locationDeviceManager - In the implementation block
@property (nonatomic,retain) HUPresenceCurrentUserLocationDevice * selectedLocationDevice;              //@synthesize selectedLocationDevice=_selectedLocationDevice - In the implementation block
@property (assign,nonatomic) BOOL useSingleUserStyle;                                                   //@synthesize useSingleUserStyle=_useSingleUserStyle - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                           //@synthesize home=_home - In the implementation block
-(id)init;
-(HMHome *)home;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HULocationDeviceManager *)locationDeviceManager;
-(void)setSelectedLocationDevice:(HUPresenceCurrentUserLocationDevice *)arg1 ;
-(id)initWithHome:(id)arg1 selectedLocationDevice:(id)arg2 locationDeviceManager:(id)arg3 useSingleUserStyle:(BOOL)arg4 ;
-(id)_itemUpdateOutcomeForLocationDeviceText:(id)arg1 ;
-(id)_locationDeviceTextForDeviceNameString:(id)arg1 ;
-(HUPresenceCurrentUserLocationDevice *)selectedLocationDevice;
-(id)_homeHubNeedsUpdateWarningText;
-(id)_someUsersNeedSoftwareUpdateWarningText;
-(BOOL)useSingleUserStyle;
-(void)setUseSingleUserStyle:(BOOL)arg1 ;
@end

