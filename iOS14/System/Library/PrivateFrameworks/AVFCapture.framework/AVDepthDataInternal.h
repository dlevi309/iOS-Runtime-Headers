/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCameraCalibrationData, NSData;

@interface AVDepthDataInternal : NSObject {

	CVBufferRef pixelBuffer;
	int version;
	long long quality;
	BOOL filtered;
	long long accuracy;
	AVCameraCalibrationData* calibrationData;
	float depthBlurEffectSimulatedAperture;
	NSData* depthBlurEffectRenderingParameters;
	BOOL portraitScoreIsHigh;
	float portraitScore;
	float portraitLightingEffectStrength;

}
@end

