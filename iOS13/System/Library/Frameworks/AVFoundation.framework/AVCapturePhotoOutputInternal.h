/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSArray, NSObject, NSDictionary, AVCapturePhotoSettings, NSMutableArray, NSString, AVMomentCaptureSettings;

@interface AVCapturePhotoOutputInternal : NSObject {

	AVWeakReference* weakReference;
	long long lastSettingsUniqueID;
	NSArray* availablePhotoPixelFormatTypes;
	NSArray* availablePhotoCodecTypes;
	NSArray* availableRawPhotoPixelFormatTypes;
	NSArray* availablePhotoFileTypes;
	NSArray* availableRawPhotoFileTypes;
	long long maxPhotoQualityPrioritization;
	BOOL maxPhotoQualityPrioritizationHasBeenSetByClient;
	BOOL stillImageStabilizationSupported;
	BOOL virtualDeviceFusionSupported;
	BOOL virtualDeviceConstituentPhotoDeliverySupported;
	BOOL virtualDeviceConstituentPhotoDeliveryEnabled;
	BOOL dualCameraDualPhotoDeliverySupported;
	BOOL dualCameraDualPhotoDeliveryEnabled;
	BOOL cameraCalibrationDataDeliverySupported;
	NSArray* supportedHDRModes;
	NSArray* supportedFlashModes;
	NSArray* supportedDigitalFlashModes;
	BOOL digitalFlashCaptureEnabled;
	BOOL autoRedEyeReductionSupported;
	BOOL highResolutionCaptureEnabled;
	unsigned long long maxBracketedCapturePhotoCount;
	BOOL lensStabilizationDuringBracketedCaptureSupported;
	BOOL livePhotoCaptureSupported;
	BOOL livePhotoCaptureEnabled;
	BOOL livePhotoAutoTrimmingEnabled;
	NSArray* availableLivePhotoVideoCodecTypes;
	SCD_Struct_AV7 livePhotoMovieDuration;
	SCD_Struct_AV7 livePhotoMovieVideoFrameDuration;
	SCD_Struct_AV41 livePhotoMovieDimensions;
	BOOL livePhotoCaptureSuspended;
	BOOL depthDataDeliverySupported;
	BOOL depthDataDeliveryEnabled;
	BOOL portraitEffectsMatteDeliverySupported;
	BOOL portraitEffectsMatteDeliveryEnabled;
	NSArray* availableSemanticSegmentationTypes;
	NSArray* enabledSemanticSegmentationTypes;
	BOOL filterRenderingEnabled;
	BOOL imageOptimizationForOfflineVideoStabilizationSupported;
	BOOL optimizesImagesForOfflineVideoStabilization;
	SCD_Struct_AV41 optimizedImageDimensionsForOfflineStabilization;
	BOOL livePhotoMovieProcessingSuspended;
	BOOL videoCaptureSupported;
	BOOL videoCaptureEnabled;
	BOOL resumeLivePhotoMovieCaptureAfterVideoCaptureEnds;
	NSObject*<OS_dispatch_queue> sceneDetectionObserversDispatchQueue;
	int flashSceneObserverCount;
	int HDRSceneObserverCount;
	int stillImageStabilizationSceneObserverCount;
	BOOL isFlashScene;
	BOOL isHDRScene;
	BOOL isStillImageStabilizationScene;
	int digitalFlashStatusObserverCount;
	long long digitalFlashStatus;
	int digitalFlashExposureTimesObserverCount;
	NSDictionary* digitalFlashExposureTimes;
	AVCapturePhotoSettings* photoSettingsForSceneMonitoring;
	OpaqueFigSimpleMutexRef requestsLock;
	NSMutableArray* photoRequests;
	NSMutableArray* prepareRequests;
	NSMutableArray* movieRequests;
	NSObject*<OS_dispatch_queue> beginEndIrisMovieCaptureHostTimeQueue;
	NSObject*<OS_dispatch_group> beginEndIrisMovieCaptureHostTimeDispatchGroup;
	NSString* sourceDeviceType;
	ct_green_tea_logger_sRef greenTeaLogger;
	BOOL movieRecordingSupported;
	BOOL movieRecordingEnabled;
	AVMomentCaptureSettings* momentCaptureInFlight;
	long long lastMomentSettingsUniqueID;
	BOOL deferredProcessingSupported;
	BOOL deferredProcessingEnabled;
	BOOL processedPhotoZoomWithoutUpscalingSupported;

}
@end

