/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol BWInferenceExtractable <BWInferenceJobProvider>
@required
-(int)extractFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingVideoRequirements:(id)arg2 metadataRequirements:(id)arg3 toStorage:(id)arg4;
-(int)extractFromStorage:(id)arg1 usingVideoRequirements:(id)arg2 metadataRequirements:(id)arg3 toSampleBuffer:(opaqueCMSampleBufferRef)arg4;

@end

