/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSArray, NSString, NSDictionary, NSNumber;

@interface AFLanguageDetectionUserContext : NSObject <NSSecureCoding, NSCopying> {

	NSMutableDictionary* _lidUserContext;
	unsigned _userContextChangeBit;
	BOOL _simulateLanguageDetectorAssetsAvailability;
	NSArray* _simulatingLanguageCodes;
	NSArray* _finalDictationLanguages;
	NSMutableDictionary* _dictationLanguageMappingCache;
	BOOL _languageToggled;
	NSString* _currentKeyboard;
	NSString* _primaryLanguageCode;
	NSDictionary* _languageCodeOverrides;
	NSString* _prevMessageLanguage;
	NSString* _globalLastUsedKeyboard;
	NSArray* _multiLingualKeyboardLanguages;
	NSArray* _keyboardConvoRecentMessages;
	NSArray* _dictationLanguages;
	NSDictionary* _keyboardConversationLanguagePriors;
	NSDictionary* _keyboardGlobalLanguagePriors;
	NSNumber* _dictationInputOrigin;

}

@property (nonatomic,copy) NSString * currentKeyboard;                                                                  //@synthesize currentKeyboard=_currentKeyboard - In the implementation block
@property (nonatomic,copy) NSString * primaryLanguageCode;                                                              //@synthesize primaryLanguageCode=_primaryLanguageCode - In the implementation block
@property (nonatomic,copy) NSDictionary * languageCodeOverrides;                                                        //@synthesize languageCodeOverrides=_languageCodeOverrides - In the implementation block
@property (assign,setter=setWasLanguageToggled:,getter=wasLanguageToggled,nonatomic) BOOL languageToggled;              //@synthesize languageToggled=_languageToggled - In the implementation block
@property (nonatomic,copy) NSString * prevMessageLanguage;                                                              //@synthesize prevMessageLanguage=_prevMessageLanguage - In the implementation block
@property (nonatomic,copy) NSString * globalLastUsedKeyboard;                                                           //@synthesize globalLastUsedKeyboard=_globalLastUsedKeyboard - In the implementation block
@property (nonatomic,copy) NSArray * multiLingualKeyboardLanguages;                                                     //@synthesize multiLingualKeyboardLanguages=_multiLingualKeyboardLanguages - In the implementation block
@property (nonatomic,copy) NSArray * keyboardConvoRecentMessages;                                                       //@synthesize keyboardConvoRecentMessages=_keyboardConvoRecentMessages - In the implementation block
@property (nonatomic,copy) NSArray * dictationLanguages;                                                                //@synthesize dictationLanguages=_dictationLanguages - In the implementation block
@property (nonatomic,copy) NSDictionary * keyboardConversationLanguagePriors;                                           //@synthesize keyboardConversationLanguagePriors=_keyboardConversationLanguagePriors - In the implementation block
@property (nonatomic,copy) NSDictionary * keyboardGlobalLanguagePriors;                                                 //@synthesize keyboardGlobalLanguagePriors=_keyboardGlobalLanguagePriors - In the implementation block
@property (nonatomic,copy) NSNumber * dictationInputOrigin;                                                             //@synthesize dictationInputOrigin=_dictationInputOrigin - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultContextWithPrimaryLanguage:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)context;
-(void)setDictationLanguages:(NSArray *)arg1 ;
-(void)setWasLanguageToggled:(BOOL)arg1 ;
-(void)setPrimaryLanguageCode:(NSString *)arg1 ;
-(void)setMultiLingualKeyboardLanguages:(NSArray *)arg1 ;
-(void)setGlobalLastUsedKeyboard:(NSString *)arg1 ;
-(void)setKeyboardConvoRecentMessages:(NSArray *)arg1 ;
-(void)setPrevMessageLanguage:(NSString *)arg1 ;
-(void)setDictationInputOrigin:(NSNumber *)arg1 ;
-(id)userContextLanguageCodeForKeyboardLangauge:(id)arg1 overrideLanguageCode:(id)arg2 ;
-(NSArray *)dictationLanguages;
-(NSString *)currentKeyboard;
-(void)setCurrentKeyboard:(NSString *)arg1 ;
-(NSString *)primaryLanguageCode;
-(void)_removeContextValueForKey:(id)arg1 context:(id)arg2 ;
-(void)_updateContextValue:(id)arg1 forKey:(id)arg2 context:(id)arg3 ;
-(id)getSiriDictationLanguagesFromLanguages:(id)arg1 ;
-(void)_setContextValue:(id)arg1 forKey:(id)arg2 context:(id)arg3 ;
-(id)siriDictationLanguageForLanguage:(id)arg1 ;
-(id)priorsByReplacingKeyboardLanguage:(id)arg1 ;
-(id)languageDetectorUserContext;
-(void)_setFinalFilteredDictationLanguages:(id)arg1 ;
-(void)_setDictationLanguageCodeMappingCache:(id)arg1 ;
-(void)setKeyboardConversationLanguagePriors:(NSDictionary *)arg1 ;
-(void)setKeyboardGlobalLanguagePriors:(NSDictionary *)arg1 ;
-(void)setLanguageCodeOverrides:(NSDictionary *)arg1 ;
-(void)setSimulatingLanguageCodes:(id)arg1 ;
-(void)setShouldSimulateLanguageDetectorAssetsAvailability:(BOOL)arg1 ;
-(void)_setUserContextChangeBit:(unsigned)arg1 ;
-(void)_setLanguageDetectorContext:(id)arg1 ;
-(BOOL)isUpdateAvailableForLanguageDetectorContext;
-(unsigned)languageDetectorContextChangeBits;
-(id)getContextForAnalytics;
-(id)getDictationLanguagesForSupportedLocales:(id)arg1 error:(id*)arg2 ;
-(id)finalFilteredDictationLanguages;
-(BOOL)shouldSimulateLanguageDetectorAssetsAvailability;
-(id)simulatingLanguageCodes;
-(NSDictionary *)languageCodeOverrides;
-(BOOL)wasLanguageToggled;
-(NSString *)prevMessageLanguage;
-(NSString *)globalLastUsedKeyboard;
-(NSArray *)multiLingualKeyboardLanguages;
-(NSArray *)keyboardConvoRecentMessages;
-(NSDictionary *)keyboardConversationLanguagePriors;
-(NSDictionary *)keyboardGlobalLanguagePriors;
-(NSNumber *)dictationInputOrigin;
@end
