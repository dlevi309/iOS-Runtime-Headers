/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCaptureConnectionInternal, NSArray, AVCaptureOutput, AVCaptureVideoPreviewLayer;

@interface AVCaptureConnection : NSObject {

	AVCaptureConnectionInternal* _internal;
	BOOL _supportsVideoFieldMode;
	long long _videoFieldMode;

}

@property (nonatomic,readonly) NSArray * inputPorts; 
@property (nonatomic,readonly) AVCaptureOutput * output; 
@property (nonatomic,readonly) AVCaptureVideoPreviewLayer * videoPreviewLayer; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (nonatomic,readonly) NSArray * audioChannels; 
@property (getter=isVideoMirroringSupported,nonatomic,readonly) BOOL supportsVideoMirroring; 
@property (assign,getter=isVideoMirrored,nonatomic) BOOL videoMirrored; 
@property (assign,nonatomic) BOOL automaticallyAdjustsVideoMirroring; 
@property (getter=isVideoOrientationSupported,nonatomic,readonly) BOOL supportsVideoOrientation; 
@property (assign,nonatomic) long long videoOrientation; 
@property (getter=isVideoFieldModeSupported,nonatomic,readonly) BOOL supportsVideoFieldMode;                                             //@synthesize supportsVideoFieldMode=_supportsVideoFieldMode - In the implementation block
@property (assign,nonatomic) long long videoFieldMode;                                                                                   //@synthesize videoFieldMode=_videoFieldMode - In the implementation block
@property (getter=isVideoMinFrameDurationSupported,nonatomic,readonly) BOOL supportsVideoMinFrameDuration; 
@property (assign,nonatomic) SCD_Struct_AV0 videoMinFrameDuration; 
@property (getter=isVideoMaxFrameDurationSupported,nonatomic,readonly) BOOL supportsVideoMaxFrameDuration; 
@property (assign,nonatomic) SCD_Struct_AV0 videoMaxFrameDuration; 
@property (nonatomic,readonly) double videoMaxScaleAndCropFactor; 
@property (assign,nonatomic) double videoScaleAndCropFactor; 
@property (assign,nonatomic) long long preferredVideoStabilizationMode; 
@property (nonatomic,readonly) long long activeVideoStabilizationMode; 
@property (getter=isVideoStabilizationSupported,nonatomic,readonly) BOOL supportsVideoStabilization; 
@property (getter=isVideoStabilizationEnabled,nonatomic,readonly) BOOL videoStabilizationEnabled; 
@property (assign,nonatomic) BOOL enablesVideoStabilizationWhenAvailable; 
@property (getter=isCameraIntrinsicMatrixDeliverySupported,nonatomic,readonly) BOOL cameraIntrinsicMatrixDeliverySupported; 
@property (assign,getter=isCameraIntrinsicMatrixDeliveryEnabled,nonatomic) BOOL cameraIntrinsicMatrixDeliveryEnabled; 
+(void)initialize;
+(id)connectionWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2 ;
+(id)connectionWithInputPorts:(id)arg1 output:(id)arg2 ;
-(AVCaptureVideoPreviewLayer *)videoPreviewLayer;
-(BOOL)isVideoMirroringSupported;
-(void)_updateMaxScaleAndCropFactorForFormat:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setVideoMirroringMethodForMovieRecording:(long long)arg1 ;
-(long long)mappedVideoOrientation;
-(void)bumpChangeSeed;
-(float)getAvgAudioLevelForChannel:(id)arg1 ;
-(SCD_Struct_AV0)videoMaxFrameDuration;
-(id)mediaType;
-(void)setVideoMirrored:(BOOL)arg1 ;
-(double)videoMaxScaleAndCropFactor;
-(BOOL)isCameraIntrinsicMatrixDeliveryEnabled;
-(int)changeSeed;
-(BOOL)isVideoStabilizationEnabled;
-(void)setupInternalStorage;
-(long long)videoMirroringMethodForMovieRecording;
-(id)sourceDevice;
-(long long)videoOrientation;
-(void)teardownObservers;
-(void)_setVideoMirrored:(BOOL)arg1 ;
-(AVCaptureOutput *)output;
-(NSArray *)audioChannels;
-(void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(long long)videoFieldMode;
-(void)setPreferredVideoStabilizationMode:(long long)arg1 ;
-(BOOL)isActive;
-(NSArray *)inputPorts;
-(void)setDebugMetadataSidecarFileEnabled:(BOOL)arg1 ;
-(id)supportedVideoMirroringMethodsForMovieRecording;
-(void)_setVideoMinFrameDuration:(SCD_Struct_AV0)arg1 ;
-(unsigned)clientRetainedBufferCount;
-(id)session;
-(BOOL)isLivePhotoMetadataWritingSupported;
-(long long)_resolveActiveVideoStabilizationMode:(long long)arg1 format:(id)arg2 ;
-(void)_updateActiveVideoStabilizationMode:(long long)arg1 bumpChangeSeed:(BOOL)arg2 ;
-(SCD_Struct_AV0)_videoMinFrameDuration;
-(void)inputPortFormatDescriptionChanged:(id)arg1 ;
-(BOOL)isVideoFieldModeSupported;
-(void)updateAudioChannelsArray;
-(void)setVideoScaleAndCropFactor:(double)arg1 ;
-(void)setAutomaticallyAdjustsVideoMirroring:(BOOL)arg1 ;
-(id)description;
-(BOOL)isVideoMaxFrameDurationSupported;
-(void)setVideoRetainedBufferCountHint:(int)arg1 ;
-(long long)activeVideoStabilizationMode;
-(BOOL)isVideoStabilizationSupported;
-(BOOL)sourcesFromFrontFacingCamera;
-(BOOL)livePhotoMetadataWritingEnabled;
-(void)setVideoOrientation:(long long)arg1 ;
-(void)setEnablesVideoStabilizationWhenAvailable:(BOOL)arg1 ;
-(SCD_Struct_AV0)videoMinFrameDuration;
-(BOOL)isDebugMetadataSidecarFileEnabled;
-(void)_updateSupportedVideoMirroringMethodsForMovieRecording;
-(void)_updatePropertiesForFormat:(id)arg1 ;
-(BOOL)isVideoMinFrameDurationSupported;
-(void)setupObservers;
-(void)setVideoFieldMode:(long long)arg1 ;
-(BOOL)isTrulyDisabled;
-(void)updateAudioLevelsArray;
-(void)_setActive:(BOOL)arg1 ;
-(float)getPeakAudioLevelForChannel:(id)arg1 ;
-(id)initWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2 ;
-(BOOL)isEnabled;
-(void)setLivePhotoMetadataWritingEnabled:(BOOL)arg1 ;
-(int)videoRetainedBufferCountHint;
-(long long)preferredVideoStabilizationMode;
-(BOOL)isCameraIntrinsicMatrixDeliverySupported;
-(SCD_Struct_AV0)_videoMaxFrameDuration;
-(BOOL)_updateCameraIntrinsicMatrixDeliverySupported;
-(BOOL)isVideoMaxFrameDurationSet;
-(BOOL)isVideoMinFrameDurationSet;
-(void)setCameraIntrinsicMatrixDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)isVideoMirrored;
-(BOOL)isVideoOrientationSupported;
-(id)initWithInputPorts:(id)arg1 output:(id)arg2 ;
-(BOOL)isLive;
-(BOOL)automaticallyAdjustsVideoMirroring;
-(BOOL)enablesVideoStabilizationWhenAvailable;
-(double)videoScaleAndCropFactor;
-(void)setVideoMinFrameDuration:(SCD_Struct_AV0)arg1 ;
-(id)figCaptureConnectionConfigurationForSessionPreset:(id)arg1 allConnections:(id)arg2 ;
-(void)dealloc;
-(BOOL)isVideoRetainedBufferCountHintSupported;
-(void)setVideoMaxFrameDuration:(SCD_Struct_AV0)arg1 ;
@end

