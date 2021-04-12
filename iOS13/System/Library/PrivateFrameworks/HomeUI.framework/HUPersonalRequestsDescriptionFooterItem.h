/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItem.h>

@class HULocationDeviceManager;

@interface HUPersonalRequestsDescriptionFooterItem : HFItem {

	HULocationDeviceManager* _locationDeviceManager;

}

@property (nonatomic,readonly) HULocationDeviceManager * locationDeviceManager;              //@synthesize locationDeviceManager=_locationDeviceManager - In the implementation block
-(id)init;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HULocationDeviceManager *)locationDeviceManager;
-(id)_itemUpdateOutcomeForLocationDeviceText:(id)arg1 ;
-(id)_locationDeviceTextForDeviceNameString:(id)arg1 ;
@end

