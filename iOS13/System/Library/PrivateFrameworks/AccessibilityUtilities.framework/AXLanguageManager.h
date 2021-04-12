/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@class AXDialectMap, NSArray, NSCharacterSet, NSLocale, NSString, NSSet;

@interface AXLanguageManager : NSObject {

	AXDialectMap* _dialectForSystemLanguage;
	AXDialectMap* _dialectForCurrentLocale;
	AXDialectMap* _dialectForCurrentRegion;
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
+(id)sharedInstance;
+(id)stringByReplacingFatWidthCharactersWithBasicCharacters:(id)arg1 ;
+(id)nonlocalizedNameForLanguage:(id)arg1 ;
+(BOOL)voiceOverSupportedInCurrentLanguage;
+(id)commonPunctuationCharacters;
+(id)doNotTranslateWords;
+(id)stringByReplacingEmojiCharactersWithEmojiDescriptions:(id)arg1 ;
+(id)nameForAlternativeVoiceIdentifier:(id)arg1 ;
+(id)dialectForAlternativeVoiceIdentifier:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)dialectForLanguageID:(id)arg1 ;
-(AXDialectMap *)dialectForSystemLanguage;
-(NSString *)systemLanguageID;
-(id)basicDescription;
-(NSLocale *)userLocale;
-(BOOL)isCharacterCommon:(unsigned short)arg1 ;
-(void)setUserLocale:(NSLocale *)arg1 ;
-(void)_handleUserLocaleDidChange:(id)arg1 ;
-(void)setCommonCharacters:(NSCharacterSet *)arg1 ;
-(AXDialectMap *)dialectForCurrentLocale;
-(AXDialectMap *)dialectForCurrentRegion;
-(id)_loadLangMaps;
-(void)updateCachedDialects;
-(NSArray *)langMaps;
-(id)dialectsThatCanSpeakCharacter:(unsigned short)arg1 ;
-(NSSet *)preferredLanguageIDsFromUserSelectedKeyboards;
-(NSCharacterSet *)commonCharacters;
-(void)setDialectForSystemLanguage:(AXDialectMap *)arg1 ;
-(void)setDialectForCurrentLocale:(AXDialectMap *)arg1 ;
-(void)setDialectForCurrentRegion:(AXDialectMap *)arg1 ;
-(id)characterSetForRanges:(id)arg1 ;
-(void)set_unitTest_didUpdateForLocaleChange:(BOOL)arg1 ;
-(BOOL)_unitTest_didUpdateForLocaleChange;
-(AXDialectMap *)dialectForUserLocale;
-(id)dialectsThatCanSpeakString:(id)arg1 ;
-(id)dialectThatCanSpeakCharacter:(unsigned short)arg1 ;
-(id)ambiguousDialectsFromUserKeyboardPreferences;
-(BOOL)isStringComposedByCommonCharacters:(id)arg1 ;
-(id)descriptionOfWord:(id)arg1 forLanguage:(id)arg2 ;
-(BOOL)didUpdateForLocaleChange;
-(void)setLangMaps:(NSArray *)arg1 ;
@end

