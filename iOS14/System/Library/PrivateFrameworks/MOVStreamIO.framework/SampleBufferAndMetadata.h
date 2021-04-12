/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setMetadata:(AVTimedMetadataGroup *)arg1 ;
-(opaqueCMSampleBufferRef)sampleBuffer;
-(AVTimedMetadataGroup *)metadata;
@end

