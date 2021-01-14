/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/

#import <libobjc.A.dylib/AVCaptureFileOutputRecordingDelegate.h>

@protocol OFAudioRecorderDelegate;
@class AVCaptureSession, AVCaptureMovieFileOutput, NSURL, NSObject, NSString;

@interface OFAudioRecorder : NSObject <AVCaptureFileOutputRecordingDelegate> {

	AVCaptureSession* _session;
	AVCaptureMovieFileOutput* _movieFileOutput;
	NSURL* _outputFileURL;
	NSObject*<OFAudioRecorderDelegate> _delegate;

}

@property (nonatomic,retain) AVCaptureSession * session;                               //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) AVCaptureMovieFileOutput * movieFileOutput;               //@synthesize movieFileOutput=_movieFileOutput - In the implementation block
@property (nonatomic,copy) NSURL * outputFileURL;                                      //@synthesize outputFileURL=_outputFileURL - In the implementation block
@property (nonatomic,readonly) BOOL recordsAudio; 
@property (getter=isRecording,nonatomic,readonly) BOOL recording; 
@property (assign,nonatomic) NSObject*<OFAudioRecorderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopRecording;
-(void)startRecording;
-(BOOL)isRecording;
-(NSObject*<OFAudioRecorderDelegate>)delegate;
-(AVCaptureMovieFileOutput *)movieFileOutput;
-(AVCaptureSession *)session;
-(NSURL *)outputFileURL;
-(void)setOutputFileURL:(NSURL *)arg1 ;
-(void)setDelegate:(NSObject*<OFAudioRecorderDelegate>)arg1 ;
-(void)setSession:(AVCaptureSession *)arg1 ;
-(void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 ;
-(void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4 ;
-(void)dealloc;
-(id)initWithSession:(id)arg1 outputFileURL:(id)arg2 ;
-(BOOL)recordsAudio;
-(void)setMovieFileOutput:(AVCaptureMovieFileOutput *)arg1 ;
-(id)_connectionWithMediaType:(id)arg1 ;
@end

