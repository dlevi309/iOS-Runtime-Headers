/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/

#import <libobjc.A.dylib/OFAudioRecorderDelegate.h>

@protocol OFAudioCaptureManagerDelegate;
@class AVCaptureSession, AVCaptureDeviceInput, OFAudioRecorder, NSURL;

@interface OFAudioCaptureManager : NSObject <OFAudioRecorderDelegate> {

	AVCaptureSession* _session;
	AVCaptureDeviceInput* _audioInput;
	OFAudioRecorder* _recorder;
	NSURL* _outputFileURL;
	id _deviceConnectedObserver;
	id _deviceDisconnectedObserver;
	unsigned long long _backgroundRecordingID;
	BOOL _isCancelled;
	id<OFAudioCaptureManagerDelegate> _delegate;

}

@property (nonatomic,retain) AVCaptureSession * session;                              //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceInput * audioInput;                       //@synthesize audioInput=_audioInput - In the implementation block
@property (nonatomic,retain) OFAudioRecorder * recorder;                              //@synthesize recorder=_recorder - In the implementation block
@property (nonatomic,copy) NSURL * outputFileURL;                                     //@synthesize outputFileURL=_outputFileURL - In the implementation block
@property (assign,nonatomic) id deviceConnectedObserver;                              //@synthesize deviceConnectedObserver=_deviceConnectedObserver - In the implementation block
@property (assign,nonatomic) id deviceDisconnectedObserver;                           //@synthesize deviceDisconnectedObserver=_deviceDisconnectedObserver - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundRecordingID;                //@synthesize backgroundRecordingID=_backgroundRecordingID - In the implementation block
@property (nonatomic,readonly) BOOL isCancelled;                                      //@synthesize isCancelled=_isCancelled - In the implementation block
@property (assign,nonatomic) id<OFAudioCaptureManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<OFAudioCaptureManagerDelegate>)delegate;
-(void)setDelegate:(id<OFAudioCaptureManagerDelegate>)arg1 ;
-(BOOL)isCancelled;
-(AVCaptureSession *)session;
-(void)setSession:(AVCaptureSession *)arg1 ;
-(OFAudioRecorder *)recorder;
-(void)setRecorder:(OFAudioRecorder *)arg1 ;
-(void)stopRecording;
-(BOOL)openSession;
-(NSURL *)outputFileURL;
-(BOOL)isRecording;
-(void)startRecording;
-(void)cancelRecording;
-(void)setAudioInput:(AVCaptureDeviceInput *)arg1 ;
-(void)setOutputFileURL:(NSURL *)arg1 ;
-(AVCaptureDeviceInput *)audioInput;
-(void)_removeFile:(id)arg1 ;
-(void)setBackgroundRecordingID:(unsigned long long)arg1 ;
-(unsigned long long)backgroundRecordingID;
-(id)_audioDevice;
-(id)_tempFileURL;
-(void)recorderRecordingDidBegin:(id)arg1 ;
-(void)recorder:(id)arg1 recordingDidFinishToOutputFileURL:(id)arg2 error:(id)arg3 ;
-(id)initWithOutputFileURL:(id)arg1 ;
-(unsigned long long)micCount;
-(float)meanAudioLevel;
-(id)deviceConnectedObserver;
-(void)setDeviceConnectedObserver:(id)arg1 ;
-(id)deviceDisconnectedObserver;
-(void)setDeviceDisconnectedObserver:(id)arg1 ;
@end

