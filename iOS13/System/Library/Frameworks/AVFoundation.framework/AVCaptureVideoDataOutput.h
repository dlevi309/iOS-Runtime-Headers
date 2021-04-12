/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureOutput.h>
#import <AVFoundation/AVCaptureDataOutputDelegateOverride.h>

@class AVCaptureVideoDataOutputInternal, NSDictionary, NSArray, NSString;

@interface AVCaptureVideoDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {

	AVCaptureVideoDataOutputInternal* _internal;

}

@property (nonatomic,readonly) id<AVCaptureVideoDataOutputSampleBufferDelegate> sampleBufferDelegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sampleBufferCallbackQueue; 
@property (nonatomic,copy) NSDictionary * videoSettings; 
@property (nonatomic,readonly) NSArray * availableVideoCVPixelFormatTypes; 
@property (nonatomic,readonly) NSArray * availableVideoCodecTypes; 
@property (assign,nonatomic) SCD_Struct_AV7 minFrameDuration; 
@property (assign,nonatomic) BOOL alwaysDiscardsLateVideoFrames; 
@property (assign,nonatomic) BOOL automaticallyConfiguresOutputBufferDimensions; 
@property (assign,nonatomic) BOOL deliversPreviewSizedOutputBuffers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id delegateOverride; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateOverrideCallbackQueue; 
+(void)initialize;
+(id)new;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(int)outputFormat;
-(void)removeConnection:(id)arg1 ;
-(SCD_Struct_AV7)minFrameDuration;
-(void)setVideoSettings:(NSDictionary *)arg1 ;
-(void)setAlwaysDiscardsLateVideoFrames:(BOOL)arg1 ;
-(void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2 ;
-(id)delegateOverride;
-(NSObject*<OS_dispatch_queue>)delegateOverrideCallbackQueue;
-(NSDictionary *)videoSettings;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)connectionMediaTypes;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(id)supportedAssetWriterOutputFileTypes;
-(void)_updateRemoteQueue:(remoteQueueReceiverOpaqueRef)arg1 ;
-(void)_handleRemoteQueueOperation:(FigRemoteOperation*)arg1 ;
-(void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2 ;
-(id<AVCaptureVideoDataOutputSampleBufferDelegate>)sampleBufferDelegate;
-(NSObject*<OS_dispatch_queue>)sampleBufferCallbackQueue;
-(BOOL)updateVideoSettingsForConnection:(id)arg1 ;
-(BOOL)alwaysDiscardsLateVideoFrames;
-(BOOL)deliversPreviewSizedOutputBuffers;
-(void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(NSArray *)availableVideoCodecTypes;
-(CGSize)outputSizeForSourceFormat:(id)arg1 ;
-(BOOL)hasRequiredOutputFormatForConnection:(id)arg1 ;
-(BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)arg1 ;
-(BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)arg1 ;
-(unsigned)requiredOutputFormatForConnection:(id)arg1 ;
-(BOOL)automaticallyConfiguresOutputBufferDimensions;
-(NSArray *)availableVideoCVPixelFormatTypes;
-(void)_updateDeliversPreviewSizedOutputBuffersForConnection:(id)arg1 sessionPreset:(id)arg2 ;
-(id)vettedVideoSettingsForSettingsDictionary:(id)arg1 connection:(id)arg2 ;
-(id)outputScalingModeForSourceFormat:(id)arg1 ;
-(id)supportedVideoSettingsKeys;
-(id)fullyPopulatedVideoSettingsForSettingsDictionary:(id)arg1 connection:(id)arg2 ;
-(void)_setMinFrameDuration:(SCD_Struct_AV7)arg1 ;
-(void)_updateAvailableVideoCVPixelFormatTypesForConnection:(id)arg1 ;
-(void)_updateLocalQueue:(localQueueOpaqueRef)arg1 ;
-(void)_processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_handleLocalQueueMessage:(FigLocalQueueMessage*)arg1 ;
-(BOOL)isVideoSettingsDimensionsOverrideEnabled;
-(void)setVideoSettingsDimensionsOverrideEnabled:(BOOL)arg1 ;
-(id)recommendedVideoSettingsForAssetWriterWithOutputFileType:(id)arg1 ;
-(id)availableVideoCodecTypesForAssetWriterWithOutputFileType:(id)arg1 ;
-(id)recommendedVideoSettingsForVideoCodecType:(id)arg1 assetWriterOutputFileType:(id)arg2 ;
-(void)setMinFrameDuration:(SCD_Struct_AV7)arg1 ;
-(void)setAutomaticallyConfiguresOutputBufferDimensions:(BOOL)arg1 ;
-(void)setDeliversPreviewSizedOutputBuffers:(BOOL)arg1 ;
@end

