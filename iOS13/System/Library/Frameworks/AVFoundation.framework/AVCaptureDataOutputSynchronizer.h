/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureVideoDataOutputSampleBufferDelegate.h>
#import <AVFoundation/AVCaptureAudioDataOutputSampleBufferDelegate.h>
#import <AVFoundation/AVCaptureMetadataOutputObjectsDelegate.h>
#import <AVFoundation/AVCaptureDepthDataOutputDelegate.h>
#import <AVFoundation/AVCaptureVisionDataOutputDelegate.h>
#import <AVFoundation/AVCapturePointCloudDataOutputDelegate.h>
#import <AVFoundation/AVCaptureCameraCalibrationDataOutputDelegate.h>

@class AVCaptureDataOutputSynchronizerInternal, NSArray, NSString;

@interface AVCaptureDataOutputSynchronizer : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate, AVCaptureDepthDataOutputDelegate, AVCaptureVisionDataOutputDelegate, AVCapturePointCloudDataOutputDelegate, AVCaptureCameraCalibrationDataOutputDelegate> {

	AVCaptureDataOutputSynchronizerInternal* _internal;

}

@property (retain,readonly) NSArray * dataOutputs; 
@property (nonatomic,readonly) id<AVCaptureDataOutputSynchronizerDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateCallbackQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(id<AVCaptureDataOutputSynchronizerDelegate>)delegate;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)captureOutput:(id)arg1 didDropSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(NSArray *)dataOutputs;
-(void)depthDataOutput:(id)arg1 didOutputDepthData:(id)arg2 timestamp:(SCD_Struct_AV7)arg3 connection:(id)arg4 ;
-(void)depthDataOutput:(id)arg1 didDropDepthData:(id)arg2 timestamp:(SCD_Struct_AV7)arg3 connection:(id)arg4 reason:(long long)arg5 ;
-(NSObject*<OS_dispatch_queue>)delegateCallbackQueue;
-(void)pointCloudDataOutput:(id)arg1 didOutputPointCloudData:(id)arg2 timestamp:(SCD_Struct_AV7)arg3 connection:(id)arg4 ;
-(void)pointCloudDataOutput:(id)arg1 didDropPointCloudData:(id)arg2 timestamp:(SCD_Struct_AV7)arg3 connection:(id)arg4 reason:(long long)arg5 ;
-(void)visionDataOutput:(id)arg1 didOutputVisionDataPixelBuffer:(CVBufferRef)arg2 timestamp:(SCD_Struct_AV7)arg3 connection:(id)arg4 ;
-(void)visionDataOutput:(id)arg1 didDropVisionDataPixelBufferForTimestamp:(SCD_Struct_AV7)arg2 connection:(id)arg3 reason:(long long)arg4 ;
-(void)cameraCalibrationDataOutput:(id)arg1 didOutputCameraCalibrationData:(id)arg2 timestamp:(SCD_Struct_AV7)arg3 connection:(id)arg4 ;
-(void)cameraCalibrationDataOutput:(id)arg1 didDropCameraCalibrationDataAtTimestamp:(SCD_Struct_AV7)arg2 connection:(id)arg3 reason:(long long)arg4 ;
-(void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3 ;
-(int)_computedMasterSynchronizedDataQueueMaxDepthForDataOutputs:(id)arg1 ;
-(void)_assignTimestampAdjustmentQueueToDataOutputStorageWithCommonProvenance;
-(void)_createTimestampHistoryQueuesForMetadataOutputStoragesWithNoTimestampAdjustmentQueues;
-(void)_overrideDataOutputDelegatesForDelegateCallbackQueue:(id)arg1 ;
-(void)_appendSynchronizedData:(id)arg1 forCaptureOutput:(id)arg2 ;
-(void)_dispatchRipenedSynchronizedData;
-(void)_adjustSynchronizedDataTimestamps;
-(SCD_Struct_AV7)_earliestSlaveSynchronizedDataQueueTimestamp;
-(void)_dispatchSynchronizedDataWithTimestamp:(SCD_Struct_AV7)arg1 ;
-(BOOL)_allSlaveSynchronizedDataOutputsContainTimestampEqualToOrGreaterThanMasterTimestamp:(SCD_Struct_AV7)arg1 ;
-(id)initWithDataOutputs:(id)arg1 ;
@end

