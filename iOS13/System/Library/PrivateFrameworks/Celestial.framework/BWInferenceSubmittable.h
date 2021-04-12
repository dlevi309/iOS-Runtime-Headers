/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol BWInferenceSubmittable <BWInferenceJobProvider>
@required
-(int)prepareForSubmissionWithWorkQueue:(id)arg1;
-(int)submitForSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingStorage:(id)arg2 withSubmissionTime:(SCD_Struct_BW2)arg3 workQueue:(id)arg4 completionHandler:(/*^block*/id)arg5;

@end

