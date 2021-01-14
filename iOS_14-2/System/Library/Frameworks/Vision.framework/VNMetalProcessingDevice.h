/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNProcessingDevice.h>

@protocol MTLDevice;
@interface VNMetalProcessingDevice : VNProcessingDevice {

	id<MTLDevice> _metalDevice;

}
+(id)allDevices;
-(int)espressoEngine;
-(int)espressoStorageType;
-(id)initWithMetalDevice:(id)arg1 ;
-(int)espressoDeviceID;
-(BOOL)targetsGPU;
-(id)description;
-(id)metalDevice;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

