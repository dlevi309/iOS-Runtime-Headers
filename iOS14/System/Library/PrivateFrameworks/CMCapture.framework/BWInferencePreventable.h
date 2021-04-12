/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol BWInferencePreventable <BWInferenceJobProvider>
@property (nonatomic,readonly) BOOL mustExecuteWhenAllowed; 
@required
-(id)preventionReasonWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 executionTime:(SCD_Struct_BW8)arg2;
-(BOOL)mustExecuteWhenAllowed;

@end

