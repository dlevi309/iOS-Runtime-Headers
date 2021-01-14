/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
*/


@class NSLocale, NSString, SFSSVoiceAsset, SFSSResourceAsset;

@interface SFSpeechSynthesisVoice : NSObject {

	BOOL _isDefault;
	NSLocale* _locale;
	NSString* _gender;
	NSString* _name;
	SFSSVoiceAsset* _voiceAsset;
	SFSSResourceAsset* _resourceAsset;

}

@property (nonatomic,readonly) BOOL isDefault;                               //@synthesize isDefault=_isDefault - In the implementation block
@property (nonatomic,retain) SFSSVoiceAsset * voiceAsset;                    //@synthesize voiceAsset=_voiceAsset - In the implementation block
@property (nonatomic,retain) SFSSResourceAsset * resourceAsset;              //@synthesize resourceAsset=_resourceAsset - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                            //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) NSString * gender;                            //@synthesize gender=_gender - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
+(void)initialize;
+(id)supportedLocales;
+(id)supportedVoicesByLocale:(id)arg1 ;
+(id)getVoiceByName:(id)arg1 ;
+(id)getDefaultVoiceByLocale:(id)arg1 ;
-(NSLocale *)locale;
-(NSString *)name;
-(BOOL)isDefault;
-(NSString *)gender;
-(SFSSVoiceAsset *)voiceAsset;
-(void)setVoiceAsset:(SFSSVoiceAsset *)arg1 ;
-(void)setResourceAsset:(SFSSResourceAsset *)arg1 ;
-(SFSSResourceAsset *)resourceAsset;
-(id)init:(id)arg1 gender:(id)arg2 name:(id)arg3 isDefault:(BOOL)arg4 ;
@end

