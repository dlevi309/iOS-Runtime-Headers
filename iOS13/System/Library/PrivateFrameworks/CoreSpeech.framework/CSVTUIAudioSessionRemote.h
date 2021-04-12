/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSAudioRecorderDelegate.h>
#import <libobjc.A.dylib/CSVTUIAudioSession.h>

@protocol OS_dispatch_queue, CSVTUIAudioSessionDelegate;
@class CSAudioRecorder, NSObject, CSAudioPowerMeter, NSString;

@interface CSVTUIAudioSessionRemote : NSObject <CSAudioRecorderDelegate, CSVTUIAudioSession> {

	CSAudioRecorder* _audioRecorder;
	NSObject*<OS_dispatch_queue> _queue;
	id<CSVTUIAudioSessionDelegate> _delegate;
	CSAudioPowerMeter* _powerMeter;
	unsigned long long _audioStreamHandleId;

}

@property (nonatomic,retain) CSAudioPowerMeter * powerMeter;                              //@synthesize powerMeter=_powerMeter - In the implementation block
@property (assign,nonatomic) unsigned long long audioStreamHandleId;                      //@synthesize audioStreamHandleId=_audioStreamHandleId - In the implementation block
@property (assign,nonatomic,__weak) id<CSVTUIAudioSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<CSVTUIAudioSessionDelegate>)delegate;
-(void)setDelegate:(id<CSVTUIAudioSessionDelegate>)arg1 ;
-(float)averagePower;
-(void)stopRecording;
-(BOOL)isRecording;
-(unsigned long long)audioSource;
-(BOOL)hasAudioRoute;
-(void)releaseAudioSession;
-(BOOL)startRecording;
-(void)setEndpointerDelegate:(id)arg1 ;
-(void)updateMeters;
-(BOOL)prepareRecord;
-(BOOL)hasCorrectAudioRoute;
-(void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5 ;
-(void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 ;
-(void)audioRecorderDidStartRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(BOOL)arg3 error:(id)arg4 ;
-(void)audioRecorderDidStopRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(long long)arg3 ;
-(void)audioRecorderDisconnected:(id)arg1 ;
-(id)_audioRecorder;
-(CSAudioPowerMeter *)powerMeter;
-(void)setPowerMeter:(CSAudioPowerMeter *)arg1 ;
-(long long)convertStopReason:(long long)arg1 ;
-(void)_handleDidStopWithReason:(long long)arg1 ;
-(void)resetEndPointer;
-(unsigned long long)audioStreamHandleId;
-(void)setAudioStreamHandleId:(unsigned long long)arg1 ;
@end

