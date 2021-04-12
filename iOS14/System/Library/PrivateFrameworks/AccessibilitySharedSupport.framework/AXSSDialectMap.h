/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/


@class AXSSLanguageMap, NSLocale, NSString, NSCharacterSet;

@interface AXSSDialectMap : NSObject {

	AXSSLanguageMap* _languageMap;
	NSLocale* _locale;
	NSString* _specificLanguageID;
	NSString* _voiceName;
	NSString* _voiceIdentifier;
	NSCharacterSet* _speakableCharacters;
	NSCharacterSet* _secondaryLanguageRange;

}

@property (nonatomic,retain) NSLocale * locale;                                    //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) NSString * specificLanguageID;                          //@synthesize specificLanguageID=_specificLanguageID - In the implementation block
@property (nonatomic,copy) NSString * voiceName;                                   //@synthesize voiceName=_voiceName - In the implementation block
@property (nonatomic,copy) NSString * voiceIdentifier;                             //@synthesize voiceIdentifier=_voiceIdentifier - In the implementation block
@property (nonatomic,copy) NSCharacterSet * speakableCharacters;                   //@synthesize speakableCharacters=_speakableCharacters - In the implementation block
@property (nonatomic,retain) NSCharacterSet * secondaryLanguageRange;              //@synthesize secondaryLanguageRange=_secondaryLanguageRange - In the implementation block
@property (nonatomic,__weak,readonly) AXSSLanguageMap * languageMap;               //@synthesize languageMap=_languageMap - In the implementation block
@property (nonatomic,copy,readonly) NSString * regionID; 
-(NSLocale *)locale;
-(void)setVoiceName:(NSString *)arg1 ;
-(void)setSpeakableCharacters:(NSCharacterSet *)arg1 ;
-(void)setSecondaryLanguageRange:(NSCharacterSet *)arg1 ;
-(void)setSpecificLanguageID:(NSString *)arg1 ;
-(NSString *)voiceName;
-(NSCharacterSet *)secondaryLanguageRange;
-(NSCharacterSet *)speakableCharacters;
-(BOOL)canSpeakCharacter:(unsigned short)arg1 ;
-(BOOL)isDialectSecondaryForCharacter:(unsigned short)arg1 ;
-(BOOL)canSpeakString:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(AXSSLanguageMap *)languageMap;
-(id)description;
-(NSString *)regionID;
-(NSString *)voiceIdentifier;
-(void)setVoiceIdentifier:(NSString *)arg1 ;
-(NSString *)specificLanguageID;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithLocale:(id)arg1 voiceName:(id)arg2 specificLanguageID:(id)arg3 voiceIdentifier:(id)arg4 speakableCharacters:(id)arg5 secondaryLanguageRange:(id)arg6 ;
@end

