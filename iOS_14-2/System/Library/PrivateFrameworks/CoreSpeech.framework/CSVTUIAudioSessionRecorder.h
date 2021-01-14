/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSAudioRecorderDelegate.h>
#import <libobjc.A.dylib/CSVTUIAudioSession.h>

@protocol OS_dispatch_queue, CSVTUIAudioSessionDelegate;
@class CSAudioRecorder, NSObject, CSAudioPowerMeter, NSString;

@interface CSVTUIAudioSessionRecorder : NSObject <CSAudioRecorderDelegate, CSVTUIAudioSession> {

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
-(void)stopRecording;
-(BOOL)startRecording;
-(BOOL)isRecording;
-(id)init;
-(void)setEndpointerDelegate:(id)arg1 ;
-(void)releaseAudioSession;
-(void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5 ;
-(id<CSVTUIAudioSessionDelegate>)delegate;
-(void)updateMeters;
-(void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 ;
-(void)setDelegate:(id<CSVTUIAudioSessionDelegate>)arg1 ;
-(BOOL)hasAudioRoute;
-(id)_audioRecorder;
-(float)averagePower;
-(unsigned long long)audioSource;
-(unsigned long long)audioStreamHandleId;
-(void)audioRecorderDidStartRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(BOOL)arg3 error:(id)arg4 ;
-(void)audioRecorderDidStopRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(long long)arg3 ;
-(void)audioRecorderRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(long long)arg2 ;
-(void)audioRecorderDisconnected:(id)arg1 ;
-(CSAudioPowerMeter *)powerMeter;
-(void)setPowerMeter:(CSAudioPowerMeter *)arg1 ;
-(void)setAudioStreamHandleId:(unsigned long long)arg1 ;
-(BOOL)_hasCorrectInputAudioRoute;
-(BOOL)_hasCorrectOutputAudioRoute;
-(long long)convertStopReason:(long long)arg1 ;
-(void)_handleDidStopWithReason:(long long)arg1 ;
-(BOOL)prepareRecord;
-(void)resetEndPointer;
-(BOOL)hasCorrectAudioRoute;
@end

