/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

@class NSURL;


@protocol VCMovieWriterProtocol
@property (assign) unsigned startRTPTimeStamp; 
@property (assign) unsigned endRTPTimeStamp; 
@property (readonly) unsigned char writerMode; 
@property (nonatomic,retain) NSURL * outputURL; 
@required
-(NSURL *)outputURL;
-(void)setOutputURL:(id)arg1;
-(void)setStillImageTime:(SCD_Struct_AV77)arg1;
-(id)initWithOutputURL:(id)arg1 transactionID:(id)arg2 videoCodec:(unsigned)arg3;
-(void)setupWriterWithMode:(unsigned char)arg1;
-(void)setStartRTPTimeStamp:(unsigned)arg1;
-(void)setEndRTPTimestampWithTimestamp:(unsigned)arg1;
-(BOOL)shouldFinishWritingSampleBuffer:(opaqueCMSampleBufferRef)arg1 RTPtimeStamp:(unsigned)arg2 mediaType:(unsigned char)arg3;
-(void)finishWritingWithHandler:(/*^block*/id)arg1;
-(BOOL)shouldAppendSampleBuffer:(opaqueCMSampleBufferRef)arg1 RTPtimeStamp:(unsigned)arg2 mediaType:(unsigned char)arg3;
-(void)appendVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 cameraStatus:(unsigned char)arg2 mediaType:(unsigned char)arg3;
-(void)appendAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 mediaType:(unsigned char)arg2;
-(unsigned)startRTPTimeStamp;
-(unsigned)endRTPTimeStamp;
-(void)setEndRTPTimeStamp:(unsigned)arg1;
-(unsigned char)writerMode;

@end

