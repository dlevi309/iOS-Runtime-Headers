/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureOutput.h>

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
+(id)new;
+(void)initialize;
+(id)jpegStillImageNSDataRepresentation:(opaqueCMSampleBufferRef)arg1 ;
+(id)jpegStillImageNSDataRepresentationForSurface:(IOSurfaceRef)arg1 size:(unsigned long long)arg2 metadata:(id)arg3 ;
+(unsigned long long)maxStillImageJPEGDataSize;
+(CFDictionaryRef)_copyAttachmentsAndPropagateFaceRegionsToExifAuxDictionaryForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)init;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(BOOL)isStillImageStabilizationSupported;
-(void)setOutputSettings:(NSDictionary *)arg1 ;
-(CGSize)outputSizeForSourceFormat:(id)arg1 ;
-(id)connectionMediaTypes;
-(void)removeConnection:(id)arg1 ;
-(void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(BOOL)squareCropEnabled;
-(unsigned)shutterSound;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)setSquareCropEnabled:(BOOL)arg1 ;
-(void)setShutterSound:(unsigned)arg1 ;
-(void)captureStillImageAsynchronouslyFromConnection:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSDictionary *)outputSettings;
-(BOOL)isHighResolutionStillImageOutputEnabled;
-(CGSize)previewImageSize;
-(unsigned)imageDataFormatType;
-(void)updateSISSupportedForSourceDevice:(id)arg1 ;
-(BOOL)automaticallyEnablesStillImageStabilizationWhenAvailable;
-(void)_updateMaxBracketedStillImageCaptureCountForSourceFormat:(id)arg1 ;
-(void)_updateLensStabilizationDuringBracketedCaptureSupportedForDevice:(id)arg1 ;
-(NSArray *)availableImageDataCVPixelFormatTypes;
-(NSArray *)availableImageDataCodecTypes;
-(void)clearPreparedBracketIfNeeded;
-(BOOL)highResolutionStillImageOutputEnabledChangeCausesCaptureSessionRestart;
-(void)setNoiseReductionEnabled:(BOOL)arg1 ;
-(id)_figCaptureStillImageSettingsForConnection:(id)arg1 ;
-(unsigned long long)maxBracketedCaptureStillImageCount;
-(BOOL)_bracketedSettingsAreValid:(id)arg1 fromConnection:(id)arg2 exceptionReason:(id*)arg3 ;
-(id)_figCaptureStillImageSettingsForBracketedCaptureSettingsArray:(id)arg1 fromConnection:(id)arg2 ;
-(BOOL)_preparedForBracketedCaptureWithSettings:(id)arg1 ;
-(BOOL)isLensStabilizationDuringBracketedCaptureEnabled;
-(void)handleNotificationForRequest:(id)arg1 withPayload:(id)arg2 imageIsEV0:(BOOL*)arg3 ;
-(void)handleNotificationForPrepareRequest:(id)arg1 withPayload:(id)arg2 ;
-(void)setPreviewImageSize:(CGSize)arg1 ;
-(BOOL)isStillImageStabilizationActive;
-(void)setAutomaticallyEnablesStillImageStabilizationWhenAvailable:(BOOL)arg1 ;
-(void)setHighResolutionStillImageOutputEnabled:(BOOL)arg1 ;
-(BOOL)isNoiseReductionEnabled;
-(id)firstActiveConnection;
-(void)handleNotification:(id)arg1 payload:(id)arg2 ;
-(void)captureStillImageSurfaceAsynchronouslyFromConnection:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setLensStabilizationDuringBracketedCaptureEnabled:(BOOL)arg1 ;
-(void)prepareToCaptureStillImageBracketFromConnection:(id)arg1 withSettingsArray:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)captureStillImageBracketAsynchronouslyFromConnection:(id)arg1 withSettingsArray:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isCapturingStillImage;
-(void)_setStillImageStabilizationAutomaticallyEnabled:(BOOL)arg1 ;
-(BOOL)isLensStabilizationDuringBracketedCaptureSupported;
-(void)dealloc;
@end

