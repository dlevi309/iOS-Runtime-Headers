/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSAudioFileWriter, OS_dispatch_queue;
@class NSURL, NSObject, NSDictionary, CSBiometricMatchMonitor, CSGestureMonitor;

@interface CSSpIdImplicitTraining : NSObject {

	unsigned long long _triggerEndMachTime;
	unsigned long long _triggerStartMachTime;
	unsigned long long _extraSamplesAtBegining;
	unsigned long long _numSamplesAdded;
	unsigned long long _discardedPaylodSamples;
	BOOL _implicitRecordingInProgress;
	NSURL* _lastCachedUtterance;
	id<CSAudioFileWriter> _uttLogger;
	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _recordingContext;
	NSDictionary* _voiceTriggerEventInfo;
	CSBiometricMatchMonitor* _biometricMonitor;
	CSGestureMonitor* _gestureMonitor;

}

@property (nonatomic,retain) NSURL * lastCachedUtterance;                             //@synthesize lastCachedUtterance=_lastCachedUtterance - In the implementation block
@property (nonatomic,retain) id<CSAudioFileWriter> uttLogger;                         //@synthesize uttLogger=_uttLogger - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSDictionary * recordingContext;                         //@synthesize recordingContext=_recordingContext - In the implementation block
@property (nonatomic,retain) NSDictionary * voiceTriggerEventInfo;                    //@synthesize voiceTriggerEventInfo=_voiceTriggerEventInfo - In the implementation block
@property (nonatomic,retain) CSBiometricMatchMonitor * biometricMonitor;              //@synthesize biometricMonitor=_biometricMonitor - In the implementation block
@property (nonatomic,retain) CSGestureMonitor * gestureMonitor;                       //@synthesize gestureMonitor=_gestureMonitor - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSDictionary *)voiceTriggerEventInfo;
-(void)setVoiceTriggerEventInfo:(NSDictionary *)arg1 ;
-(void)processAudioChunk:(id)arg1 ;
-(void)recordingStoppedForReason:(long long)arg1 ;
-(void)storeMultiUserImplicitTrainingUtterance:(id)arg1 forProfileId:(id)arg2 withAudioDeviceType:(id)arg3 withAudioRecordType:(id)arg4 withVoiceTriggerCtxt:(id)arg5 withOtherCtxt:(id)arg6 withCompletion:(/*^block*/id)arg7 ;
-(void)_storeSingleUserImplicitTrainingUtterance:(id)arg1 audioDeviceType:(id)arg2 audioRecordType:(id)arg3 withVoiceTriggerCtxt:(id)arg4 withOtherCtxt:(id)arg5 withCompletion:(/*^block*/id)arg6 ;
-(unsigned long long)_getBiometricMatchResultForTriggerTimeStamp:(unsigned long long)arg1 ;
-(BOOL)_isUtteranceHandheld;
-(void)_segmentTDfromAudioFile:(id)arg1 withVTEventInfo:(id)arg2 withOtherCtxt:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)processImplicitTrainingUtterance:(id)arg1 forVoiceProfileId:(id)arg2 withRecordDeviceInfo:(id)arg3 withRecordCtxt:(id)arg4 withVoiceTriggerCtxt:(id)arg5 withOtherCtxt:(id)arg6 withCompletion:(/*^block*/id)arg7 ;
-(void)setRecordingContext:(NSDictionary *)arg1 ;
-(void)processImplicitTrainingUtteranceWithVoiceTriggerEventInfo:(id)arg1 ;
-(void)processSingleUserImplicitTrainingUtterance:(id)arg1 audioDeviceType:(id)arg2 audioRecordType:(id)arg3 withVoiceTriggerCtxt:(id)arg4 withOtherCtxt:(id)arg5 withCompletion:(/*^block*/id)arg6 ;
-(NSURL *)lastCachedUtterance;
-(void)setLastCachedUtterance:(NSURL *)arg1 ;
-(id<CSAudioFileWriter>)uttLogger;
-(void)setUttLogger:(id<CSAudioFileWriter>)arg1 ;
-(NSDictionary *)recordingContext;
-(CSBiometricMatchMonitor *)biometricMonitor;
-(void)setBiometricMonitor:(CSBiometricMatchMonitor *)arg1 ;
-(CSGestureMonitor *)gestureMonitor;
-(void)setGestureMonitor:(CSGestureMonitor *)arg1 ;
@end

