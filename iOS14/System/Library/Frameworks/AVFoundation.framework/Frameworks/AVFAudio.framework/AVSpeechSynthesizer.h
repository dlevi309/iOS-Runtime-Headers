/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


@protocol AVSpeechSynthesizerDelegate;
@class NSArray, AVSpeechUtterance;

@interface AVSpeechSynthesizer : NSObject {

	BOOL _speaking;
	BOOL _paused;
	BOOL _usesApplicationAudioSession;
	BOOL _mixToTelephonyUplink;
	id<AVSpeechSynthesizerDelegate> _delegate;
	NSArray* _outputChannels;

}

@property (nonatomic,retain) AVSpeechUtterance * inflightUtterance; 
@property (assign,nonatomic,__weak) id<AVSpeechSynthesizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isSpeaking,nonatomic,readonly) BOOL speaking;                            //@synthesize speaking=_speaking - In the implementation block
@property (getter=isPaused,nonatomic,readonly) BOOL paused;                                //@synthesize paused=_paused - In the implementation block
@property (nonatomic,retain) NSArray * outputChannels;                                     //@synthesize outputChannels=_outputChannels - In the implementation block
@property (assign,nonatomic) BOOL usesApplicationAudioSession;                             //@synthesize usesApplicationAudioSession=_usesApplicationAudioSession - In the implementation block
@property (assign,nonatomic) BOOL mixToTelephonyUplink;                                    //@synthesize mixToTelephonyUplink=_mixToTelephonyUplink - In the implementation block
+(/*^block*/id)assetFlushedCallback;
+(void)setAssetFlushedCallback:(/*^block*/id)arg1 ;
+(void)initialize;
-(id)audioSessionCategory;
-(void)writeUtterance:(id)arg1 toBufferCallback:(/*^block*/id)arg2 ;
-(NSArray *)outputChannels;
-(void)setOutputChannels:(NSArray *)arg1 ;
-(BOOL)usesApplicationAudioSession;
-(void)setUsesApplicationAudioSession:(BOOL)arg1 ;
-(BOOL)mixToTelephonyUplink;
-(void)setMixToTelephonyUplink:(BOOL)arg1 ;
-(id)init;
-(void)setAudioSessionCategory:(id)arg1 ;
-(BOOL)isSpeaking;
-(void)speakUtterance:(id)arg1 ;
-(BOOL)pauseSpeakingAtBoundary:(long long)arg1 ;
-(BOOL)continueSpeaking;
-(BOOL)stopSpeakingAtBoundary:(long long)arg1 ;
-(unsigned long long)audioSessionCategoryOptions;
-(void)setIsInternalSynth:(BOOL)arg1 ;
-(BOOL)isPaused;
-(id)audioSession;
-(void)setAudioSessionInactiveTimeout:(double)arg1 ;
-(void)setSetActiveOptions:(unsigned long long)arg1 ;
-(void)setAudioSessionCategoryOptions:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)speechManager;
-(void)setAudioQueueFlags:(unsigned)arg1 ;
-(unsigned)audioQueueFlags;
-(unsigned long long)setActiveOptions;
-(BOOL)isInAudioInterruption;
-(void)prepareSpeechManager;
-(AVSpeechUtterance *)inflightUtterance;
-(void)tearDownWarmupManager;
-(BOOL)isInternalSynth;
-(void)setInflightUtterance:(AVSpeechUtterance *)arg1 ;
-(void)_handleSpeechDone:(id)arg1 successful:(BOOL)arg2 ;
-(void)processSpeechJobFinished:(id)arg1 successful:(BOOL)arg2 ;
-(id)speechQueue;
-(int)_convertBoundary:(long long)arg1 ;
-(void)_speakUtterance:(id)arg1 ;
-(void)_enqueueNextJob;
-(void)writeUtterance:(id)arg1 toBufferCallback:(/*^block*/id)arg2 ;
-(void)writeUtterance:(id)arg1 toBufferCallback:(/*^block*/id)arg2 toMarkerCallback:(/*^block*/id)arg3 ;
-(NSArray *)outputChannels;
-(void)setOutputChannels:(NSArray *)arg1 ;
-(BOOL)usesApplicationAudioSession;
-(void)setUsesApplicationAudioSession:(BOOL)arg1 ;
-(BOOL)mixToTelephonyUplink;
-(void)setMixToTelephonyUplink:(BOOL)arg1 ;
-(id<AVSpeechSynthesizerDelegate>)delegate;
-(BOOL)isSpeaking;
-(void)setDelegate:(id<AVSpeechSynthesizerDelegate>)arg1 ;
-(void)speakUtterance:(id)arg1 ;
-(BOOL)pauseSpeakingAtBoundary:(long long)arg1 ;
-(BOOL)continueSpeaking;
-(BOOL)stopSpeakingAtBoundary:(long long)arg1 ;
-(BOOL)isPaused;
@end

