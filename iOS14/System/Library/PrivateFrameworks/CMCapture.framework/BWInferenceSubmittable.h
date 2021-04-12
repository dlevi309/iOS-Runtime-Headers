/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol BWInferenceSubmittable <BWInferenceJobProvider>
@required
-(int)submitForSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingStorage:(id)arg2 withSubmissionTime:(SCD_Struct_BW8)arg3 workQueue:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(int)prepareForSubmissionWithWorkQueue:(id)arg1;

@end

