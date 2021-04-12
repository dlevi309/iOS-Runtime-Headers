/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@class NSMutableArray, NSMutableData;

@interface CSShadowMicScoreCreator : NSObject {

	unsigned long long _bestStartDetectSample;
	unsigned long long _bestEarlyDetectSample;
	unsigned long long _bestEndDetectSample;
	double _shadowMicScore;
	NSMutableArray* _rmsSamplesForEntireAudio;
	NSMutableData* _audioBuffer;
	double _speechVoiceLevel;
	unsigned long long _numberOfVoicingFrames;
	long long _numberOfTotalFramesETFT;

}

@property (nonatomic,retain) NSMutableArray * rmsSamplesForEntireAudio;              //@synthesize rmsSamplesForEntireAudio=_rmsSamplesForEntireAudio - In the implementation block
@property (nonatomic,retain) NSMutableData * audioBuffer;                            //@synthesize audioBuffer=_audioBuffer - In the implementation block
@property (assign,nonatomic) double speechVoiceLevel;                                //@synthesize speechVoiceLevel=_speechVoiceLevel - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfVoicingFrames;               //@synthesize numberOfVoicingFrames=_numberOfVoicingFrames - In the implementation block
@property (assign,nonatomic) long long numberOfTotalFramesETFT;                      //@synthesize numberOfTotalFramesETFT=_numberOfTotalFramesETFT - In the implementation block
@property (assign,nonatomic) unsigned long long bestStartDetectSample;               //@synthesize bestStartDetectSample=_bestStartDetectSample - In the implementation block
@property (assign,nonatomic) unsigned long long bestEarlyDetectSample;               //@synthesize bestEarlyDetectSample=_bestEarlyDetectSample - In the implementation block
@property (assign,nonatomic) unsigned long long bestEndDetectSample;                 //@synthesize bestEndDetectSample=_bestEndDetectSample - In the implementation block
@property (assign,nonatomic) double shadowMicScore;                                  //@synthesize shadowMicScore=_shadowMicScore - In the implementation block
-(id)init;
-(NSMutableData *)audioBuffer;
-(void)setAudioBuffer:(NSMutableData *)arg1 ;
-(double)_calculateRMSWithFrameData:(short)arg1 ;
-(void)_calculateSpeechVoicingLevel;
-(void)_calculateNumberOfVoicingFrames;
-(unsigned long long)numberOfVoicingFrames;
-(void)addDataToBuffer:(id)arg1 ;
-(void)calculateShadowMicScore;
-(unsigned long long)bestStartDetectSample;
-(void)setBestStartDetectSample:(unsigned long long)arg1 ;
-(unsigned long long)bestEarlyDetectSample;
-(void)setBestEarlyDetectSample:(unsigned long long)arg1 ;
-(unsigned long long)bestEndDetectSample;
-(void)setBestEndDetectSample:(unsigned long long)arg1 ;
-(double)shadowMicScore;
-(void)setShadowMicScore:(double)arg1 ;
-(NSMutableArray *)rmsSamplesForEntireAudio;
-(void)setRmsSamplesForEntireAudio:(NSMutableArray *)arg1 ;
-(double)speechVoiceLevel;
-(void)setSpeechVoiceLevel:(double)arg1 ;
-(void)setNumberOfVoicingFrames:(unsigned long long)arg1 ;
-(long long)numberOfTotalFramesETFT;
-(void)setNumberOfTotalFramesETFT:(long long)arg1 ;
@end

