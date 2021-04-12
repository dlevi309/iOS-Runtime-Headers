/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureOutput.h>
#import <AVFoundation/AVCaptureDataOutputDelegateOverride.h>

@class AVCaptureVisionDataOutputInternal, NSString;

@interface AVCaptureVisionDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {

	AVCaptureVisionDataOutputInternal* _internal;

}

@property (nonatomic,readonly) id<AVCaptureVisionDataOutputDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateCallbackQueue; 
@property (assign,nonatomic) SCD_Struct_AV7 minFrameDuration; 
@property (assign,nonatomic) SCD_Struct_AV7 minBurstFrameDuration; 
@property (assign,nonatomic) SCD_Struct_AV7 maxBurstDuration; 
@property (assign,nonatomic) unsigned long long gaussianPyramidOctavesCount; 
@property (assign,nonatomic) float gaussianPyramidBaseOctaveDownscalingFactor; 
@property (assign,nonatomic) unsigned long long maxKeypointsCount; 
@property (assign,getter=isFeatureBinningEnabled,nonatomic) BOOL featureBinningEnabled; 
@property (assign,getter=isFeatureOrientationAssignmentEnabled,nonatomic) BOOL featureOrientationAssignmentEnabled; 
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
-(id<AVCaptureVisionDataOutputDelegate>)delegate;
-(void)removeConnection:(id)arg1 ;
-(SCD_Struct_AV7)minFrameDuration;
-(id)delegateOverride;
-(NSObject*<OS_dispatch_queue>)delegateOverrideCallbackQueue;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)connectionMediaTypes;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(void)_updateRemoteQueue:(remoteQueueReceiverOpaqueRef)arg1 ;
-(void)_handleRemoteQueueOperation:(FigRemoteOperation*)arg1 ;
-(void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2 ;
-(SCD_Struct_AV7)minBurstFrameDuration;
-(SCD_Struct_AV7)maxBurstDuration;
-(void)setMaxBurstDuration:(SCD_Struct_AV7)arg1 ;
-(unsigned long long)gaussianPyramidOctavesCount;
-(void)setGaussianPyramidOctavesCount:(unsigned long long)arg1 ;
-(float)gaussianPyramidBaseOctaveDownscalingFactor;
-(void)setGaussianPyramidBaseOctaveDownscalingFactor:(float)arg1 ;
-(unsigned long long)maxKeypointsCount;
-(void)setMaxKeypointsCount:(unsigned long long)arg1 ;
-(float)keypointDetectionThreshold;
-(void)setKeypointDetectionThreshold:(float)arg1 ;
-(BOOL)isFeatureBinningEnabled;
-(void)setFeatureBinningEnabled:(BOOL)arg1 ;
-(BOOL)isFeatureOrientationAssignmentEnabled;
-(void)setFeatureOrientationAssignmentEnabled:(BOOL)arg1 ;
-(void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)arg1 ;
-(BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)arg1 ;
-(void)_updateLocalQueue:(localQueueOpaqueRef)arg1 ;
-(void)_processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_handleLocalQueueMessage:(FigLocalQueueMessage*)arg1 ;
-(void)setMinFrameDuration:(SCD_Struct_AV7)arg1 ;
-(void)setDelegate:(id)arg1 callbackQueue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)delegateCallbackQueue;
-(void)_initializeClientVisiblePropertiesForSourceDevice:(id)arg1 ;
-(void)setMinBurstFrameDuration:(SCD_Struct_AV7)arg1 ;
-(void)triggerBurst;
@end

