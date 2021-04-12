/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSVoiceTriggerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CSAudioCircularBuffer, NSString;

@interface CSVoiceTriggerFidesClient : NSObject <CSVoiceTriggerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	CSAudioCircularBuffer* _audioBuffer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) CSAudioCircularBuffer * audioBuffer;              //@synthesize audioBuffer=_audioBuffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)voiceTriggerGotSuperVector:(id)arg1 ;
-(void)voiceTriggerDidDetectSpeakerReject:(id)arg1 ;
-(id)init;
-(CSAudioCircularBuffer *)audioBuffer;
-(id)_medicalIDAge;
-(void)voiceTriggerDidDetectNearMiss:(id)arg1 ;
-(id)_medicalIDName;
-(void)setAudioBuffer:(CSAudioCircularBuffer *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)_lastTriggerDataWithResult:(id)arg1 ;
-(void)_logDESRecordWithType:(long long)arg1 result:(id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2 ;
@end

