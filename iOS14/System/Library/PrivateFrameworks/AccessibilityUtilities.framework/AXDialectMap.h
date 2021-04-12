/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@class AXLangMap, NSString, NSLocale, NSCharacterSet, AXLanguageManager;

@interface AXDialectMap : NSObject {

	AXLangMap* _langMap;
	NSString* _voiceName;
	NSLocale* _locale;
	NSString* _specificLanguageID;
	NSCharacterSet* _speakableCharacters;
	NSCharacterSet* _secondaryLanguageRange;

}

@property (assign,nonatomic,__weak) AXLangMap * langMap;                                     //@synthesize langMap=_langMap - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                              //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) NSString * voiceName;                                             //@synthesize voiceName=_voiceName - In the implementation block
@property (nonatomic,retain) NSCharacterSet * speakableCharacters;                           //@synthesize speakableCharacters=_speakableCharacters - In the implementation block
@property (nonatomic,copy) NSString * specificLanguageID;                                    //@synthesize specificLanguageID=_specificLanguageID - In the implementation block
@property (nonatomic,readonly) AXLanguageManager * langManager; 
@property (nonatomic,retain) NSCharacterSet * secondaryLanguageRange;                        //@synthesize secondaryLanguageRange=_secondaryLanguageRange - In the implementation block
@property (nonatomic,readonly) NSString * languageNameInCurrentLocale; 
@property (nonatomic,readonly) NSString * languageNameInNativeLocale; 
@property (nonatomic,readonly) NSString * languageNameAndLocaleInCurrentLocale; 
@property (nonatomic,readonly) NSString * localeNameInCurrentLocale; 
@property (nonatomic,readonly) NSString * languageNameAndLocaleInNativeLocale; 
@property (nonatomic,readonly) NSString * regionID; 
+(id)_hanjaCharacterSet;
+(id)_hanjaToHangulMap;
-(NSLocale *)locale;
-(void)setVoiceName:(NSString *)arg1 ;
-(void)setSpeakableCharacters:(NSCharacterSet *)arg1 ;
-(void)setSecondaryLanguageRange:(NSCharacterSet *)arg1 ;
-(void)setSpecificLanguageID:(NSString *)arg1 ;
-(NSString *)voiceName;
-(AXLanguageManager *)langManager;
-(NSCharacterSet *)secondaryLanguageRange;
-(BOOL)canSpeakCharacter:(unsigned short)arg1 allowTransliteration:(BOOL)arg2 ;
-(NSCharacterSet *)speakableCharacters;
-(BOOL)speakingRequiresTransliteration;
-(id)_transliteratedSpeechCharacters;
-(BOOL)canSpeakString:(id)arg1 allowsTransliteration:(BOOL)arg2 ;
-(BOOL)_languageIsKorean;
-(id)_stringByTransliterationHanjaToHangul:(id)arg1 ;
-(id)initWithLocale:(id)arg1 voiceName:(id)arg2 specificLanguageID:(id)arg3 speakableCharacters:(id)arg4 secondaryLanguageRange:(id)arg5 ;
-(BOOL)canSpeakCharacter:(unsigned short)arg1 ;
-(NSString *)languageNameInCurrentLocale;
-(NSString *)languageNameInNativeLocale;
-(NSString *)languageNameAndLocaleInCurrentLocale;
-(NSString *)languageNameAndLocaleInNativeLocale;
-(BOOL)isDialectSecondaryForCharacter:(unsigned short)arg1 ;
-(BOOL)canSpeakLongCharacter:(unsigned)arg1 ;
-(BOOL)canSpeakString:(id)arg1 ;
-(id)transliteratedStringForString:(id)arg1 ;
-(void)setLangMap:(AXLangMap *)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)debugDescription;
-(AXLangMap *)langMap;
-(id)description;
-(NSString *)localeNameInCurrentLocale;
-(NSString *)regionID;
-(NSString *)specificLanguageID;
-(id)basicDescription;
@end

