/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/


@protocol ICDocCamDebugMovieControllerDelegate, OS_dispatch_queue;
#import <DocumentCamera/DocumentCamera-Structs.h>
@class AVCaptureConnection, NSURL, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputMetadataAdaptor, AVAssetWriterInputPixelBufferAdaptor, NSObject;

@interface ICDocCamDebugMovieController : NSObject {

	BOOL _recording;
	BOOL _readyToRecordVideo;
	BOOL _readyToRecordMetadata;
	BOOL _recordingWillBeStarted;
	BOOL _recordingWillBeStopped;
	BOOL _canRecordFrames;
	long long _referenceOrientation;
	AVCaptureConnection* _videoConnection;
	id<ICDocCamDebugMovieControllerDelegate> _delegate;
	NSURL* _movieURL;
	AVAssetWriter* _assetWriter;
	AVAssetWriterInput* _assetWriterVideoIn;
	AVAssetWriterInput* _assetWriterMetadataIn;
	AVAssetWriterInputMetadataAdaptor* _assetWriterMetadataAdaptor;
	AVAssetWriterInputPixelBufferAdaptor* _pixelBufferAdaptor;
	NSObject*<OS_dispatch_queue> _movieWritingQueue;
	long long _videoOrientation;
	unsigned long long _backgroundRecordingID;

}

