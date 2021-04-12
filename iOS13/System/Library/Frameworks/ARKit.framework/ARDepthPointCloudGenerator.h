/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


#import <ARKit/ARKit-Structs.h>
@class JDDepthProcessor;

@interface ARDepthPointCloudGenerator : NSObject {

	JDDepthProcessor* _depthDataProcessor;

}
-(id)initWithDepthCameraCalibrationData:(id)arg1 ;
-(id)generateDepthPointCloudFromDepthData:(CVBufferRef)arg1 ;
@end

