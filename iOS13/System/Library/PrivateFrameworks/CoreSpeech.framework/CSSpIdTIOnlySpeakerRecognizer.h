/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSSpIdProcessorDelegate.h>
#import <libobjc.A.dylib/CSSpIdSpeakerRecognizer.h>

@protocol CSSpIdSpeakerRecognizerDelegate, CSAudioFileWriter, OS_dispatch_queue;
@class CSSpIdContext, NSString, CSSpIdProcessor, NSDictionary, NSObject, CSMediaPlayingMonitor, CSVolumeMonitor;

@interface CSSpIdTIOnlySpeakerRecognizer : NSObject <CSSpIdProcessorDelegate, CSSpIdSpeakerRecognizer> {

	BOOL _processingEnded;
	CSSpIdContext* _spIdCtx;
	NSString* _invocationStyle;
	id<CSSpIdSpeakerRecognizerDelegate> _delegate;
	CSSpIdProcessor* _tiSpIdProcessor;
	unsigned long long _tiEndInSampleCount;
	unsigned long long _numTISamplesProcessed;
	unsigned long long _myriadResult;
	NSDictionary* _lastSpeakerIdInfo;
	id<CSAudioFileWriter> _dbgTiUttLogger;
	NSObject*<OS_dispatch_queue> _queue;
	CSMediaPlayingMonitor* _mediaPlayingMonitor;
	CSVolumeMonitor* _volumeMonitor;

}

@property (nonatomic,retain) CSSpIdContext * spIdCtx;                                          //@synthesize spIdCtx=_spIdCtx - In the implementation block
@property (nonatomic,retain) NSString * invocationStyle;                                       //@synthesize invocationStyle=_invocationStyle - In the implementation block
@property (assign,nonatomic,__weak) id<CSSpIdSpeakerRecognizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CSSpIdProcessor * tiSpIdProcessor;                                //@synthesize tiSpIdProcessor=_tiSpIdProcessor - In the implementation block
@property (assign,nonatomic) unsigned long long tiEndInSampleCount;                            //@synthesize tiEndInSampleCount=_tiEndInSampleCount - In the implementation block
@property (assign,nonatomic) unsigned long long numTISamplesProcessed;                         //@synthesize numTISamplesProcessed=_numTISamplesProcessed - In the implementation block
@property (assign,nonatomic) BOOL processingEnded;                                             //@synthesize processingEnded=_processingEnded - In the implementation block
@property (assign,nonatomic) unsigned long long myriadResult;                                  //@synthesize myriadResult=_myriadResult - In the implementation block
@property (nonatomic,retain) NSDictionary * lastSpeakerIdInfo;                                 //@synthesize lastSpeakerIdInfo=_lastSpeakerIdInfo - In the implementation block
@property (nonatomic,retain) id<CSAudioFileWriter> dbgTiUttLogger;                             //@synthesize dbgTiUttLogger=_dbgTiUttLogger - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CSMediaPlayingMonitor * mediaPlayingMonitor;                      //@synthesize mediaPlayingMonitor=_mediaPlayingMonitor - In the implementation block
@property (nonatomic,retain) CSVolumeMonitor * volumeMonitor;                                  //@synthesize volumeMonitor=_volumeMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<CSSpIdSpeakerRecognizerDelegate>)delegate;
-(void)setDelegate:(id<CSSpIdSpeakerRecognizerDelegate>)arg1 ;
-(id)initWithContext:(id)arg1 delegate:(id)arg2 ;
-(CSSpIdContext *)spIdCtx;
-(void)setSpIdCtx:(CSSpIdContext *)arg1 ;
-(void)processAudioChunk:(id)arg1 ;
-(NSString *)invocationStyle;
-(void)speakerIdProcessor:(id)arg1 hasSpeakerIdInfo:(id)arg2 ;
-(void)speakerIdProcessorFinishedProcessing:(id)arg1 withSpeakerInfo:(id)arg2 ;
-(void)setCVTTriggerPhraseDetected;
-(void)setInvocationStyle:(NSString *)arg1 ;
-(void)recordingStoppedForReason:(long long)arg1 ;
-(void)_endAudioProcessing;
-(void)_processAudioData:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(void)processMyriadDecision:(unsigned long long)arg1 ;
-(NSDictionary *)lastSpeakerIdInfo;
-(BOOL)processingEnded;
-(void)setProcessingEnded:(BOOL)arg1 ;
-(unsigned long long)myriadResult;
-(void)setMyriadResult:(unsigned long long)arg1 ;
-(void)setLastSpeakerIdInfo:(NSDictionary *)arg1 ;
-(CSMediaPlayingMonitor *)mediaPlayingMonitor;
-(void)setMediaPlayingMonitor:(CSMediaPlayingMonitor *)arg1 ;
-(CSVolumeMonitor *)volumeMonitor;
-(void)setVolumeMonitor:(CSVolumeMonitor *)arg1 ;
-(CSSpIdProcessor *)tiSpIdProcessor;
-(void)setTiSpIdProcessor:(CSSpIdProcessor *)arg1 ;
-(unsigned long long)tiEndInSampleCount;
-(void)setTiEndInSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)numTISamplesProcessed;
-(void)setNumTISamplesProcessed:(unsigned long long)arg1 ;
-(id<CSAudioFileWriter>)dbgTiUttLogger;
-(void)setDbgTiUttLogger:(id<CSAudioFileWriter>)arg1 ;
@end

