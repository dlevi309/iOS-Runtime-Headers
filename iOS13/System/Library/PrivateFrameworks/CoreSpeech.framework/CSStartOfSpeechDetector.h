/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/EARCaesuraSilencePosteriorGeneratorDelegate.h>

@protocol CSStartOfSpeechDetectorDelegate, OS_dispatch_queue;
@class EARCaesuraSilencePosteriorGenerator, NSString, NSObject;

@interface CSStartOfSpeechDetector : NSObject <EARCaesuraSilencePosteriorGeneratorDelegate> {

	BOOL _startDetected;
	float _prevAudioProcessedMs;
	id<CSStartOfSpeechDetectorDelegate> _delegate;
	EARCaesuraSilencePosteriorGenerator* _caesuraSPG;
	NSString* _configFile;
	unsigned long long _minSpeechFrames;
	unsigned long long _curSpeechFrames;
	unsigned long long _numLeadingFrames;
	unsigned long long _samplingRate;
	NSObject*<OS_dispatch_queue> _spgQueue;
	NSObject*<OS_dispatch_queue> _sosQueue;

}

@property (nonatomic,retain) EARCaesuraSilencePosteriorGenerator * caesuraSPG;                 //@synthesize caesuraSPG=_caesuraSPG - In the implementation block
@property (nonatomic,retain) NSString * configFile;                                            //@synthesize configFile=_configFile - In the implementation block
@property (assign,nonatomic) BOOL startDetected;                                               //@synthesize startDetected=_startDetected - In the implementation block
@property (assign,nonatomic) unsigned long long minSpeechFrames;                               //@synthesize minSpeechFrames=_minSpeechFrames - In the implementation block
@property (assign,nonatomic) unsigned long long curSpeechFrames;                               //@synthesize curSpeechFrames=_curSpeechFrames - In the implementation block
@property (assign,nonatomic) unsigned long long numLeadingFrames;                              //@synthesize numLeadingFrames=_numLeadingFrames - In the implementation block
@property (assign,nonatomic) float prevAudioProcessedMs;                                       //@synthesize prevAudioProcessedMs=_prevAudioProcessedMs - In the implementation block
@property (assign,nonatomic) unsigned long long samplingRate;                                  //@synthesize samplingRate=_samplingRate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> spgQueue;                            //@synthesize spgQueue=_spgQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> sosQueue;                            //@synthesize sosQueue=_sosQueue - In the implementation block
@property (assign,nonatomic,__weak) id<CSStartOfSpeechDetectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CSStartOfSpeechDetectorDelegate>)delegate;
-(void)setDelegate:(id<CSStartOfSpeechDetectorDelegate>)arg1 ;
-(unsigned long long)samplingRate;
-(void)endAudio;
-(void)resetForNewRequest;
-(void)clientSilenceFeaturesAvailable:(id)arg1 ;
-(void)addAudio:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(void)setSamplingRate:(unsigned long long)arg1 ;
-(id)initWithConfig:(id)arg1 samplingRate:(unsigned long long)arg2 minSpeechFrames:(unsigned long long)arg3 numLeadingFrames:(unsigned long long)arg4 delegate:(id)arg5 ;
-(EARCaesuraSilencePosteriorGenerator *)caesuraSPG;
-(void)setCaesuraSPG:(EARCaesuraSilencePosteriorGenerator *)arg1 ;
-(NSString *)configFile;
-(void)setConfigFile:(NSString *)arg1 ;
-(BOOL)startDetected;
-(void)setStartDetected:(BOOL)arg1 ;
-(unsigned long long)minSpeechFrames;
-(void)setMinSpeechFrames:(unsigned long long)arg1 ;
-(unsigned long long)curSpeechFrames;
-(void)setCurSpeechFrames:(unsigned long long)arg1 ;
-(unsigned long long)numLeadingFrames;
-(void)setNumLeadingFrames:(unsigned long long)arg1 ;
-(float)prevAudioProcessedMs;
-(void)setPrevAudioProcessedMs:(float)arg1 ;
-(NSObject*<OS_dispatch_queue>)spgQueue;
-(void)setSpgQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)sosQueue;
-(void)setSosQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

