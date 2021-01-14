/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/


@class AXSSDialectMap, NSArray, NSLocale, NSCharacterSet, NSString;

@interface AXSSLanguageManager : NSObject {

	AXSSDialectMap* _dialectForSystemLanguage;
	AXSSDialectMap* _dialectForCurrentLocale;
	AXSSDialectMap* _dialectForCurrentRegion;
	NSArray* _languageMaps;
	NSLocale* _userLocale;
	NSCharacterSet* _commonCharacters;

}

@property (nonatomic,retain) NSArray * languageMaps;                                 //@synthesize languageMaps=_languageMaps - In the implementation block
@property (nonatomic,copy) NSLocale * userLocale;                                    //@synthesize userLocale=_userLocale - In the implementation block
@property (nonatomic,retain) NSCharacterSet * commonCharacters;                      //@synthesize commonCharacters=_commonCharacters - In the implementation block
@property (nonatomic,retain) AXSSDialectMap * dialectForSystemLanguage;              //@synthesize dialectForSystemLanguage=_dialectForSystemLanguage - In the implementation block
@property (nonatomic,retain) AXSSDialectMap * dialectForCurrentLocale;               //@synthesize dialectForCurrentLocale=_dialectForCurrentLocale - In the implementation block
@property (nonatomic,retain) AXSSDialectMap * dialectForCurrentRegion;               //@synthesize dialectForCurrentRegion=_dialectForCurrentRegion - In the implementation block
@property (nonatomic,readonly) NSString * systemLanguageID; 
@property (nonatomic,readonly) AXSSDialectMap * dialectForUserLocale; 
+(id)shared;
+(id)commonPunctuationCharacters;
+(id)stringByReplacingFatWidthCharactersWithBasicCharacters:(id)arg1 ;
-(BOOL)isCharacterCommon:(unsigned short)arg1 ;
-(void)setUserLocale:(NSLocale *)arg1 ;
-(void)_handleUserLocaleDidChange:(id)arg1 ;
-(void)setCommonCharacters:(NSCharacterSet *)arg1 ;
-(AXSSDialectMap *)dialectForCurrentLocale;
-(AXSSDialectMap *)dialectForCurrentRegion;
-(void)updateCachedDialects;
-(NSCharacterSet *)commonCharacters;
-(void)setDialectForSystemLanguage:(AXSSDialectMap *)arg1 ;
-(void)setDialectForCurrentLocale:(AXSSDialectMap *)arg1 ;
-(void)setDialectForCurrentRegion:(AXSSDialectMap *)arg1 ;
-(id)init;
-(AXSSDialectMap *)dialectForUserLocale;
-(id)dialectsThatCanSpeakCharacter:(unsigned short)arg1 ;
-(id)dialectsThatCanSpeakString:(id)arg1 ;
-(id)dialectThatCanSpeakCharacter:(unsigned short)arg1 ;
-(BOOL)isStringComposedByCommonCharacters:(id)arg1 ;
-(id)description;
-(id)dialectForLanguageID:(id)arg1 ;
-(AXSSDialectMap *)dialectForSystemLanguage;
-(NSString *)systemLanguageID;
-(id)_preferredLanguage;
-(NSLocale *)userLocale;
-(NSArray *)languageMaps;
-(id)dialectForSpeechSynthesisVoiceID:(id)arg1 ;
-(void)setLanguageMaps:(NSArray *)arg1 ;
@end

