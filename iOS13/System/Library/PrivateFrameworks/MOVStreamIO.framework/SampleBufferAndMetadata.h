/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
*/


#import <MOVStreamIO/MOVStreamIO-Structs.h>
@class AVTimedMetadataGroup;

@interface SampleBufferAndMetadata : NSObject {

	opaqueCMSampleBufferRef _sampleBuffer;
	AVTimedMetadataGroup* _metadata;

}

@property (assign) opaqueCMSampleBufferRef sampleBuffer;              //@synthesize sampleBuffer=_sampleBuffer - In the implementation block
@property (retain) AVTimedMetadataGroup * metadata;                   //@synthesize metadata=_metadata - In the implementation block
-(void)setMetadata:(AVTimedMetadataGroup *)arg1 ;
-(AVTimedMetadataGroup *)metadata;
-(opaqueCMSampleBufferRef)sampleBuffer;
-(void)setSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

