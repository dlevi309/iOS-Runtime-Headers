/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol NRFProcessorDelegate <NSObject>
@optional
-(void)processor:(id)arg1 outputReadyWithFrameType:(int)arg2 outputPixelBuffer:(CVBufferRef)arg3 outputMetadata:(id)arg4 error:(int)arg5;
-(id)processorGetInferenceResults:(id)arg1;
-(void)processor:(id)arg1 didSelectFusionMode:(int)arg2;
-(void)processor:(id)arg1 didEnqueueProcessingForSurfaceID:(unsigned)arg2;
-(void)processor:(id)arg1 didCompleteProcessingForSurfaceID:(unsigned)arg2;
-(void)processor:(id)arg1 didSelectProgressiveFusionReferenceFrameIndex:(int)arg2;
-(void)didFinishProcessingWithCompletionStatus:(id)arg1;

@end

