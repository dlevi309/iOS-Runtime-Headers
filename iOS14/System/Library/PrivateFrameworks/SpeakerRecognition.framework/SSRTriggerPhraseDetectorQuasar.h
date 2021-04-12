/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/


@class _EARSyncSpeechRecognizer, NSString;

@interface SSRTriggerPhraseDetectorQuasar : NSObject {

	_EARSyncSpeechRecognizer* _syncRecognizer;
	NSString* _locale;

}
-(void)reset;
-(id)endAudio;
-(id)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(id)initWithLocale:(id)arg1 configPath:(id)arg2 resourcePath:(id)arg3 ;
@end

