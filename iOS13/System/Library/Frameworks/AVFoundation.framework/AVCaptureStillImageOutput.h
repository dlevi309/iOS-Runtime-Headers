/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureStillImageOutputInternal, NSDictionary, NSArray;

@interface AVCaptureStillImageOutput : AVCaptureOutput {

	AVCaptureStillImageOutputInternal* _internal;

}

@property (nonatomic,copy) NSDictionary * outputSettings; 
@property (nonatomic,readonly) NSArray * availableImageDataCVPixelFormatTypes; 
@property (nonatomic,readonly) NSArray * availableImageDataCodecTypes; 
@property (getter=isStillImageStabilizationSupported,nonatomic,readonly) BOOL stillImageStabilizationSupported; 
@property (assign,nonatomic) BOOL automaticallyEnablesStillImageStabilizationWhenAvailable; 
@property (getter=isStillImageStabilizationActive,nonatomic,readonly) BOOL stillImageStabilizationActive; 
@property (assign,getter=isHighResolutionStillImageOutputEnabled,nonatomic) BOOL highResolutionStillImageOutputEnabled; 
@property (getter=isCapturingStillImage,readonly) BOOL capturingStillImage; 
+(void)initialize;
+(id)new;
+(CFDictionaryRef)_copyAttachmentsAndPropagateFaceRegionsToExifAuxDictionaryForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
+(unsigned long long)maxStillImageJPEGDataSize;
+(id)jpegStillImageNSDataRepresentation:(opaqueCMSampleBufferRef)arg1 ;
+(id)jpegStillImageNSDataRepresentationForSurface:(IOSurfaceRef)arg1 size:(unsigned long long)arg2 metadata:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)setOutputSettings:(NSDictionary *)arg1 ;
-(NSDictionary *)outputSettings;
-(void)removeConnection:(id)arg1 ;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)connectionMediaTypes;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(long long)HDRMode;
-(BOOL)squareCropEnabled;
-(unsigned)shutterSound;
-(void)setHDRMode:(long long)arg1 ;
-(void)setSquareCropEnabled:(BOOL)arg1 ;
-(void)setShutterSound:(unsigned)arg1 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(BOOL)isHighResolutionStillImageOutputEnabled;
-(void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(void)_setStillImageStabilizationAutomaticallyEnabled:(BOOL)arg1 ;
-(CGSize)outputSizeForSourceFormat:(id)arg1 ;
-(void)handleNotification:(id)arg1 payload:(id)arg2 ;
-(CGSize)previewImageSize;
-(unsigned)imageDataFormatType;
-(void)updateSISSupportedForSourceDevice:(id)arg1 ;
-(BOOL)automaticallyEnablesStillImageStabilizationWhenAvailable;
-(void)_updateMaxBracketedStillImageCaptureCountForSourceFormat:(id)arg1 ;
-(void)_updateLensStabilizationDuringBracketedCaptureSupportedForDevice:(id)arg1 ;
-(BOOL)isHDRSupported;
-(NSArray *)availableImageDataCVPixelFormatTypes;
-(NSArray *)availableImageDataCodecTypes;
-(void)clearPreparedBracketIfNeeded;
-(BOOL)isRawCaptureEnabled;
-(BOOL)isStillImageStabilizationSupported;
-(BOOL)highResolutionStillImageOutputEnabledChangeCausesCaptureSessionRestart;
-(BOOL)isRawCaptureSupported;
-(void)setNoiseReductionEnabled:(BOOL)arg1 ;
-(id)_figCaptureStillImageSettingsForConnection:(id)arg1 ;
-(BOOL)isLensStabilizationDuringBracketedCaptureSupported;
-(unsigned long long)maxBracketedCaptureStillImageCount;
-(BOOL)_bracketedSettingsAreValid:(id)arg1 fromConnection:(id)arg2 exceptionReason:(id*)arg3 ;
-(id)_figCaptureStillImageSettingsForBracketedCaptureSettingsArray:(id)arg1 fromConnection:(id)arg2 ;
-(BOOL)_preparedForBracketedCaptureWithSettings:(id)arg1 ;
-(BOOL)isLensStabilizationDuringBracketedCaptureEnabled;
-(void)handleNotificationForRequest:(id)arg1 withPayload:(id)arg2 imageIsEV0:(BOOL*)arg3 ;
-(void)handleNotificationForPrepareRequest:(id)arg1 withPayload:(id)arg2 ;
-(void)setPreviewImageSize:(CGSize)arg1 ;
-(BOOL)isEV0CaptureEnabled;
-(void)setEV0CaptureEnabled:(BOOL)arg1 ;
-(BOOL)isStillImageStabilizationActive;
-(void)setAutomaticallyEnablesStillImageStabilizationWhenAvailable:(BOOL)arg1 ;
-(void)setHighResolutionStillImageOutputEnabled:(BOOL)arg1 ;
-(BOOL)isNoiseReductionEnabled;
-(void)setRawCaptureEnabled:(BOOL)arg1 ;
-(BOOL)suspendsVideoProcessingDuringStillImageCapture;
-(void)setSuspendsVideoProcessingDuringStillImageCapture:(BOOL)arg1 ;
-(BOOL)resumeVideoProcessing;
-(BOOL)isCapturingStillImage;
-(id)firstActiveConnection;
-(void)captureStillImageAsynchronouslyFromConnection:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)captureStillImageSurfaceAsynchronouslyFromConnection:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setLensStabilizationDuringBracketedCaptureEnabled:(BOOL)arg1 ;
-(void)prepareToCaptureStillImageBracketFromConnection:(id)arg1 withSettingsArray:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)captureStillImageBracketAsynchronouslyFromConnection:(id)arg1 withSettingsArray:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

