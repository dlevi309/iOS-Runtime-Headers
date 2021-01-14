/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureOutput.h>
#import <AVFCapture/AVCaptureDataOutputDelegateOverride.h>

@class AVCaptureVisionDataOutputInternal, NSString;

@interface AVCaptureVisionDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {

	AVCaptureVisionDataOutputInternal* _internal;

}

@property (nonatomic,readonly) id<AVCaptureVisionDataOutputDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateCallbackQueue; 
@property (assign,nonatomic) SCD_Struct_AV0 minFrameDuration; 
@property (assign,nonatomic) SCD_Struct_AV0 minBurstFrameDuration; 
@property (assign,nonatomic) SCD_Struct_AV0 maxBurstDuration; 
@property (assign,nonatomic) unsigned long long gaussianPyramidOctavesCount; 
@property (assign,nonatomic) float gaussianPyramidBaseOctaveDownscalingFactor; 
@property (assign,nonatomic) unsigned long long maxKeypointsCount; 
@property (assign,getter=isFeatureBinningEnabled,nonatomic) BOOL featureBinningEnabled; 
@property (assign,getter=isFeatureOrientationAssignmentEnabled,nonatomic) BOOL featureOrientationAssignmentEnabled; 
@property (nonatomic,readonly) id delegateOverride; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateOverrideCallbackQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(void)initialize;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)delegateCallbackQueue;
-(id)init;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id<AVCaptureVisionDataOutputDelegate>)delegate;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(id)connectionMediaTypes;
-(void)removeConnection:(id)arg1 ;
-(void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(void)_handleRemoteQueueOperation:(FigRemoteOperation*)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2 ;
-(SCD_Struct_AV0)minFrameDuration;
-(id)delegateOverride;
-(void)triggerBurst;
-(NSObject*<OS_dispatch_queue>)delegateOverrideCallbackQueue;
-(void)_updateRemoteQueue:(remoteQueueReceiverOpaqueRef)arg1 ;
-(void)setMinFrameDuration:(SCD_Struct_AV0)arg1 ;
-(void)_processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(SCD_Struct_AV0)minBurstFrameDuration;
-(SCD_Struct_AV0)maxBurstDuration;
-(void)setMaxBurstDuration:(SCD_Struct_AV0)arg1 ;
-(unsigned long long)gaussianPyramidOctavesCount;
-(void)setGaussianPyramidOctavesCount:(unsigned long long)arg1 ;
-(unsigned long long)maxKeypointsCount;
-(float)gaussianPyramidBaseOctaveDownscalingFactor;
-(void)setGaussianPyramidBaseOctaveDownscalingFactor:(float)arg1 ;
-(void)setMaxKeypointsCount:(unsigned long long)arg1 ;
-(float)keypointDetectionThreshold;
-(void)setKeypointDetectionThreshold:(float)arg1 ;
-(BOOL)isFeatureBinningEnabled;
-(void)setFeatureBinningEnabled:(BOOL)arg1 ;
-(BOOL)isFeatureOrientationAssignmentEnabled;
-(void)setFeatureOrientationAssignmentEnabled:(BOOL)arg1 ;
-(void)_initializeClientVisiblePropertiesForSourceDevice:(id)arg1 ;
-(void)setMinBurstFrameDuration:(SCD_Struct_AV0)arg1 ;
-(void)_handleLocalQueueMessage:(FigLocalQueueMessage*)arg1 ;
-(void)_updateLocalQueue:(localQueueOpaqueRef)arg1 ;
-(void)setDelegate:(id)arg1 callbackQueue:(id)arg2 ;
-(BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)arg1 ;
-(BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)arg1 ;
-(void)dealloc;
@end

