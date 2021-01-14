/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


@class NSDictionary, NSString, NSArray, NSURL;

@interface AVCapturePhotoSettingsInternal : NSObject {

	NSDictionary* format;
	NSString* processedFileType;
	unsigned rawPhotoPixelFormatType;
	NSString* rawFileType;
	long long uniqueID;
	long long flashMode;
	BOOL autoRedEyeReductionEnabled;
	long long digitalFlashMode;
	long long HDRMode;
	BOOL EV0PhotoDeliveryEnabled;
	long long photoQualityPrioritization;
	BOOL photoQualityPrioritizationIsSetByClient;
	BOOL autoVirtualDeviceFusionEnabled;
	NSArray* virtualDeviceConstituentPhotoDeliveryEnabledDevices;
	BOOL highResolutionPhotoEnabled;
	BOOL depthDataDeliveryEnabled;
	BOOL embedsDepthDataInPhoto;
	BOOL depthDataFiltered;
	BOOL cameraCalibrationDataDeliveryEnabled;
	BOOL portraitEffectsMatteDeliveryEnabled;
	BOOL embedsPortraitEffectsMatteInPhoto;
	NSArray* enabledSemanticSegmentationMatteTypes;
	BOOL embedsSemanticSegmentationMattesInPhoto;
	NSDictionary* metadata;
	NSURL* livePhotoMovieFileURL;
	NSURL* livePhotoMovieFileURLForOriginalPhoto;
	NSString* livePhotoVideoCodecType;
	NSArray* livePhotoMovieMetadata;
	NSArray* livePhotoMovieMetadataForOriginalPhoto;
	NSDictionary* previewPhotoFormat;
	NSDictionary* embeddedThumbnailPhotoFormat;
	NSDictionary* rawEmbeddedThumbnailPhotoFormat;
	BOOL squareCropEnabled;
	BOOL turboModeEnabled;
	BOOL burstQualityCaptureEnabled;
	NSArray* photoFilters;
	NSArray* adjustedPhotoFilters;
	unsigned shutterSound;
	unsigned long long userInitiatedPhotoRequestTime;
	BOOL autoDeferredProcessingEnabled;
	NSURL* HEICSFileURL;
	NSURL* videoFileURL;
	NSDictionary* videoFormat;
	NSArray* videoFileMetadata;
	BOOL autoSpatialOverCaptureEnabled;
	NSDictionary* spatialOverCaptureMetadata;
	NSURL* spatialOverCaptureLivePhotoMovieFileURL;
	NSArray* spatialOverCaptureLivePhotoMovieMetadata;
	NSString* spatialOverCaptureLivePhotoContentIdentifier;
	NSString* spatialOverCaptureGroupIdentifier;
	NSDictionary* spatialOverCaptureMetadataForOriginalPhoto;
	NSURL* spatialOverCaptureLivePhotoMovieFileURLForOriginalPhoto;
	NSArray* spatialOverCaptureLivePhotoMovieMetadataForOriginalPhoto;
	NSString* spatialOverCaptureLivePhotoContentIdentifierForOriginalPhoto;
	NSString* spatialOverCaptureGroupIdentifierForOriginalPhoto;
	BOOL processedPhotoZoomWithoutUpscalingEnabled;
	BOOL autoContentAwareDistortionCorrectionEnabled;
	NSString* livePhotoContentIdentifier;
	NSString* livePhotoContentIdentifierForOriginalPhoto;

}
@end

