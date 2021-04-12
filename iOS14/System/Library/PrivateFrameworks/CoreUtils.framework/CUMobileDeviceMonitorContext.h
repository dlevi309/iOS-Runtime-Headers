/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class CUMobileDevice, CUMobileDeviceDiscovery;

@interface CUMobileDeviceMonitorContext : NSObject {

	CUMobileDevice* _device;
	CUMobileDeviceDiscovery* _discovery;

}

@property (nonatomic,retain) CUMobileDevice * device;                          //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) CUMobileDeviceDiscovery * discovery;              //@synthesize discovery=_discovery - In the implementation block
-(CUMobileDevice *)device;
-(void)setDiscovery:(CUMobileDeviceDiscovery *)arg1 ;
-(void)setDevice:(CUMobileDevice *)arg1 ;
-(CUMobileDeviceDiscovery *)discovery;
@end

