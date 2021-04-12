/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class NSString, NSArray, NSCache, NSMutableSet;

@interface SGPatterns : NSObject {

	NSString* _classKey;
	NSArray* _langResolutionOrder;
	NSCache* _compiledRegexes2;
	NSString* _language;
	NSMutableSet* _regexpKeysSeen;
	int _localLanguageVersion;

}
+(void)initialize;
+(id)calculateCurrentLanguagesFromPreferredLocaleCodes:(id)arg1 ;
+(id)patternsForClass:(Class)arg1 ;
+(void)_reinstateDeath;
+(id)fallbackLanguageCodeForCountryCode:(id)arg1 ;
+(id)languagePartOfLanguageCode:(id)arg1 ;
+(void)useAllLanguagesAtOnce:(BOOL)arg1 ;
+(void)resetToDefaultPatternsForTesting;
+(id)countryCodeFromLanguageCode:(id)arg1 ;
+(void)pauseCacheEvictionTemporarily;
+(void)changeLanguageOrPatternData;
+(id)patternsForIdentifier:(id)arg1 ;
+(void)setPatternsDictForTesting:(id)arg1 ;
+(id)calculateLangResolutionOrder;
+(void)forceLanguagesTo:(id)arg1 ;
+(void)clearAllRegexCaches;
-(id)init;
-(void)_becomeImmuneToDeath;
-(id)rawValuesForKey:(id)arg1 ;
-(id)rawValueOrDataForKey:(id)arg1 ;
-(void)resetIfNeeded;
-(id)rawValueForKey:(id)arg1 ;
-(id)stringSetMatcherForKey:(id)arg1 ;
-(void)_clearRegexCache;
-(id)regex2ForKey:(id)arg1 ;
-(void)dealloc;
@end

