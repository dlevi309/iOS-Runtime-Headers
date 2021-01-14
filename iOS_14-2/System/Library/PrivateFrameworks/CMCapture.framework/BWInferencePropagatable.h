/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol BWInferencePropagatable <BWInferenceJobProvider>
@property (nonatomic,readonly) int type; 
@required
-(void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 propagationSampleBuffer:(opaqueCMSampleBufferRef)arg3 withExecutionTime:(SCD_Struct_BW8)arg4;
-(int)type;

@end

