/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class NSArray;

@interface AVCaptureResolvedPhotoSettingsInternal : NSObject {

	long long uniqueID;
	SCD_Struct_AV22 photoDimensions;
	SCD_Struct_AV22 rawPhotoDimensions;
	SCD_Struct_AV22 previewDimensions;
	SCD_Struct_AV22 embeddedThumbnailDimensions;
	SCD_Struct_AV22 rawEmbeddedThumbnailDimensions;
	BOOL livePhotoMovieEnabled;
	SCD_Struct_AV22 livePhotoMovieDimensions;
	SCD_Struct_AV22 portraitEffectsMatteDimensions;
	SCD_Struct_AV22 hairSegmentationMatteDimensions;
	SCD_Struct_AV22 skinSegmentationMatteDimensions;
	SCD_Struct_AV22 teethSegmentationMatteDimensions;
	SCD_Struct_AV22 glassesSegmentationMatteDimensions;
	SCD_Struct_AV22 spatialOverCapturePhotoDimensions;
	BOOL turboModeEnabled;
	BOOL flashEnabled;
	BOOL redEyeReductionEnabled;
	BOOL HDREnabled;
	BOOL adjustedPhotoFiltersEnabled;
	BOOL EV0PhotoDeliveryEnabled;
	BOOL stillImageStabilizationEnabled;
	BOOL virtualDeviceFusionEnabled;
	BOOL squareCropEnabled;
	SCD_Struct_AV22 deferredPhotoProxyDimensions;
	SCD_Struct_AV23 photoProcessingTimeRange;
	BOOL contentAwareDistortionCorrectionEnabled;
	NSArray* photoManifest;
	unsigned long long digitalFlashUserInterfaceHints;
	NSArray* digitalFlashUserInterfaceRGBEstimate;
	BOOL captureBeforeResolvingSettingsEnabled;

}
-(void)dealloc;
@end

