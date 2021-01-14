/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

