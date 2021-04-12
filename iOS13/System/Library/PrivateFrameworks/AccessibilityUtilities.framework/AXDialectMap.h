/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)debugDescription;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(NSString *)regionID;
-(NSString *)localeNameInCurrentLocale;
-(NSString *)specificLanguageID;
-(id)basicDescription;
-(void)setVoiceName:(NSString *)arg1 ;
-(void)setSpeakableCharacters:(NSCharacterSet *)arg1 ;
-(void)setSecondaryLanguageRange:(NSCharacterSet *)arg1 ;
-(void)setSpecificLanguageID:(NSString *)arg1 ;
-(AXLangMap *)langMap;
-(NSString *)voiceName;
-(AXLanguageManager *)langManager;
-(NSCharacterSet *)secondaryLanguageRange;
-(NSCharacterSet *)speakableCharacters;
-(BOOL)speakingRequiresTransliteration;
-(id)_transliteratedSpeechCharacters;
-(BOOL)canSpeakCharacter:(unsigned short)arg1 ;
-(BOOL)_languageIsKorean;
-(id)_stringByTransliterationHanjaToHangul:(id)arg1 ;
-(id)initWithLocale:(id)arg1 voiceName:(id)arg2 specificLanguageID:(id)arg3 speakableCharacters:(id)arg4 secondaryLanguageRange:(id)arg5 ;
-(NSString *)languageNameInCurrentLocale;
-(NSString *)languageNameInNativeLocale;
-(NSString *)languageNameAndLocaleInCurrentLocale;
-(NSString *)languageNameAndLocaleInNativeLocale;
-(BOOL)isDialectSecondaryForCharacter:(unsigned short)arg1 ;
-(BOOL)canSpeakLongCharacter:(unsigned)arg1 ;
-(BOOL)canSpeakString:(id)arg1 ;
-(id)transliteratedStringForString:(id)arg1 ;
-(void)setLangMap:(AXLangMap *)arg1 ;
@end