@property (assign,nonatomic) long long referenceOrientation;                                              //@synthesize referenceOrientation=_referenceOrientation - In the implementation block
@property (assign,nonatomic,__weak) AVCaptureConnection * videoConnection;                                //@synthesize videoConnection=_videoConnection - In the implementation block
@property (assign,nonatomic,__weak) id<ICDocCamDebugMovieControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * movieURL;                                                            //@synthesize movieURL=_movieURL - In the implementation block
@property (nonatomic,retain) AVAssetWriter * assetWriter;                                                 //@synthesize assetWriter=_assetWriter - In the implementation block
@property (nonatomic,retain) AVAssetWriterInput * assetWriterVideoIn;                                     //@synthesize assetWriterVideoIn=_assetWriterVideoIn - In the implementation block
@property (nonatomic,retain) AVAssetWriterInput * assetWriterMetadataIn;                                  //@synthesize assetWriterMetadataIn=_assetWriterMetadataIn - In the implementation block
@property (nonatomic,retain) AVAssetWriterInputMetadataAdaptor * assetWriterMetadataAdaptor;              //@synthesize assetWriterMetadataAdaptor=_assetWriterMetadataAdaptor - In the implementation block
@property (nonatomic,retain) AVAssetWriterInputPixelBufferAdaptor * pixelBufferAdaptor;                   //@synthesize pixelBufferAdaptor=_pixelBufferAdaptor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> movieWritingQueue;                              //@synthesize movieWritingQueue=_movieWritingQueue - In the implementation block
@property (assign,nonatomic) BOOL readyToRecordVideo;                                                     //@synthesize readyToRecordVideo=_readyToRecordVideo - In the implementation block
@property (assign,nonatomic) BOOL readyToRecordMetadata;                                                  //@synthesize readyToRecordMetadata=_readyToRecordMetadata - In the implementation block
@property (assign,nonatomic) BOOL recordingWillBeStarted;                                                 //@synthesize recordingWillBeStarted=_recordingWillBeStarted - In the implementation block
@property (assign,nonatomic) BOOL recordingWillBeStopped;                                                 //@synthesize recordingWillBeStopped=_recordingWillBeStopped - In the implementation block
@property (assign,nonatomic) BOOL canRecordFrames;                                                        //@synthesize canRecordFrames=_canRecordFrames - In the implementation block
@property (getter=isRecording) BOOL recording;                                                            //@synthesize recording=_recording - In the implementation block
@property (assign) long long videoOrientation;                                                            //@synthesize videoOrientation=_videoOrientation - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundRecordingID;                                    //@synthesize backgroundRecordingID=_backgroundRecordingID - In the implementation block
-(void)stopRecording;
-(void)startRecording;
-(BOOL)isRecording;
-(long long)referenceOrientation;
-(void)setRecording:(BOOL)arg1 ;
-(id<ICDocCamDebugMovieControllerDelegate>)delegate;
-(long long)videoOrientation;
-(void)setReferenceOrientation:(long long)arg1 ;
-(void)removeFile:(id)arg1 ;
-(void)setDelegate:(id<ICDocCamDebugMovieControllerDelegate>)arg1 ;
-(void)setVideoOrientation:(long long)arg1 ;
-(void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3 ;
-(NSURL *)movieURL;
-(void)recordingDidStop;
-(void)setVideoConnection:(AVCaptureConnection *)arg1 ;
-(AVCaptureConnection *)videoConnection;
-(AVAssetWriter *)assetWriter;
-(void)setAssetWriter:(AVAssetWriter *)arg1 ;
-(void)setMovieURL:(NSURL *)arg1 ;
-(id)initWithDelegate:(id)arg1 videoConnection:(id)arg2 referenceOrientation:(long long)arg3 ;
-(void)recordFrame:(opaqueCMSampleBufferRef)arg1 fromConnection:(id)arg2 ;
-(void)pauseCaptureSessionForMovieRecording;
-(void)resumeCaptureSessionForMovieRecording;
-(NSObject*<OS_dispatch_queue>)movieWritingQueue;
-(BOOL)canRecordFrames;
-(BOOL)inputsReadyToRecord;
-(BOOL)readyToRecordVideo;
-(BOOL)setupAssetWriterVideoInput:(opaqueCMFormatDescriptionRef)arg1 ;
-(void)setReadyToRecordVideo:(BOOL)arg1 ;
-(void)writeSampleBuffer:(opaqueCMSampleBufferRef)arg1 ofType:(id)arg2 atFrame:(long long)arg3 ;
-(BOOL)readyToRecordMetadata;
-(BOOL)setupAssetWriterMetadataInputAndMetadataAdaptor;
-(void)setReadyToRecordMetadata:(BOOL)arg1 ;
-(BOOL)writeMetaDataAtFrame:(long long)arg1 intrinsicMatrix:(SCD_Struct_IC3)arg2 ;
-(void)setRecordingWillBeStarted:(BOOL)arg1 ;
-(void)recordingDidStart;
-(void)setBackgroundRecordingID:(unsigned long long)arg1 ;
-(unsigned long long)backgroundRecordingID;
-(AVAssetWriterInput *)assetWriterVideoIn;
-(AVAssetWriterInputPixelBufferAdaptor *)pixelBufferAdaptor;
-(AVAssetWriterInput *)assetWriterMetadataIn;
-(AVAssetWriterInputMetadataAdaptor *)assetWriterMetadataAdaptor;
-(void)setAssetWriterVideoIn:(AVAssetWriterInput *)arg1 ;
-(CGAffineTransform)transformFromCurrentVideoOrientationToOrientation:(long long)arg1 ;
-(void)setPixelBufferAdaptor:(AVAssetWriterInputPixelBufferAdaptor *)arg1 ;
-(void)setAssetWriterMetadataIn:(AVAssetWriterInput *)arg1 ;
-(void)setAssetWriterMetadataAdaptor:(AVAssetWriterInputMetadataAdaptor *)arg1 ;
-(BOOL)recordingWillBeStarted;
-(void)recordingWillStart;
-(void)setCanRecordFrames:(BOOL)arg1 ;
-(BOOL)recordingWillBeStopped;
-(void)setRecordingWillBeStopped:(BOOL)arg1 ;
-(void)recordingWillStop;
-(void)saveMovieToCameraRoll;
-(double)angleOffsetFromPortraitOrientationToOrientation:(long long)arg1 ;
-(void)setMovieWritingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
