/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>

@class CSAudioRecordContext;

@interface CSSpeechControllerMonitor : CSEventMonitor {

	unsigned long long _recordState;
	CSAudioRecordContext* _audioRecordContext;

}

@property (assign,nonatomic) unsigned long long recordState;                         //@synthesize recordState=_recordState - In the implementation block
@property (nonatomic,retain) CSAudioRecordContext * audioRecordContext;              //@synthesize audioRecordContext=_audioRecordContext - In the implementation block
+(id)sharedInstance;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(unsigned long long)recordState;
-(void)notifySpeechControllerRecordStateChange:(unsigned long long)arg1 withEventUUID:(id)arg2 ;
-(void)notifySpeechControllerRecordStateChange:(unsigned long long)arg1 withEventUUID:(id)arg2 withContext:(id)arg3 ;
-(void)setRecordState:(unsigned long long)arg1 ;
-(CSAudioRecordContext *)audioRecordContext;
-(void)setAudioRecordContext:(CSAudioRecordContext *)arg1 ;
@end

