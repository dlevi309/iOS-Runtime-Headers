/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureOutput.h>
#import <AVFCapture/AVCaptureDataOutputDelegateOverride.h>

@class AVCaptureVideoDataOutputInternal, NSDictionary, NSArray, NSString;

@interface AVCaptureVideoDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {

	AVCaptureVideoDataOutputInternal* _internal;

}

@property (nonatomic,readonly) id<AVCaptureVideoDataOutputSampleBufferDelegate> sampleBufferDelegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sampleBufferCallbackQueue; 
@property (nonatomic,copy) NSDictionary * videoSettings; 
@property (nonatomic,readonly) NSArray * availableVideoCVPixelFormatTypes; 
@property (nonatomic,readonly) NSArray * availableVideoCodecTypes; 
@property (assign,nonatomic) SCD_Struct_AV0 minFrameDuration; 
@property (assign,nonatomic) BOOL alwaysDiscardsLateVideoFrames; 
@property (assign,nonatomic) BOOL automaticallyConfiguresOutputBufferDimensions; 
@property (assign,nonatomic) BOOL deliversPreviewSizedOutputBuffers; 
@property (nonatomic,readonly) id delegateOverride; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateOverrideCallbackQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(void)initialize;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)videoSettings;
-(id)init;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(BOOL)hasRequiredOutputFormatForConnection:(id)arg1 ;
-(CGSize)outputSizeForSourceFormat:(id)arg1 ;
-(unsigned)requiredOutputFormatForConnection:(id)arg1 ;
-(BOOL)updateVideoSettingsForConnection:(id)arg1 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(id)connectionMediaTypes;
-(void)removeConnection:(id)arg1 ;
-(void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(void)_handleRemoteQueueOperation:(FigRemoteOperation*)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2 ;
-(SCD_Struct_AV0)minFrameDuration;
-(id)delegateOverride;
-(NSObject*<OS_dispatch_queue>)delegateOverrideCallbackQueue;
-(BOOL)alwaysDiscardsLateVideoFrames;
-(BOOL)automaticallyConfiguresOutputBufferDimensions;
-(BOOL)deliversPreviewSizedOutputBuffers;
-(NSArray *)availableVideoCVPixelFormatTypes;
-(void)_updateDeliversPreviewSizedOutputBuffersForConnection:(id)arg1 sessionPreset:(id)arg2 ;
-(void)_updateRemoteQueue:(remoteQueueReceiverOpaqueRef)arg1 ;
-(id)vettedVideoSettingsForSettingsDictionary:(id)arg1 connection:(id)arg2 ;
-(id)outputScalingModeForSourceFormat:(id)arg1 ;
-(id)supportedVideoSettingsKeys;
-(id)fullyPopulatedVideoSettingsForSettingsDictionary:(id)arg1 connection:(id)arg2 ;
-(NSArray *)availableVideoCodecTypes;
-(id)supportedAssetWriterOutputFileTypes;
-(void)_setMinFrameDuration:(SCD_Struct_AV0)arg1 ;
-(void)_updateAvailableVideoCVPixelFormatTypesForConnection:(id)arg1 ;
-(id<AVCaptureVideoDataOutputSampleBufferDelegate>)sampleBufferDelegate;
-(NSObject*<OS_dispatch_queue>)sampleBufferCallbackQueue;
-(BOOL)isVideoSettingsDimensionsOverrideEnabled;
-(void)setVideoSettingsDimensionsOverrideEnabled:(BOOL)arg1 ;
-(id)recommendedVideoSettingsForAssetWriterWithOutputFileType:(id)arg1 ;
-(id)availableVideoCodecTypesForAssetWriterWithOutputFileType:(id)arg1 ;
-(id)recommendedVideoSettingsForVideoCodecType:(id)arg1 assetWriterOutputFileType:(id)arg2 ;
-(void)setMinFrameDuration:(SCD_Struct_AV0)arg1 ;
-(void)_processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setAutomaticallyConfiguresOutputBufferDimensions:(BOOL)arg1 ;
-(void)setDeliversPreviewSizedOutputBuffers:(BOOL)arg1 ;
-(void)setVideoSettings:(NSDictionary *)arg1 ;
-(void)setAlwaysDiscardsLateVideoFrames:(BOOL)arg1 ;
-(void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2 ;
-(void)_handleLocalQueueMessage:(FigLocalQueueMessage*)arg1 ;
-(void)_updateLocalQueue:(localQueueOpaqueRef)arg1 ;
-(BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)arg1 ;
-(BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)arg1 ;
-(void)dealloc;
@end

