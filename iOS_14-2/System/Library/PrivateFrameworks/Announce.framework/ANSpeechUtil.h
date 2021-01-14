/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/


@class VSSpeechSynthesizer, AVAudioSession;

@interface ANSpeechUtil : NSObject {

	VSSpeechSynthesizer* _synthesizer;
	AVAudioSession* _audioSession;

}

@property (nonatomic,retain) VSSpeechSynthesizer * synthesizer;              //@synthesize synthesizer=_synthesizer - In the implementation block
@property (nonatomic,retain) AVAudioSession * audioSession;                  //@synthesize audioSession=_audioSession - In the implementation block
+(id)sharedUtil;
-(void)setSynthesizer:(VSSpeechSynthesizer *)arg1 ;
-(void)setAudioSession:(AVAudioSession *)arg1 ;
-(VSSpeechSynthesizer *)synthesizer;
-(AVAudioSession *)audioSession;
-(void)speakText:(id)arg1 ;
@end

