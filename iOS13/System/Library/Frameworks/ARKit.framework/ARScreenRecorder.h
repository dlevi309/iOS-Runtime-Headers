/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSObject, NSURL;

@interface ARScreenRecorder : NSObject {

	BOOL _isRecording;
	double _firstFrameTime;
	double _previousFrameTime;
	AVAssetWriter* _assetWriter;
	AVAssetWriterInput* _imageInput;
	AVAssetWriterInputPixelBufferAdaptor* _imageInputAdaptor;
	NSObject*<OS_dispatch_queue> _writerQueue;
	NSObject*<OS_dispatch_source> _timer;
	NSURL* _fileURL;

}

@property (assign,nonatomic) double firstFrameTime;                                                 //@synthesize firstFrameTime=_firstFrameTime - In the implementation block
@property (assign,nonatomic) double previousFrameTime;                                              //@synthesize previousFrameTime=_previousFrameTime - In the implementation block
@property (assign,nonatomic) BOOL isRecording;                                                      //@synthesize isRecording=_isRecording - In the implementation block
@property (nonatomic,retain) AVAssetWriter * assetWriter;                                           //@synthesize assetWriter=_assetWriter - In the implementation block
@property (nonatomic,retain) AVAssetWriterInput * imageInput;                                       //@synthesize imageInput=_imageInput - In the implementation block
@property (nonatomic,retain) AVAssetWriterInputPixelBufferAdaptor * imageInputAdaptor;              //@synthesize imageInputAdaptor=_imageInputAdaptor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> writerQueue;                              //@synthesize writerQueue=_writerQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                                   //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                                                       //@synthesize fileURL=_fileURL - In the implementation block
+(id)sharedRecorder;
-(id)init;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_timerFired;
-(BOOL)isRecording;
-(AVAssetWriterInput *)imageInput;
-(AVAssetWriter *)assetWriter;
-(void)setAssetWriter:(AVAssetWriter *)arg1 ;
-(void)startRecordingWithHandler:(/*^block*/id)arg1 ;
-(id)_recordingUrl;
-(void)setPreviousFrameTime:(double)arg1 ;
-(void)setFirstFrameTime:(double)arg1 ;
-(void)setIsRecording:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)writerQueue;
-(void)_finishRecordingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopCaptureWithHandler:(/*^block*/id)arg1 ;
-(void)_submitFrame:(id)arg1 forTime:(double)arg2 ;
-(double)previousFrameTime;
-(void)_setupTracksWithImageHeight:(unsigned long long)arg1 width:(unsigned long long)arg2 time:(double)arg3 ;
-(double)firstFrameTime;
-(void)_appendFrame:(id)arg1 forTime:(double)arg2 ;
-(void)setImageInput:(AVAssetWriterInput *)arg1 ;
-(void)setImageInputAdaptor:(AVAssetWriterInputPixelBufferAdaptor *)arg1 ;
-(void)_addImageStreamTrack:(id)arg1 ;
-(AVAssetWriterInputPixelBufferAdaptor *)imageInputAdaptor;
-(BOOL)_appendImageData:(id)arg1 forTime:(double)arg2 ;
-(void)stopRecordingAndSaveToCameraRoll:(/*^block*/id)arg1 ;
-(void)setWriterQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

