/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
*/


@protocol TTSSpeechService <NSObject>
@optional
-(id)serviceIdentifier;
-(oneway void)getVoicesForLanguage:(id)arg1 queryingMobileAssets:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(BOOL)employSpeechMarkupForType:(long long)arg1 language:(id)arg2;
-(id)lhPhonemesFromIPA:(id)arg1 language:(id)arg2;
-(id)phonemesFromIPA:(id)arg1 language:(id)arg2;
-(id)phonemesFromLHPhonemes:(id)arg1 language:(id)arg2;
-(id)enclosedStringWithPhonemes:(id)arg1;
-(id)nashvilleVoiceIdentifier:(id)arg1 footprint:(long long)arg2 voiceType:(long long)arg3 gender:(long long)arg4;
-(id)nashvilleVoiceName:(id)arg1 footprint:(long long)arg2 voiceType:(long long)arg3 gender:(long long)arg4;
-(id)embeddedRateMarkupForVoice:(id)arg1 string:(id)arg2 rate:(double)arg3;
-(id)embeddedPitchMarkupForVoice:(id)arg1 string:(id)arg2 pitch:(double)arg3;
-(id)embeddedVolumeMarkupForVoice:(id)arg1 string:(id)arg2 volume:(double)arg3;
-(id)audioFileSettingsForVoice:(id)arg1;
-(BOOL)isSiriService;
-(BOOL)isNashvilleService;

@required
-(oneway void)startSpeechRequest:(id)arg1;
-(void)initializeSpeechServerInstance:(unsigned long long)arg1;
-(void)synthesizerInstanceDestroyed:(unsigned long long)arg1;
-(void)setServiceQueue:(id)arg1 forSynthesizerInstanceID:(unsigned long long)arg2;
-(oneway void)pauseSpeechRequest:(id)arg1 atMark:(long long)arg2;
-(oneway void)continueSpeechRequest:(id)arg1;
-(oneway void)stopSpeechRequest:(id)arg1 atMark:(long long)arg2;
-(oneway void)getVoicesForLanguage:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)getSpeechIsActiveForRequest:(id)arg1 reply:(/*^block*/id)arg2;
-(id)supportedIPAPhonemeLanguages;
-(id)speechMarkupStringForType:(long long)arg1 voice:(id)arg2 string:(id)arg3;
-(BOOL)isVoiceValid:(id)arg1;

@end

