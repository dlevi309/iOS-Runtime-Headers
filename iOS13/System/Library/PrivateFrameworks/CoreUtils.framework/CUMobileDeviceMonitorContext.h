/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setDevice:(CUMobileDevice *)arg1 ;
-(CUMobileDeviceDiscovery *)discovery;
-(void)setDiscovery:(CUMobileDeviceDiscovery *)arg1 ;
@end

