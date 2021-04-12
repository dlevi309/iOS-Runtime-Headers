/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
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

