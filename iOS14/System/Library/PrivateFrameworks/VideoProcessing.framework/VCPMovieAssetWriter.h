/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@protocol OS_dispatch_semaphore;
#import <VideoProcessing/VideoProcessing-Structs.h>
@class AVAsset, AVAssetTrack, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputMetadataAdaptor, NSMutableArray, NSObject;

@interface VCPMovieAssetWriter : NSObject {

	AVAsset* _asset;
	AVAssetTrack* _track;
	AVAssetWriter* _writer;
	AVAssetWriterInput* _input;
	AVAssetWriterInputMetadataAdaptor* _metadataAdaptor;
	NSMutableArray* _sampleQueue;
	NSObject*<OS_dispatch_semaphore> _enqueueSemaphore;
	NSObject*<OS_dispatch_semaphore> _dequeueSemaphore;
	NSObject*<OS_dispatch_semaphore> _completionSemaphore;
	atomic<int> _status;
	CF<__CVPixelBufferPool *>* _pixelBufferPool;
	CF<OpaqueVTPixelTransferSession *>* _transferSession;
	SCD_Struct_VC6 _pts;

}
+(id)assetWriterWithURL:(id)arg1 andTrack:(id)arg2 ;
-(int)finish;
-(int)setupMetadataTrack;
-(id)initWithURL:(id)arg1 andTrack:(id)arg2 ;
-(opaqueCMSampleBufferRef)popSample;
-(void)processMediaRequest;
-(int)createAssetWriterInputWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(int)copyPixelBuffer:(CVBufferRef)arg1 toPixelBuffer:(_CVBuffer*)arg2 ;
-(void)pushSample:(opaqueCMSampleBufferRef)arg1 ;
-(int)appendMetadataTrack;
-(int)addPixelBuffer:(CVBufferRef)arg1 withTime:(SCD_Struct_VC6)arg2 ;
-(void)dealloc;
@end

