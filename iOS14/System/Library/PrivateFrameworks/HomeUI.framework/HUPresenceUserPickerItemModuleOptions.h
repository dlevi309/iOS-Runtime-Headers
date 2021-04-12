/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class HUPresenceCurrentUserLocationDevice;

@interface HUPresenceUserPickerItemModuleOptions : NSObject {

	BOOL _customLocationSelected;
	HUPresenceCurrentUserLocationDevice* _locationDevice;

}

@property (nonatomic,readonly) HUPresenceCurrentUserLocationDevice * locationDevice;              //@synthesize locationDevice=_locationDevice - In the implementation block
@property (nonatomic,readonly) BOOL customLocationSelected;                                       //@synthesize customLocationSelected=_customLocationSelected - In the implementation block
-(HUPresenceCurrentUserLocationDevice *)locationDevice;
-(BOOL)customLocationSelected;
-(id)initWithLocationDevice:(id)arg1 customLocationSelected:(BOOL)arg2 ;
@end

