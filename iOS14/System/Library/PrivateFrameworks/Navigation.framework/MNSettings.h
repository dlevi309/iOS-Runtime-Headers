/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MNSettings : NSObject <NSSecureCoding> {

	unsigned long long _voiceVolume;
	unsigned long long _distanceUnits;
	BOOL _pauseSpokenAudio;
	BOOL _muteSpeechOverride;
	BOOL _speechEnabled;
	unsigned long long _maxAlternateRoutesCount;
	BOOL _beepBeforeInstruction;
	NSString* _voiceLanguage;
	BOOL _shouldUseGuidanceEventManager;

}

@property (nonatomic,readonly) unsigned long long voiceVolume;                          //@synthesize voiceVolume=_voiceVolume - In the implementation block
@property (nonatomic,readonly) unsigned long long distanceUnits;                        //@synthesize distanceUnits=_distanceUnits - In the implementation block
@property (nonatomic,readonly) BOOL pauseSpokenAudio;                                   //@synthesize pauseSpokenAudio=_pauseSpokenAudio - In the implementation block
@property (nonatomic,readonly) BOOL muteSpeechOverride;                                 //@synthesize muteSpeechOverride=_muteSpeechOverride - In the implementation block
@property (nonatomic,readonly) BOOL speechEnabled;                                      //@synthesize speechEnabled=_speechEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long maxAlternateRoutesCount;              //@synthesize maxAlternateRoutesCount=_maxAlternateRoutesCount - In the implementation block
@property (nonatomic,readonly) BOOL beepBeforeInstruction;                              //@synthesize beepBeforeInstruction=_beepBeforeInstruction - In the implementation block
@property (nonatomic,readonly) NSString * voiceLanguage; 
@property (nonatomic,readonly) BOOL shouldUseGuidanceEventManager;                      //@synthesize shouldUseGuidanceEventManager=_shouldUseGuidanceEventManager - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)pauseSpokenAudio;
-(BOOL)speechEnabled;
-(unsigned long long)distanceUnits;
-(unsigned long long)voiceVolume;
-(BOOL)shouldUseGuidanceEventManager;
-(BOOL)muteSpeechOverride;
-(NSString *)voiceLanguage;
-(void)setVoiceLanguage:(NSString *)arg1 ;
-(unsigned long long)maxAlternateRoutesCount;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)beepBeforeInstruction;
-(id)initWithCoder:(id)arg1 ;
@end

