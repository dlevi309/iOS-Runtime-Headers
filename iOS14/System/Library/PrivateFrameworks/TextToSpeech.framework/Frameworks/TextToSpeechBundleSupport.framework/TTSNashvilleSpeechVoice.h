/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isFallbackDefault;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)voiceType;
-(BOOL)isDefault;
-(void)setVoiceType:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)excludeInAvailableVoiceList;
-(BOOL)isCombinedFootprint;
-(void)setOverrideDefault:(BOOL)arg1 ;
-(void)setOverrideFallbackDefault:(BOOL)arg1 ;
-(void)setOverrideExcludeInAvailableVoiceList:(BOOL)arg1 ;
-(BOOL)overrideDefault;
-(BOOL)overrideFallbackDefault;
-(BOOL)overrideExcludeInAvailableVoiceList;
@end

