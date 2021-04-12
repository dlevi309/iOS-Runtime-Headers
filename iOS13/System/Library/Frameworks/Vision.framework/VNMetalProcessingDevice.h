/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNProcessingDevice.h>

@protocol MTLDevice;
@interface VNMetalProcessingDevice : VNProcessingDevice {

	id<MTLDevice> _metalDevice;

}
+(id)allDevices;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithMetalDevice:(id)arg1 ;
-(id)metalDevice;
-(int)espressoStorageType;
-(BOOL)targetsGPU;
-(int)espressoDeviceID;
-(int)espressoEngine;
@end

