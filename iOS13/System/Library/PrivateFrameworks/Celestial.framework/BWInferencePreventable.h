/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol BWInferencePreventable <BWInferenceJobProvider>
@property (nonatomic,readonly) BOOL mustExecuteWhenAllowed; 
@required
-(id)preventionReasonWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 executionTime:(SCD_Struct_BW2)arg2;
-(BOOL)mustExecuteWhenAllowed;

@end

