/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
*/


@protocol MOVStreamPreProcessor <NSObject>
@required
-(CVBufferRef)processedPixelBufferCopyOf:(CVBufferRef)arg1 streamData:(StreamRecordingData*)arg2 error:(id*)arg3;
-(const opaqueCMFormatDescriptionRef)formatDescriptionForPixelBuffer:(CVBufferRef)arg1 streamData:(StreamRecordingData*)arg2;
-(const opaqueCMFormatDescriptionRef)trackFormatDescriptionFromStreamData:(StreamRecordingData*)arg1;
-(unsigned)inputPixelFormatFromStreamData:(StreamRecordingData*)arg1;
-(unsigned)encodedPixelFormatFromStreamData:(StreamRecordingData*)arg1;

@end

