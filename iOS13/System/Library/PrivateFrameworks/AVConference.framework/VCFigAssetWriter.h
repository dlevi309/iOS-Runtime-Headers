/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCMovieWriterProtocol.h>

@class NSString, NSURL;

@interface VCFigAssetWriter : NSObject <VCMovieWriterProtocol> {

	OpaqueFigAssetWriterRef _assetWriter;
	SCD_Struct_AV77 _startTime;
	NSString* _transactionID;
	NSURL* _outputURL;
	int _videoTrackID;
	int _localAudioTrackID;
	int _remoteAudioTrackID;
	int _metadataTrackID;
	SCD_Struct_AV77 _stillImageTime;
	unsigned char _writerMode;
	BOOL _isVideoStarted;
	BOOL _isEndRTPTimestampSet;
	unsigned _startRTPTimeStamp;
	unsigned _endRTPTimeStamp;
	unsigned char _stillImageCameraStatusBit;
	BOOL _resize;
	CVPixelBufferPoolRef _bufferPool;
	OpaqueVTPixelTransferSessionRef _transferSession;
	OpaqueVTCompressionSessionRef _compressionSession;
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
-(void)setupLivePhotoStillImageCameraStatusBit:(unsigned char)arg1 resize:(BOOL)arg2 videoVisibleWidth:(int)arg3 height:(int)arg4 ;
-(void)appendVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 cameraStatus:(unsigned char)arg2 mediaType:(unsigned char)arg3 ;
-(void)appendAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 mediaType:(unsigned char)arg2 ;
-(unsigned)startRTPTimeStamp;
-(unsigned)endRTPTimeStamp;
-(void)setEndRTPTimeStamp:(unsigned)arg1 ;
-(unsigned char)writerMode;
-(int)_setupWriter;
-(void)writeIdentifierMetadata:(id)arg1 ;
-(void)setStillImageTimeInternal;
-(int)trackIDForWriterMode:(unsigned char)arg1 ;
-(OpaqueVTCompressionSessionRef)compressionSessionWithWidth:(unsigned)arg1 height:(unsigned)arg2 ;
-(int)encodeAndAppendSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)trackIDForMediaType:(unsigned char)arg1 ;
@end

