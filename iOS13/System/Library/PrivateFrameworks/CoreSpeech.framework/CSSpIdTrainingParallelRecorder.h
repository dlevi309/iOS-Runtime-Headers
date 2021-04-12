/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSSpIdSpeakerRecognizer.h>

@protocol OS_dispatch_queue;
@class CSSpIdContext, NSString, CSPlainAudioFileWriter, NSObject, NSDictionary;

@interface CSSpIdTrainingParallelRecorder : NSObject <CSSpIdSpeakerRecognizer> {

	CSSpIdContext* _spIdCtx;
	NSString* _invocationStyle;
	CSPlainAudioFileWriter* _parallelRecordingUttLogger;
	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _lastSpeakerIdInfo;

}

@property (nonatomic,retain) CSSpIdContext * spIdCtx;                                          //@synthesize spIdCtx=_spIdCtx - In the implementation block
@property (nonatomic,retain) NSString * invocationStyle;                                       //@synthesize invocationStyle=_invocationStyle - In the implementation block
@property (nonatomic,retain) CSPlainAudioFileWriter * parallelRecordingUttLogger;              //@synthesize parallelRecordingUttLogger=_parallelRecordingUttLogger - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSDictionary * lastSpeakerIdInfo;                                 //@synthesize lastSpeakerIdInfo=_lastSpeakerIdInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithContext:(id)arg1 delegate:(id)arg2 ;
-(CSSpIdContext *)spIdCtx;
-(void)setSpIdCtx:(CSSpIdContext *)arg1 ;
-(void)processAudioChunk:(id)arg1 ;
-(NSString *)invocationStyle;
-(void)setCVTTriggerPhraseDetected;
-(void)setInvocationStyle:(NSString *)arg1 ;
-(void)recordingStoppedForReason:(long long)arg1 ;
-(void)processMyriadDecision:(unsigned long long)arg1 ;
-(NSDictionary *)lastSpeakerIdInfo;
-(void)setLastSpeakerIdInfo:(NSDictionary *)arg1 ;
-(CSPlainAudioFileWriter *)parallelRecordingUttLogger;
-(void)setParallelRecordingUttLogger:(CSPlainAudioFileWriter *)arg1 ;
@end

