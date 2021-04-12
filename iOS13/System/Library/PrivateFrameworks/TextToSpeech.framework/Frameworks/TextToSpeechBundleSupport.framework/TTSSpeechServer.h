/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
*/

#import <TextToSpeechBundleSupport/TextToSpeechBundleSupport-Structs.h>
#import <libobjc.A.dylib/TTSSpeechService.h>
#import <libobjc.A.dylib/TTSSpeechServiceUnitTesting.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, TTSSpeechServerInstance, NSString;

@interface TTSSpeechServer : NSObject <TTSSpeechService, TTSSpeechServiceUnitTesting> {

	NSMutableDictionary* _serverInstances;
	NSObject*<OS_dispatch_queue> serviceQueue;
	TTSSpeechServerInstance* _speechInitializationInstance;

}

@property (nonatomic,retain) TTSSpeechServerInstance * speechInitializationInstance;              //@synthesize speechInitializationInstance=_speechInitializationInstance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> serviceQueue; 
+(id)regexRules;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)serviceQueue;
-(void)setServiceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(oneway void)startSpeechRequest:(id)arg1 ;
-(id)audioFileSettingsForVoice:(id)arg1 ;
-(void)initializeSpeechServerInstance:(unsigned long long)arg1 ;
-(void)synthesizerInstanceDestroyed:(unsigned long long)arg1 ;
-(oneway void)pauseSpeechRequest:(id)arg1 atMark:(long long)arg2 ;
-(oneway void)continueSpeechRequest:(id)arg1 ;
-(oneway void)stopSpeechRequest:(id)arg1 atMark:(long long)arg2 ;
-(oneway void)getVoicesForLanguage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)getSpeechIsActiveForRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)supportedIPAPhonemeLanguages;
-(id)speechMarkupStringForType:(long long)arg1 voice:(id)arg2 string:(id)arg3 ;
-(BOOL)isVoiceValid:(id)arg1 ;
-(BOOL)employSpeechMarkupForType:(long long)arg1 language:(id)arg2 ;
-(id)lhPhonemesFromIPA:(id)arg1 language:(id)arg2 ;
-(id)phonemesFromIPA:(id)arg1 language:(id)arg2 ;
-(id)enclosedStringWithPhonemes:(id)arg1 ;
-(id)nashvilleVoiceIdentifier:(id)arg1 footprint:(long long)arg2 voiceType:(long long)arg3 gender:(long long)arg4 ;
-(id)nashvilleVoiceName:(id)arg1 footprint:(long long)arg2 voiceType:(long long)arg3 gender:(long long)arg4 ;
-(id)embeddedRateMarkupForVoice:(id)arg1 string:(id)arg2 rate:(double)arg3 ;
-(id)embeddedPitchMarkupForVoice:(id)arg1 string:(id)arg2 pitch:(double)arg3 ;
-(id)embeddedVolumeMarkupForVoice:(id)arg1 string:(id)arg2 volume:(double)arg3 ;
-(BOOL)isSiriService;
-(BOOL)isNashvilleService;
-(id)getVocalizerWithLanguage:(CFStringRef)arg1 defaultLanguage:(CFStringRef)arg2 reinitIfNecessary:(unsigned char)arg3 instanceToDestroy:(VE_HSAFE*)arg4 forceReinit:(unsigned char)arg5 voiceType:(long long)arg6 gender:(long long)arg7 footprint:(long long)arg8 voiceName:(CFStringRef)arg9 error:(unsigned*)arg10 ;
-(CFArrayRef)loadedVoiceResources;
-(id)getNewSpeechServerInstance;
-(void)nashvilleVoiceIdentifier:(id)arg1 footprint:(long long)arg2 voiceType:(long long)arg3 gender:(long long)arg4 voiceId:(id*)arg5 voiceName:(id*)arg6 ;
-(id)_ttsCopyVoiceNames:(id)arg1 type:(long long)arg2 queryingMobileAssets:(BOOL)arg3 ;
-(id)_behavesBadlyWithSpellMarkupForVoice:(id)arg1 string:(id)arg2 markupType:(long long)arg3 ;
-(BOOL)canInitializeSpeech:(id)arg1 ;
-(BOOL)requiresLHPPhonemes;
-(TTSSpeechServerInstance *)speechInitializationInstance;
-(void)setSpeechInitializationInstance:(TTSSpeechServerInstance *)arg1 ;
@end

