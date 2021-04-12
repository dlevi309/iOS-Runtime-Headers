/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
*/

#import <MOVStreamIO/MOVStreamIO-Structs.h>
#import <MOVStreamIO/MOVStreamPreProcessor.h>

@class NSString;

@interface L016Raw14PreProcessor : NSObject <MOVStreamPreProcessor>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CVBufferRef)processedPixelBufferCopyOf:(CVBufferRef)arg1 streamData:(StreamRecordingData*)arg2 error:(id*)arg3 ;
-(const opaqueCMFormatDescriptionRef)formatDescriptionForPixelBuffer:(CVBufferRef)arg1 streamData:(StreamRecordingData*)arg2 ;
-(const opaqueCMFormatDescriptionRef)trackFormatDescriptionFromStreamData:(StreamRecordingData*)arg1 ;
-(unsigned)inputPixelFormatFromStreamData:(StreamRecordingData*)arg1 ;
-(unsigned)encodedPixelFormatFromStreamData:(StreamRecordingData*)arg1 ;
@end

