/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureOutput.h>

@class AVCapturePhotoOutputInternal, NSArray, AVCapturePhotoSettings;

@interface AVCapturePhotoOutput : AVCaptureOutput {

	AVCapturePhotoOutputInternal* _internal;

}

@property (nonatomic,readonly) NSArray * preparedPhotoSettingsArray; 
@property (nonatomic,readonly) NSArray * availablePhotoPixelFormatTypes; 
@property (nonatomic,readonly) NSArray * availablePhotoCodecTypes; 
@property (nonatomic,readonly) NSArray * availableRawPhotoPixelFormatTypes; 
@property (nonatomic,readonly) NSArray * availablePhotoFileTypes; 
@property (nonatomic,readonly) NSArray * availableRawPhotoFileTypes; 
@property (assign,nonatomic) long long maxPhotoQualityPrioritization; 
@property (getter=isStillImageStabilizationSupported,nonatomic,readonly) BOOL stillImageStabilizationSupported; 
@property (nonatomic,readonly) BOOL isStillImageStabilizationScene; 
@property (getter=isVirtualDeviceFusionSupported,nonatomic,readonly) BOOL virtualDeviceFusionSupported; 
@property (getter=isDualCameraFusionSupported,nonatomic,readonly) BOOL dualCameraFusionSupported; 
@property (getter=isVirtualDeviceConstituentPhotoDeliverySupported,nonatomic,readonly) BOOL virtualDeviceConstituentPhotoDeliverySupported; 
@property (getter=isDualCameraDualPhotoDeliverySupported,nonatomic,readonly) BOOL dualCameraDualPhotoDeliverySupported; 
@property (assign,getter=isVirtualDeviceConstituentPhotoDeliveryEnabled,nonatomic) BOOL virtualDeviceConstituentPhotoDeliveryEnabled; 
@property (assign,getter=isDualCameraDualPhotoDeliveryEnabled,nonatomic) BOOL dualCameraDualPhotoDeliveryEnabled; 
@property (getter=isCameraCalibrationDataDeliverySupported,nonatomic,readonly) BOOL cameraCalibrationDataDeliverySupported; 
@property (nonatomic,readonly) NSArray * supportedFlashModes; 
@property (getter=isAutoRedEyeReductionSupported,nonatomic,readonly) BOOL autoRedEyeReductionSupported; 
@property (nonatomic,readonly) BOOL isFlashScene; 
@property (nonatomic,copy) AVCapturePhotoSettings * photoSettingsForSceneMonitoring; 
@property (assign,getter=isHighResolutionCaptureEnabled,nonatomic) BOOL highResolutionCaptureEnabled; 
@property (nonatomic,readonly) unsigned long long maxBracketedCapturePhotoCount; 
@property (getter=isLensStabilizationDuringBracketedCaptureSupported,nonatomic,readonly) BOOL lensStabilizationDuringBracketedCaptureSupported; 
@property (getter=isLivePhotoCaptureSupported,nonatomic,readonly) BOOL livePhotoCaptureSupported; 
@property (assign,getter=isLivePhotoCaptureEnabled,nonatomic) BOOL livePhotoCaptureEnabled; 
@property (assign,getter=isLivePhotoCaptureSuspended,nonatomic) BOOL livePhotoCaptureSuspended; 
@property (assign,getter=isLivePhotoAutoTrimmingEnabled,nonatomic) BOOL livePhotoAutoTrimmingEnabled; 
@property (nonatomic,readonly) NSArray * availableLivePhotoVideoCodecTypes; 
@property (getter=isContentAwareDistortionCorrectionSupported,nonatomic,readonly) BOOL contentAwareDistortionCorrectionSupported; 
@property (assign,getter=isContentAwareDistortionCorrectionEnabled,nonatomic) BOOL contentAwareDistortionCorrectionEnabled; 
+(id)new;
+(void)initialize;
+(id)DNGPhotoDataRepresentationForRawSampleBuffer:(opaqueCMSampleBufferRef)arg1 previewPhotoSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
+(unsigned long long)maxLivePhotoDataSize;
+(id)validMetadataTopLevelCGImagePropertiesKeys;
+(id)JPEGPhotoDataRepresentationForJPEGSampleBuffer:(opaqueCMSampleBufferRef)arg1 previewPhotoSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
+(SCD_Struct_AV22)maxLivePhotoMovieDimensions;
+(CFDictionaryRef)_copyAttachmentsAndPropagateFaceRegionsToExifAuxDictionaryForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(BOOL)isSpatialOverCaptureSupported;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(float)timeLapseCaptureRate;
-(BOOL)isHDRScene;
-(BOOL)isSpatialOverCaptureEnabled;
-(id)digitalFlashExposureTimes;
-(void)setLivePhotoCaptureEnabled:(BOOL)arg1 ;
-(void)setSpatialOverCaptureEnabled:(BOOL)arg1 ;
-(BOOL)isAutoRedEyeReductionSupported;
-(BOOL)isFlashScene;
-(void)setDeferredProcessingEnabled:(BOOL)arg1 ;
-(id)supportedHDRModes;
-(BOOL)isPreviewQualityAdjustedPhotoFilterRenderingSupported;
-(BOOL)isDepthDataDeliveryEnabled;
-(id)_errorForFigCaptureSessionNotificationPayloadErrorStatus:(int)arg1 userInfo:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isDigitalFlashCaptureEnabled;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(void)commitMomentCaptureWithUniqueID:(long long)arg1 toPhotoCaptureWithSettings:(id)arg2 delegate:(id)arg3 ;
-(BOOL)isPreviewQualityAdjustedPhotoFilterRenderingEnabled;
-(void)_dispatchFailureCallbacksForMovieRecordingSettings:(id)arg1 momentCaptureSettings:(id)arg2 toDelegate:(id)arg3 withError:(id)arg4 ;
-(void)_decrementObserverCountForKeyPath:(id)arg1 ;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(NSArray *)availableRawPhotoPixelFormatTypes;
-(void)_updateSupportedPropertiesForSourceDevice:(id)arg1 ;
-(BOOL)optimizesImagesForOfflineVideoStabilization;
-(void)setTimeLapseCaptureRate:(float)arg1 ;
-(id)init;
-(BOOL)isLivePhotoAutoTrimmingEnabled;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)setFilterRenderingEnabled:(BOOL)arg1 ;
-(void)setFigCaptureSessionSectionProperty:(CFStringRef)arg1 withHostTime:(SCD_Struct_AV0)arg2 settingStateVariableToNoOnFailure:(BOOL*)arg3 ;
-(void)_updateAutoRedReductionSupportedForSourceDevice:(id)arg1 ;
-(BOOL)isStillImageStabilizationSupported;
-(void)_updateProcessedPhotoZoomWithoutUpscalingSupportedForSourceDevice:(id)arg1 ;
-(void)setLivePhotoCaptureSuspended:(BOOL)arg1 ;
-(id)enabledSemanticSegmentationMatteTypes;
-(BOOL)isLivePhotoCaptureSupported;
-(BOOL)isLivePhotoCaptureSuspended;
-(void)setContentAwareDistortionCorrectionEnabled:(BOOL)arg1 ;
-(void)_updateAvailableRawPhotoFileTypesForSourceDevice:(id)arg1 ;
-(void)_handleDidFinishRecordingIrisMovieNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(void)setDualCameraDualPhotoDeliveryEnabled:(BOOL)arg1 ;
-(void)setOptimizesImagesForOfflineVideoStabilization:(BOOL)arg1 ;
-(BOOL)isFilterRenderingEnabled;
-(void)_setIsHDRScene:(BOOL)arg1 firingKVO:(BOOL)arg2 ;
-(BOOL)isVirtualDeviceConstituentPhotoDeliveryEnabled;
-(NSArray *)availablePhotoCodecTypes;
-(id)connectionMediaTypes;
-(void)setPreparedPhotoSettingsArray:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeConnection:(id)arg1 ;
-(id)_sanitizedSettingsForSettings:(id)arg1 ;
-(void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(void)_handleDidRecordIrisMovieNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleDidBeginRecordingMomentCaptureMovieNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(BOOL)isStillImageStabilizationScene;
-(BOOL)isDepthDataDeliverySupported;
-(void)_setDigitalFlashScene:(id)arg1 fireStatusKVO:(BOOL)arg2 fireExposureTimesKVO:(BOOL)arg3 ;
-(void)_updateStillImageStabilizationSupportedForSourceDevice:(id)arg1 ;
-(void)_updateAvailablePhotoPixelFormatTypesForSourceDevice:(id)arg1 ;
-(void)setVideoCaptureEnabled:(BOOL)arg1 ;
-(void)_updateSceneMonitoringForSourceDevice:(id)arg1 ;
-(id)supportedDigitalFlashModes;
-(BOOL)isPortraitEffectsMatteDeliverySupported;
-(void)_resetTimeLapseCaptureRate;
-(void)_updateTimeLapseCaptureRate;
-(long long)maxPhotoQualityPrioritization;
-(void)setMaxPhotoQualityPrioritization:(long long)arg1 ;
-(void)endMomentCaptureWithUniqueID:(long long)arg1 ;
-(void)capturePhotoWithSettings:(id)arg1 delegate:(id)arg2 ;
-(BOOL)isVideoCaptureSupported;
-(id)figCaptureIrisPreparedSettings;
-(void)_updateSpatialOverCaptureSupportedForSourceDevice:(id)arg1 ;
-(void)beginMomentCaptureWithSettings:(id)arg1 ;
-(void)_handleDidFinishRecordingMomentCaptureMovieNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(id)_avErrorUserInfoDictionaryForError:(int)arg1 movieRequest:(id)arg2 payload:(id)arg3 isSpatialOverCaptureMovie:(BOOL)arg4 ;
-(void)setLivePhotoAutoTrimmingEnabled:(BOOL)arg1 ;
-(void)_updatePreviewQualityAdjustedPhotoFilterRenderingSupportedForDevice:(id)arg1 ;
-(NSArray *)availablePhotoFileTypes;
-(BOOL)isContentAwareDistortionCorrectionEnabled;
-(void)_updateDepthDataDeliverySupportedForSourceDevice:(id)arg1 ;
-(void)_updateAvailableLivePhotoVideoCodecTypesForSourceDevice:(id)arg1 ;
-(void)_updateAvailablePhotoCodecTypesForSourceDevice:(id)arg1 ;
-(BOOL)isDualCameraFusionSupported;
-(void)_updateCameraCalibrationDataDeliverySupportedForSourceDevice:(id)arg1 ;
-(BOOL)isLivePhotoMovieProcessingSuspended;
-(void)setHighResolutionCaptureEnabled:(BOOL)arg1 ;
-(void)_handleDidFinishCaptureNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(BOOL)isImageOptimizationForOfflineVideoStabilizationSupported;
-(id)availableSemanticSegmentationMatteTypes;
-(BOOL)isCameraCalibrationDataDeliverySupported;
-(AVCapturePhotoSettings *)photoSettingsForSceneMonitoring;
-(void)setSession:(id)arg1 ;
-(id)supportedPhotoCodecTypesForFileType:(id)arg1 ;
-(void)_updateSupportedFlashModesForSourceDevice:(id)arg1 ;
-(void)endCaptureWithUniqueID:(long long)arg1 ;
-(BOOL)isDualCameraDualPhotoDeliverySupported;
-(long long)digitalFlashStatus;
-(void)_handleWillBeginCaptureNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleDidFinishRecordingVideoNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_updateDeferredProcessingSupportedForSourceDevice:(id)arg1 ;
-(void)setPreviewQualityAdjustedPhotoFilterRenderingEnabled:(BOOL)arg1 ;
-(void)_updateAvailableRawPhotoPixelFormatTypesForSourceDevice:(id)arg1 ;
-(id)_figCaptureIrisStillImageSettingsForAVCapturePhotoSettings:(id)arg1 delegate:(id)arg2 connections:(id)arg3 ;
-(void)_incrementObserverCountForKeyPath:(id)arg1 ;
-(void)_updateLivePhotoMovieDimensionsForSourceDevice:(id)arg1 ;
-(void)_handleWillBeginCaptureBeforeResolvingSettingsNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(BOOL)isPortraitEffectsMatteDeliveryEnabled;
-(void)_updateLensStabilizationDuringBracketedCaptureSupportedForSourceDevice:(id)arg1 ;
-(BOOL)isMovieRecordingEnabled;
-(SCD_Struct_AV0)livePhotoMovieVideoFrameDuration;
-(void)setFastCapturePrioritizationEnabled:(BOOL)arg1 ;
-(void)_setIsStillImageStabilizationScene:(BOOL)arg1 firingKVO:(BOOL)arg2 ;
-(NSArray *)availablePhotoPixelFormatTypes;
-(void)cancelMomentCaptureWithUniqueID:(long long)arg1 ;
-(void)_handleStillImageCompleteNotification:(id)arg1 withPayload:(id)arg2 forRequest:(id)arg3 ;
-(NSArray *)availableLivePhotoVideoCodecTypes;
-(NSArray *)availableRawPhotoFileTypes;
-(void)_setIsFlashScene:(BOOL)arg1 firingKVO:(BOOL)arg2 ;
-(BOOL)isContentAwareDistortionCorrectionSupported;
-(void)_handleDidCaptureStillImageNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)commitCaptureWithSettings:(id)arg1 delegate:(id)arg2 ;
-(void)_handleDidFinishWritingMomentCaptureMovieNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_updateSupportedHDRModesForSourceDevice:(id)arg1 ;
-(void)userInitiatedCaptureRequestAtTime:(unsigned long long)arg1 ;
-(BOOL)isProcessedPhotoZoomWithoutUpscalingSupported;
-(void)setMovieRecordingEnabled:(BOOL)arg1 ;
-(id)_figCaptureIrisPreparedSettingsForRequest:(id)arg1 ;
-(BOOL)isMovieRecordingSupported;
-(void)_updateSupportedDigitalFlashModesForSourceDevice:(id)arg1 ;
-(void)_updateOfflineVISSupportedForSourceDevice:(id)arg1 ;
-(NSArray *)supportedFlashModes;
-(void)setEnabledSemanticSegmentationMatteTypes:(id)arg1 ;
-(void)setVirtualDeviceConstituentPhotoDeliveryEnabled:(BOOL)arg1 ;
-(id)supportedPhotoPixelFormatTypesForFileType:(id)arg1 ;
-(void)setDigitalFlashCaptureEnabled:(BOOL)arg1 ;
-(void)_updateDualCameraDualPhotoDeliverySupportedForSourceDevice:(id)arg1 ;
-(void)setPortraitEffectsMatteDeliveryEnabled:(BOOL)arg1 ;
-(id)_figCaptureMovieFileRecordingSettingsForAVMomentCaptureMovieRecordingSettings:(id)arg1 momentCaptureSettings:(id)arg2 delegate:(id)arg3 connections:(id)arg4 ;
-(void)_updateVirtualDeviceFusionSupportedForSourceDevice:(id)arg1 ;
-(id)_avErrorUserInfoDictionaryForError:(int)arg1 photoRequest:(id)arg2 payload:(id)arg3 isOriginalMovie:(BOOL)arg4 ;
-(void)_updateFastCapturePrioritizationSupportedForDevice:(id)arg1 ;
-(void)_updateAvailablePhotoFileTypesForSourceDevice:(id)arg1 ;
-(BOOL)isVideoCaptureEnabled;
-(void)initiateCaptureWithSettings:(id)arg1 ;
-(BOOL)isDeferredProcessingEnabled;
-(SCD_Struct_AV0)livePhotoMovieDuration;
-(BOOL)isVirtualDeviceConstituentPhotoDeliverySupported;
-(SCD_Struct_AV22)livePhotoMovieDimensions;
-(NSArray *)preparedPhotoSettingsArray;
-(void)_resetLivePhotoMovieProcessingSuspended;
-(void)_updateLivePhotoCaptureSupportedForSourceDevice:(id)arg1 ;
-(void)_resetLivePhotoCaptureSuspended;
-(void)setPhotoSettingsForSceneMonitoring:(AVCapturePhotoSettings *)arg1 ;
-(void)setLivePhotoMovieProcessingSuspended:(BOOL)arg1 ;
-(void)_updateMovieRecordingSupportedForSourceDevice:(id)arg1 ;
-(BOOL)isDualCameraDualPhotoDeliveryEnabled;
-(id)_movieRequestForUniqueID:(long long)arg1 ;
-(void)_handlePreparationCompleteNotificationWithPayload:(id)arg1 settingsID:(long long)arg2 ;
-(void)_dispatchFailureCallbacks:(unsigned)arg1 forMovieRequest:(id)arg2 withError:(id)arg3 cleanupRequest:(BOOL)arg4 ;
-(BOOL)isFastCapturePrioritizationSupported;
-(BOOL)isLensStabilizationDuringBracketedCaptureSupported;
-(void)_updateMaxBracketedCapturePhotoCountForSourceDevice:(id)arg1 ;
-(void)commitMomentCaptureWithUniqueID:(long long)arg1 toMovieRecordingWithSettings:(id)arg2 delegate:(id)arg3 ;
-(id)supportedRawPhotoPixelFormatTypesForFileType:(id)arg1 ;
-(BOOL)isDeferredProcessingSupported;
-(void)_handleWillCaptureStillImageNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(BOOL)isHighResolutionCaptureEnabled;
-(void)_updateVirtualDeviceConstituentPhotoDeliverySupportedForSourceDevice:(id)arg1 ;
-(void)_dispatchFailureCallbacks:(unsigned)arg1 forPhotoRequest:(id)arg2 withError:(id)arg3 cleanupRequest:(BOOL)arg4 ;
-(BOOL)isVirtualDeviceFusionSupported;
-(BOOL)isFastCapturePrioritizationEnabled;
-(unsigned long long)maxBracketedCapturePhotoCount;
-(void)dealloc;
-(id)_photoRequestForUniqueID:(long long)arg1 ;
-(BOOL)isLivePhotoCaptureEnabled;
-(void)_updateContentAwareDistortionCorrectionSupportedForDevice:(id)arg1 ;
-(SCD_Struct_AV22)optimizedImageDimensionsForOfflineStabilization;
-(void)_dispatchFailureCallbacksForPhotoSettings:(id)arg1 toDelegate:(id)arg2 withError:(id)arg3 ;
-(void)_handleDidFinishMovieCaptureMovieNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(BOOL)_HEVCAndHEIFAreAvailableForSourceDevice:(id)arg1 ;
@end
