/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)stopRecording;
-(void)startRecording;
-(BOOL)isRecording;
-(id<OFAudioCaptureManagerDelegate>)delegate;
-(void)setRecorder:(OFAudioRecorder *)arg1 ;
-(AVCaptureSession *)session;
-(AVCaptureDeviceInput *)audioInput;
-(void)setAudioInput:(AVCaptureDeviceInput *)arg1 ;
-(NSURL *)outputFileURL;
-(void)setOutputFileURL:(NSURL *)arg1 ;
-(void)setDelegate:(id<OFAudioCaptureManagerDelegate>)arg1 ;
-(void)setSession:(AVCaptureSession *)arg1 ;
-(OFAudioRecorder *)recorder;
-(void)cancelRecording;
-(BOOL)isCancelled;
-(void)dealloc;
-(BOOL)openSession;
-(id)_audioDevice;
-(void)setBackgroundRecordingID:(unsigned long long)arg1 ;
-(unsigned long long)backgroundRecordingID;
-(id)_tempFileURL;
-(void)_removeFile:(id)arg1 ;
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

