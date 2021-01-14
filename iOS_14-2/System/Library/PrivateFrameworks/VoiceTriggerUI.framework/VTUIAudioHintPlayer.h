/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/


@class NSTimer, NSString, NSArray, VTUISpeechSynthesizer;

@interface VTUIAudioHintPlayer : NSObject {

	NSTimer* _timer;
	BOOL _shouldSpeakAudioHint;
	NSString* _language;
	NSArray* _trainingPageAudioHintInstructions;
	NSArray* _trainingPageAudioHintFiles;
	VTUISpeechSynthesizer* _synth;

}

@property (nonatomic,retain) VTUISpeechSynthesizer * synth;                            //@synthesize synth=_synth - In the implementation block
@property (assign,nonatomic) BOOL shouldSpeakAudioHint;                                //@synthesize shouldSpeakAudioHint=_shouldSpeakAudioHint - In the implementation block
@property (nonatomic,retain) NSArray * trainingPageAudioHintInstructions;              //@synthesize trainingPageAudioHintInstructions=_trainingPageAudioHintInstructions - In the implementation block
@property (nonatomic,retain) NSArray * trainingPageAudioHintFiles;                     //@synthesize trainingPageAudioHintFiles=_trainingPageAudioHintFiles - In the implementation block
@property (nonatomic,retain) NSString * language;                                      //@synthesize language=_language - In the implementation block
-(void)setLanguage:(NSString *)arg1 ;
-(VTUISpeechSynthesizer *)synth;
-(void)_timerFired;
-(void)cleanup;
-(id)initWithLanguage:(id)arg1 ;
-(NSString *)language;
-(void)speakConfirmationDialog:(/*^block*/id)arg1 ;
-(void)speakAudioHint:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)shouldSpeakAudioHint;
-(void)_setupHints;
-(BOOL)_hasValidHints;
-(BOOL)_systemLanguageMatchesSiriLanguage:(id)arg1 siriLanguage:(id)arg2 ;
-(id)_getTrainingPageAudioHintFiles;
-(id)_audioHintPathForFileName:(id)arg1 ;
-(void)setShouldSpeakAudioHint:(BOOL)arg1 ;
-(NSArray *)trainingPageAudioHintInstructions;
-(void)setTrainingPageAudioHintInstructions:(NSArray *)arg1 ;
-(NSArray *)trainingPageAudioHintFiles;
-(void)setTrainingPageAudioHintFiles:(NSArray *)arg1 ;
-(void)setSynth:(VTUISpeechSynthesizer *)arg1 ;
@end

