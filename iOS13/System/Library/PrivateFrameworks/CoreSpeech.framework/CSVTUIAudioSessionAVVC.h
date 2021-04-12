/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSVTUIAudioSession.h>
#import <libobjc.A.dylib/AVVoiceControllerRecordDelegate.h>
#import <libobjc.A.dylib/AVVoiceControllerPlaybackDelegate.h>

@protocol OS_dispatch_queue, CSVTUIAudioSessionDelegate;
@class AVVoiceController, NSObject, NSString;

@interface CSVTUIAudioSessionAVVC : NSObject <CSVTUIAudioSession, AVVoiceControllerRecordDelegate, AVVoiceControllerPlaybackDelegate> {

	AVVoiceController* _voiceController;
	NSObject*<OS_dispatch_queue> _queue;
	id<CSVTUIAudioSessionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSVTUIAudioSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<CSVTUIAudioSessionDelegate>)delegate;
-(void)setDelegate:(id<CSVTUIAudioSessionDelegate>)arg1 ;
-(float)averagePower;
-(void)voiceControllerDidStartRecording:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3 ;
-(void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2 ;
-(void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2 ;
-(void)voiceControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2 ;
-(void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2 ;
-(void)voiceControllerLPCMRecordBufferAvailable:(id)arg1 buffer:(id)arg2 ;
-(void)stopRecording;
-(BOOL)isRecording;
-(unsigned long long)audioSource;
-(BOOL)hasAudioRoute;
-(void)releaseAudioSession;
-(BOOL)startRecording;
-(void)setEndpointerDelegate:(id)arg1 ;
-(void)updateMeters;
-(void)voiceControllerPlaybackBufferAvailable:(id)arg1 buffer:(id)arg2 ;
-(void)voiceControllerPlaybackHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2 ;
-(id)voiceController;
-(BOOL)prepareRecord;
-(BOOL)hasCorrectAudioRoute;
-(long long)convertStopReason:(long long)arg1 ;
-(void)resetEndPointer;
-(BOOL)_hasInputAudioRoute;
-(BOOL)_hasCorrectInputAudioRoute;
-(BOOL)_hasCorrectOutputAudioRoute;
@end

