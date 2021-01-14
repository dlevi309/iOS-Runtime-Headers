/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class NSString, NSDictionary, AVCameraCalibrationData, AVCaptureResolvedPhotoSettings, AVCapturePhotoSettings, AVDepthData, AVPortraitEffectsMatte, AVSemanticSegmentationMatte, AVCaptureBracketedStillImageSettings, AVCapturePhotoPrivateClientMetadata, AVApplePortraitMetadata;

@interface AVCapturePhotoInternal : NSObject {

	SCD_Struct_AV0 timestamp;
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
	AVSemanticSegmentationMatte* glassesSegmentationMatte;
	BOOL didTryToDecodeGlassesSegmentationMatte;
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

