/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSString, NSDictionary, AVCameraCalibrationData, AVCaptureResolvedPhotoSettings, AVCapturePhotoSettings, AVDepthData, AVPortraitEffectsMatte, AVSemanticSegmentationMatte, AVCaptureBracketedStillImageSettings, AVCapturePhotoPrivateClientMetadata, AVApplePortraitMetadata;

@interface AVCapturePhotoInternal : NSObject {

	SCD_Struct_AV7 timestamp;
	IOSurfaceRef photoSurface;
	unsigned long long photoSurfaceSize;
	NSString* processedFileType;
	CVBufferRef photoPixelBuffer;
	CVBufferRef previewPixelBuffer;
	CVBufferRef embeddedThumbnailSourcePixelBuffer;
	NSDictionary* embeddedThumbnailPhotoFormat;
	NSDictionary* metadata;
	AVCameraCalibrationData* cameraCalibrationData;
	AVCaptureResolvedPhotoSettings* resolvedSettings;
	AVCapturePhotoSettings* unresolvedSettings;
	AVDepthData* depthData;
	BOOL didTryToDecodeDepthData;
	AVPortraitEffectsMatte* portraitEffectsMatte;
	BOOL didTryToDecodePortraitEffectsMatte;
	AVSemanticSegmentationMatte* hairSegmentationMatte;
	BOOL didTryToDecodeHairSegmentationMatte;
	AVSemanticSegmentationMatte* skinSegmentationMatte;
	BOOL didTryToDecodeSkinSegmentationMatte;
	AVSemanticSegmentationMatte* teethSegmentationMatte;
	BOOL didTryToDecodeTeethSegmentationMatte;
	BOOL isRawPhoto;
	AVCaptureBracketedStillImageSettings* bracketSettings;
	unsigned long long sequenceCount;
	unsigned long long photoCount;
	NSString* sourceDeviceType;
	unsigned expectedPhotoProcessingFlags;
	unsigned actualPhotoProcessingFlags;
	AVCapturePhotoPrivateClientMetadata* privateClientMetadata;
	AVApplePortraitMetadata* portraitMetadata;
	BOOL lensStabilizationSupported;

}
@end

