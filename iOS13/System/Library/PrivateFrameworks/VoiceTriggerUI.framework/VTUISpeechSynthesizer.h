/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <libobjc.A.dylib/VSSpeechSynthesizerDelegate.h>

@class VSSpeechSynthesizer, NSString;

@interface VTUISpeechSynthesizer : NSObject <VSSpeechSynthesizerDelegate> {

	/*^block*/id _playAudioFileCompletion;
	/*^block*/id _speakStringCompletion;
	VSSpeechSynthesizer* _synthesizer;

}

@property (nonatomic,copy) id playAudioFileCompletion;                       //@synthesize playAudioFileCompletion=_playAudioFileCompletion - In the implementation block
@property (nonatomic,copy) id speakStringCompletion;                         //@synthesize speakStringCompletion=_speakStringCompletion - In the implementation block
@property (nonatomic,retain) VSSpeechSynthesizer * synthesizer;              //@synthesize synthesizer=_synthesizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(BOOL)arg3 phonemesSpoken:(id)arg4 withError:(id)arg5 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 withInstrumentMetrics:(id)arg3 ;
-(void)speechSynthesizer:(id)arg1 didStartPresynthesizedAudioRequest:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didStopPresynthesizedAudioRequest:(id)arg2 atEnd:(BOOL)arg3 error:(id)arg4 ;
-(void)speechSynthesizer:(id)arg1 didFinishPresynthesizedAudioRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error:(id)arg4 ;
-(void)stopSpeaking;
-(BOOL)isSpeaking;
-(void)setSynthesizer:(VSSpeechSynthesizer *)arg1 ;
-(VSSpeechSynthesizer *)synthesizer;
-(void)playAudioFileAtPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)speak:(id)arg1 language:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)playAudioFileCompletion;
-(void)setPlayAudioFileCompletion:(id)arg1 ;
-(id)speakStringCompletion;
-(void)setSpeakStringCompletion:(id)arg1 ;
@end

