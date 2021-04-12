/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

