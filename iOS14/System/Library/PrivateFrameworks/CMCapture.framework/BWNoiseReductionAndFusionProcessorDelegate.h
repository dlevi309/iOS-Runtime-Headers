/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol BWNoiseReductionAndFusionProcessorDelegate <BWStillImageProcessorControllerDelegate>
@optional
-(void)processorController:(id)arg1 didSelectNewReferenceFrameWithPTS:(SCD_Struct_BW8)arg2 transform:(id)arg3 processorInput:(id)arg4;
-(void)processorController:(id)arg1 didSelectLowLightReferenceFrame:(opaqueCMSampleBufferRef)arg2 processorInput:(id)arg3;

@required
-(void)processorController:(id)arg1 didSelectFusionMode:(int)arg2 processorInput:(id)arg3;
-(id)processorController:(id)arg1 newSemanticRenderingInputForProcessorInput:(id)arg2;

@end

