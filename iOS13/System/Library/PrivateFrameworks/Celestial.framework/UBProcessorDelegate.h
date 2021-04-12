/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol UBProcessorDelegate <NSObject>
@optional
-(void)processor:(id)arg1 outputReadyWithFrameType:(int)arg2 outputPixelBuffer:(CVBufferRef)arg3 outputMetadata:(id)arg4 error:(int)arg5;
-(id)processorGetInferenceResults:(id)arg1;
-(void)processor:(id)arg1 didSelectFusionMode:(int)arg2;

@end

