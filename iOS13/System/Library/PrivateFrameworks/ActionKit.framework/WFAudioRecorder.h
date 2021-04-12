/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/AVAudioRecorderDelegate.h>

@protocol WFAudioRecorderDelegate;
@class NSURL, AVAudioRecorder, NSTimer, NSString;

@interface WFAudioRecorder : NSObject <AVAudioRecorderDelegate> {

	BOOL _paused;
	BOOL _hasFinished;
	id<WFAudioRecorderDelegate> _delegate;
	long long _outputFormat;
	double _recordingDuration;
	NSURL* _outputURL;
	AVAudioRecorder* _recorder;
	NSTimer* _updateTimer;

}

@property (assign,nonatomic) long long outputFormat;                                   //@synthesize outputFormat=_outputFormat - In the implementation block
@property (assign,nonatomic) double recordingDuration;                                 //@synthesize recordingDuration=_recordingDuration - In the implementation block
@property (nonatomic,retain) NSURL * outputURL;                                        //@synthesize outputURL=_outputURL - In the implementation block
@property (nonatomic,retain) AVAudioRecorder * recorder;                               //@synthesize recorder=_recorder - In the implementation block
@property (nonatomic,retain) NSTimer * updateTimer;                                    //@synthesize updateTimer=_updateTimer - In the implementation block
@property (assign,nonatomic) BOOL runningUpdateTimer; 
@property (assign,nonatomic) BOOL paused;                                              //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) BOOL hasFinished;                                         //@synthesize hasFinished=_hasFinished - In the implementation block
@property (assign,nonatomic,__weak) id<WFAudioRecorderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isRecording,nonatomic,readonly) BOOL recording; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFAudioRecorderDelegate>)delegate;
-(void)setDelegate:(id<WFAudioRecorderDelegate>)arg1 ;
-(long long)outputFormat;
-(void)setOutputFormat:(long long)arg1 ;
-(AVAudioRecorder *)recorder;
-(void)setRecorder:(AVAudioRecorder *)arg1 ;
-(NSURL *)outputURL;
-(BOOL)paused;
-(void)setPaused:(BOOL)arg1 ;
-(void)setOutputURL:(NSURL *)arg1 ;
-(BOOL)isRecording;
-(void)pauseRecording;
-(void)resumeRecording;
-(void)startRecording;
-(void)recordForDuration:(double)arg1 ;
-(void)audioRecorderDidFinishRecording:(id)arg1 successfully:(BOOL)arg2 ;
-(BOOL)hasFinished;
-(void)setHasFinished:(BOOL)arg1 ;
-(void)setUpdateTimer:(NSTimer *)arg1 ;
-(NSTimer *)updateTimer;
-(void)finishRecording;
-(double)recordingDuration;
-(void)audioInterruption:(id)arg1 ;
-(void)audioRecorderEncodeErrorDidOccur:(id)arg1 error:(id)arg2 ;
-(id)initWithOutputFormat:(long long)arg1 destinationURL:(id)arg2 ;
-(void)countdownFire:(id)arg1 ;
-(BOOL)runningUpdateTimer;
-(void)setRunningUpdateTimer:(BOOL)arg1 ;
-(void)setRecordingDuration:(double)arg1 ;
@end

