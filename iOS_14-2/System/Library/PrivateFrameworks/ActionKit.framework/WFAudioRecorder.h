/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)startRecording;
-(BOOL)isRecording;
-(void)setOutputFormat:(long long)arg1 ;
-(id<WFAudioRecorderDelegate>)delegate;
-(void)resumeRecording;
-(long long)outputFormat;
-(void)setRecorder:(AVAudioRecorder *)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)pauseRecording;
-(NSURL *)outputURL;
-(void)setDelegate:(id<WFAudioRecorderDelegate>)arg1 ;
-(void)audioRecorderEncodeErrorDidOccur:(id)arg1 error:(id)arg2 ;
-(AVAudioRecorder *)recorder;
-(void)setOutputURL:(NSURL *)arg1 ;
-(BOOL)paused;
-(NSTimer *)updateTimer;
-(void)setUpdateTimer:(NSTimer *)arg1 ;
-(void)recordForDuration:(double)arg1 ;
-(void)audioRecorderDidFinishRecording:(id)arg1 successfully:(BOOL)arg2 ;
-(double)recordingDuration;
-(void)setRecordingDuration:(double)arg1 ;
-(BOOL)hasFinished;
-(void)setHasFinished:(BOOL)arg1 ;
-(void)finishRecording;
-(id)initWithOutputFormat:(long long)arg1 destinationURL:(id)arg2 ;
-(void)audioInterruption:(id)arg1 ;
-(void)countdownFire:(id)arg1 ;
-(BOOL)runningUpdateTimer;
-(void)setRunningUpdateTimer:(BOOL)arg1 ;
@end

