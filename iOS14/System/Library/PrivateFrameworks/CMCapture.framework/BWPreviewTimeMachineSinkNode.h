/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWSinkNode.h>
#import <libobjc.A.dylib/BWPreviewTimeMachineProcessor.h>

@protocol OS_dispatch_queue;
@class BWFigVideoCaptureDevice, NSObject, NSMutableArray, FigStateMachine, FigCaptureImageMotionDetector, NSString;

@interface BWPreviewTimeMachineSinkNode : BWSinkNode <BWPreviewTimeMachineProcessor> {

	BWFigVideoCaptureDevice* _device;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSMutableArray* _timeMachineFrames;
	os_unfair_lock_s _timeMachineLock;
	int _timeMachineCapacity;
	FigStateMachine* _stateMachine;
	SCD_Struct_BW8 _earliestAllowedPTS;
	SCD_Struct_BW39 _requestedSuspendPTSRange;
	/*^block*/id _suspendCompletionHandler;
	FigCaptureImageMotionDetector* _motionDetector;
	BOOL _faceMotionDetectionEnabled;
	BOOL _smartCameraMotionDetectionEnabled;
	BOOL _haveFrameRotationAndMirror;
	int _frameRotationDegrees;
	BOOL _frameMirrored;

}

@property (assign) SCD_Struct_BW8 earliestAllowedPTS; 
@property (readonly) SCD_Struct_BW2 frameDimensions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)_trimToTimeRange:(SCD_Struct_BW39)arg1 ;
-(BOOL)_computeMotionDetectionFaceRectForSampleBuffers:(id)arg1 faceMotionRectOut:(CGRect*)arg2 ;
-(SCD_Struct_BW2)frameDimensions;
-(void)detectMotionOnStoredFramesWithSmartCameraDiagnostics:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)suspendWithPTSRange:(SCD_Struct_BW39)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithCaptureDevice:(id)arg1 processingQueuePriority:(unsigned)arg2 timeMachineCapacity:(int)arg3 smartCameraMotionDetectionEnabled:(BOOL)arg4 sinkID:(id)arg5 ;
-(SCD_Struct_BW8)earliestAllowedPTS;
-(void)setEarliestAllowedPTS:(SCD_Struct_BW8)arg1 ;
-(void)_setupStateMachine;
-(void)resume;
-(void)dealloc;
@end

