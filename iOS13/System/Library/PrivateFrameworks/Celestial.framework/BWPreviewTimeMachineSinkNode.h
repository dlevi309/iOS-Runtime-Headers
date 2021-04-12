/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSinkNode.h>
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
	SCD_Struct_BW2 _earliestAllowedPTS;
	SCD_Struct_BW11 _requestedSuspendPTSRange;
	/*^block*/id _suspendCompletionHandler;
	FigCaptureImageMotionDetector* _motionDetector;
	BOOL _faceMotionDetectionEnabled;
	BOOL _haveFrameRotationAndMirror;
	int _frameRotationDegrees;
	BOOL _frameMirrored;

}

@property (assign) SCD_Struct_BW2 earliestAllowedPTS; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) SCD_Struct_BW10 frameDimensions; 
+(void)initialize;
-(void)dealloc;
-(void)resume;
-(void)_setupStateMachine;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)_trimToTimeRange:(SCD_Struct_BW11)arg1 ;
-(BOOL)_computeMotionDetectionFaceRectForSampleBuffers:(id)arg1 faceMotionRectOut:(CGRect*)arg2 ;
-(SCD_Struct_BW10)frameDimensions;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)detectMotionOnStoredFramesWithSmartCameraDiagnostics:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)suspendWithPTSRange:(SCD_Struct_BW11)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithCaptureDevice:(id)arg1 processingQueuePriority:(unsigned)arg2 timeMachineCapacity:(int)arg3 sinkID:(id)arg4 ;
-(void)setEarliestAllowedPTS:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)earliestAllowedPTS;
@end

