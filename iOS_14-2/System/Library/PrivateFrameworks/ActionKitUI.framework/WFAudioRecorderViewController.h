/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <ActionKitUI/WFAudioInputViewController.h>
#import <libobjc.A.dylib/WFAudioRecorderDelegate.h>

@class WFAudioRecorder, UIButton, NSString;

@interface WFAudioRecorderViewController : WFAudioInputViewController <WFAudioRecorderDelegate> {

	BOOL _startImmediately;
	BOOL _isFinishing;
	/*^block*/id _completionHandler;
	double _recordingDuration;
	WFAudioRecorder* _audioRecorder;
	UIButton* _inputButton;

}

@property (nonatomic,retain) WFAudioRecorder * audioRecorder;              //@synthesize audioRecorder=_audioRecorder - In the implementation block
@property (assign,nonatomic,__weak) UIButton * inputButton;                //@synthesize inputButton=_inputButton - In the implementation block
@property (assign,nonatomic) BOOL isFinishing;                             //@synthesize isFinishing=_isFinishing - In the implementation block
@property (nonatomic,copy) id completionHandler;                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL startImmediately;                        //@synthesize startImmediately=_startImmediately - In the implementation block
@property (assign,nonatomic) double recordingDuration;                     //@synthesize recordingDuration=_recordingDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startRecording;
-(void)setCompletionHandler:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)completionHandler;
-(void)setAudioRecorder:(WFAudioRecorder *)arg1 ;
-(void)viewDidLoad;
-(WFAudioRecorder *)audioRecorder;
-(double)recordingDuration;
-(void)setRecordingDuration:(double)arg1 ;
-(void)handleTap;
-(void)finishRecording;
-(BOOL)isFinishing;
-(BOOL)startImmediately;
-(id)initWithOutputFormat:(long long)arg1 destinationURL:(id)arg2 ;
-(void)audioRecorder:(id)arg1 didFinishWithDestinationURL:(id)arg2 error:(id)arg3 ;
-(void)audioRecorder:(id)arg1 didProgressToTime:(double)arg2 ;
-(void)inputButtonTapped;
-(void)setStartImmediately:(BOOL)arg1 ;
-(UIButton *)inputButton;
-(void)setInputButton:(UIButton *)arg1 ;
-(void)setIsFinishing:(BOOL)arg1 ;
@end

