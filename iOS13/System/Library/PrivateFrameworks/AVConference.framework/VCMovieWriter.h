/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCMovieWriterProtocol.h>

@protocol OS_dispatch_queue;
@class NSURL, NSString, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputMetadataAdaptor, NSObject;

@interface VCMovieWriter : NSObject <VCMovieWriterProtocol> {

	NSString* _transactionID;
	SCD_Struct_AV77 _lastVideoPresentationTime;
	SCD_Struct_AV77 _lastLocalAudioPresentationTime;
	SCD_Struct_AV77 _lastRemoteAudioPresentationTime;
	SCD_Struct_AV77 _startTime;
	SCD_Struct_AV77 _stillImageTime;
	AVAssetWriter* _assetWriter;
	AVAssetWriterInput* _videoInput;
	AVAssetWriterInput* _localAudioInput;
	AVAssetWriterInput* _remoteAudioInput;
	AVAssetWriterInput* _metadataInput;
	AVAssetWriterInputMetadataAdaptor* _adapter;
	NSURL* _outputURL;
	unsigned char _writerMode;
	BOOL _isVideoStarted;
	BOOL _isEndRTPTimestampSet;
	unsigned _startRTPTimeStamp;
	unsigned _endRTPTimeStamp;
	BOOL _writingStarted;
	opaqueCMBufferQueueRef _videoQueue;
	opaqueCMBufferQueueRef _localAudioQueue;
	opaqueCMBufferQueueRef _remoteAudioQueue;
	NSObject*<OS_dispatch_queue> _serializationQueue;
	/*^block*/id _completionHandler;
	CGRect _contectRect;
	double _visibleWidth;
	double _visibleHeight;
	CVPixelBufferPoolRef _bufferPool;
	OpaqueVTPixelTransferSessionRef _transferSession;
	unsigned _codec;

}

@property (assign) unsigned startRTPTimeStamp;               //@synthesize startRTPTimeStamp=_startRTPTimeStamp - In the implementation block
@property (assign) unsigned endRTPTimeStamp;                 //@synthesize endRTPTimeStamp=_endRTPTimeStamp - In the implementation block
@property (readonly) unsigned char writerMode;               //@synthesize writerMode=_writerMode - In the implementation block
@property (nonatomic,retain) NSURL * outputURL;              //@synthesize outputURL=_outputURL - In the implementation block
-(void)dealloc;
-(NSURL *)outputURL;
-(void)setOutputURL:(NSURL *)arg1 ;
-(void)setStillImageTime:(SCD_Struct_AV77)arg1 ;
-(id)initWithOutputURL:(id)arg1 transactionID:(id)arg2 videoCodec:(unsigned)arg3 ;
-(void)setupWriterWithMode:(unsigned char)arg1 ;
-(void)setStartRTPTimeStamp:(unsigned)arg1 ;
-(void)setEndRTPTimestampWithTimestamp:(unsigned)arg1 ;
-(BOOL)shouldFinishWritingSampleBuffer:(opaqueCMSampleBufferRef)arg1 RTPtimeStamp:(unsigned)arg2 mediaType:(unsigned char)arg3 ;
-(void)finishWritingWithHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldAppendSampleBuffer:(opaqueCMSampleBufferRef)arg1 RTPtimeStamp:(unsigned)arg2 mediaType:(unsigned char)arg3 ;
-(void)appendVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 cameraStatus:(unsigned char)arg2 mediaType:(unsigned char)arg3 ;
-(void)appendAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 mediaType:(unsigned char)arg2 ;
-(id)setupAssetWriterWithWidth:(int)arg1 height:(int)arg2 transactionID:(id)arg3 ;
-(void)setupInputs;
-(void)processSampleQueue:(opaqueCMBufferQueueRef)arg1 input:(id)arg2 lastPresentationTime:(SCD_Struct_AV77*)arg3 ;
-(void)startWritingAtTime:(SCD_Struct_AV77)arg1 ;
-(void)appendMetaData;
-(void)setupInput:(id)arg1 queue:(opaqueCMBufferQueueRef)arg2 dispatchGroup:(id)arg3 lastPresentationTime:(SCD_Struct_AV77*)arg4 ;
-(unsigned)startRTPTimeStamp;
-(unsigned)endRTPTimeStamp;
-(void)setEndRTPTimeStamp:(unsigned)arg1 ;
-(unsigned char)writerMode;
-(void)setupContectRect:(CGRect)arg1 withCaptureHeight:(int)arg2 ;
@end

