/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSArray;

@interface AVCaptureResolvedPhotoSettingsInternal : NSObject {

	long long uniqueID;
	SCD_Struct_AV41 photoDimensions;
	SCD_Struct_AV41 rawPhotoDimensions;
	SCD_Struct_AV41 previewDimensions;
	SCD_Struct_AV41 embeddedThumbnailDimensions;
	SCD_Struct_AV41 rawEmbeddedThumbnailDimensions;
	BOOL livePhotoMovieEnabled;
	SCD_Struct_AV41 livePhotoMovieDimensions;
	SCD_Struct_AV41 portraitEffectsMatteDimensions;
	SCD_Struct_AV41 hairSegmentationMatteDimensions;
	SCD_Struct_AV41 skinSegmentationMatteDimensions;
	SCD_Struct_AV41 teethSegmentationMatteDimensions;
	SCD_Struct_AV41 spatialOverCapturePhotoDimensions;
	BOOL turboModeEnabled;
	BOOL flashEnabled;
	BOOL redEyeReductionEnabled;
	BOOL HDREnabled;
	BOOL adjustedPhotoFiltersEnabled;
	BOOL EV0PhotoDeliveryEnabled;
	BOOL stillImageStabilizationEnabled;
	BOOL virtualDeviceFusionEnabled;
	BOOL squareCropEnabled;
	SCD_Struct_AV41 deferredPhotoProxyDimensions;
	SCD_Struct_AV8 photoProcessingTimeRange;
	NSArray* photoManifest;

}
-(void)dealloc;
@end

