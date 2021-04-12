/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <libobjc.A.dylib/AVVoiceControllerRecordDelegate.h>

@protocol _TVRXVoiceRecorderDelegate;
@class AVAudioFormat, AVVoiceController, NSString;

@interface _TVRXVoiceRecorder : NSObject <AVVoiceControllerRecordDelegate> {

	long long _state;
	AudioStreamBasicDescription _audioFormat;
	AVAudioFormat* _avAudioFormat;
	AVVoiceController* _voiceController;
	BOOL _recordsAutomatically;
	id<_TVRXVoiceRecorderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_TVRXVoiceRecorderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL recordsAutomatically;                                   //@synthesize recordsAutomatically=_recordsAutomatically - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<_TVRXVoiceRecorderDelegate>)delegate;
-(void)setDelegate:(id<_TVRXVoiceRecorderDelegate>)arg1 ;
-(id)_init;
-(void)stop;
-(void)start;
-(void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2 ;
-(void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2 ;
-(void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2 ;
-(void)_processAudioBufferOnMainQueue:(id)arg1 ;
-(id)audioFormatSettings;
-(BOOL)recordsAutomatically;
-(void)setRecordsAutomatically:(BOOL)arg1 ;
@end

