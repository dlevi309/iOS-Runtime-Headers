/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
*/

#import <TextToSpeechBundleSupport/TextToSpeechBundleSupport-Structs.h>
#import <TextToSpeech/TTSSpeechVoice.h>

@interface TTSNashvilleSpeechVoice : TTSSpeechVoice {

	BOOL _overrideDefault;
	BOOL _overrideFallbackDefault;
	BOOL _overrideExcludeInAvailableVoiceList;
	long long _voiceType;

}

@property (assign,nonatomic) long long voiceType;                                   //@synthesize voiceType=_voiceType - In the implementation block
@property (assign,nonatomic) BOOL overrideDefault;                                  //@synthesize overrideDefault=_overrideDefault - In the implementation block
@property (assign,nonatomic) BOOL overrideFallbackDefault;                          //@synthesize overrideFallbackDefault=_overrideFallbackDefault - In the implementation block
@property (assign,nonatomic) BOOL overrideExcludeInAvailableVoiceList;              //@synthesize overrideExcludeInAvailableVoiceList=_overrideExcludeInAvailableVoiceList - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isDefault;
-(BOOL)isFallbackDefault;
-(void)setVoiceType:(long long)arg1 ;
-(long long)voiceType;
-(BOOL)isCombinedFootprint;
-(BOOL)excludeInAvailableVoiceList;
-(void)setOverrideDefault:(BOOL)arg1 ;
-(void)setOverrideFallbackDefault:(BOOL)arg1 ;
-(void)setOverrideExcludeInAvailableVoiceList:(BOOL)arg1 ;
-(BOOL)overrideDefault;
-(BOOL)overrideFallbackDefault;
-(BOOL)overrideExcludeInAvailableVoiceList;
@end

