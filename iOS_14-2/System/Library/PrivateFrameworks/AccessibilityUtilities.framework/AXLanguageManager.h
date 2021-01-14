/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class AXDialectMap, NSMutableDictionary, NSArray, NSCharacterSet, NSLocale, NSString, NSSet;

@interface AXLanguageManager : NSObject {

	AXDialectMap* _dialectForSystemLanguage;
	AXDialectMap* _dialectForCurrentLocale;
	AXDialectMap* _dialectForCurrentRegion;
	os_unfair_lock_s _languageFallbackLock;
	NSMutableDictionary* _languageFallbacks;
	BOOL __unitTest_didUpdateForLocaleChange;
	NSArray* _langMaps;
	NSCharacterSet* _commonCharacters;
	NSLocale* _userLocale;

}

@property (nonatomic,retain) NSArray * langMaps;                                                   //@synthesize langMaps=_langMaps - In the implementation block
@property (nonatomic,copy) NSLocale * userLocale;                                                  //@synthesize userLocale=_userLocale - In the implementation block
@property (nonatomic,retain) NSCharacterSet * commonCharacters;                                    //@synthesize commonCharacters=_commonCharacters - In the implementation block
@property (assign,nonatomic,__weak) AXDialectMap * dialectForSystemLanguage; 
@property (assign,nonatomic,__weak) AXDialectMap * dialectForCurrentLocale; 
@property (assign,nonatomic,__weak) AXDialectMap * dialectForCurrentRegion; 
@property (assign,nonatomic) BOOL _unitTest_didUpdateForLocaleChange;                              //@synthesize _unitTest_didUpdateForLocaleChange=__unitTest_didUpdateForLocaleChange - In the implementation block
@property (nonatomic,readonly) NSString * systemLanguageID; 
@property (nonatomic,__weak,readonly) AXDialectMap * dialectForUserLocale; 
@property (nonatomic,readonly) NSSet * preferredLanguageIDsFromUserSelectedKeyboards; 
+(id)nonlocalizedNameForLanguage:(id)arg1 ;
+(id)sharedInstance;
+(id)doNotTranslateWords;
+(BOOL)voiceOverSupportedInCurrentLanguage;
+(id)commonPunctuationCharacters;
+(id)stringByReplacingEmojiCharactersWithEmojiDescriptions:(id)arg1 ;
+(id)nameForAlternativeVoiceIdentifier:(id)arg1 ;
+(id)dialectForAlternativeVoiceIdentifier:(id)arg1 ;
+(id)stringByReplacingFatWidthCharactersWithBasicCharacters:(id)arg1 ;
-(NSArray *)langMaps;
-(BOOL)isCharacterCommon:(unsigned short)arg1 ;
-(void)setUserLocale:(NSLocale *)arg1 ;
-(void)_handleUserLocaleDidChange:(id)arg1 ;
-(void)setCommonCharacters:(NSCharacterSet *)arg1 ;
-(id)_loadLangMaps;
-(AXDialectMap *)dialectForCurrentLocale;
-(AXDialectMap *)dialectForCurrentRegion;
-(void)updateCachedDialects;
-(NSCharacterSet *)commonCharacters;
-(id)outputLanguageIdentifierForLanguage:(id)arg1 ;
-(id)dialectsThatCanSpeakCharacter:(unsigned short)arg1 overridePreferredLanguages:(id)arg2 allowTransliteration:(BOOL)arg3 ;
-(id)dialectsThatCanSpeak:(/*^block*/id)arg1 dialectIsSecondary:(/*^block*/id)arg2 overridePreferredLanguages:(id)arg3 ;
-(id)dialectsThatCanSpeakString:(id)arg1 overridePreferredLanguages:(id)arg2 ;
-(NSSet *)preferredLanguageIDsFromUserSelectedKeyboards;
-(void)setDialectForSystemLanguage:(AXDialectMap *)arg1 ;
-(void)setDialectForCurrentLocale:(AXDialectMap *)arg1 ;
-(void)setDialectForCurrentRegion:(AXDialectMap *)arg1 ;
-(void)setLangMaps:(NSArray *)arg1 ;
-(id)descriptionOfWord:(id)arg1 forLanguage:(id)arg2 ;
-(id)characterSetForRanges:(id)arg1 ;
-(void)set_unitTest_didUpdateForLocaleChange:(BOOL)arg1 ;
-(BOOL)_unitTest_didUpdateForLocaleChange;
-(id)init;
-(AXDialectMap *)dialectForUserLocale;
-(id)dialectsThatCanSpeakCharacter:(unsigned short)arg1 ;
-(id)dialectsThatCanSpeakCharacter:(unsigned short)arg1 overridePreferredLanguages:(id)arg2 ;
-(id)dialectsThatCanSpeakString:(id)arg1 ;
-(id)dialectThatCanSpeakCharacter:(unsigned short)arg1 ;
-(id)ambiguousDialectsFromUserKeyboardPreferences;
-(BOOL)isStringComposedByCommonCharacters:(id)arg1 ;
-(BOOL)didUpdateForLocaleChange;
-(id)debugDescription;
-(id)description;
-(id)dialectForLanguageID:(id)arg1 ;
-(AXDialectMap *)dialectForSystemLanguage;
-(NSString *)systemLanguageID;
-(void)dealloc;
-(id)basicDescription;
-(NSLocale *)userLocale;
@end

