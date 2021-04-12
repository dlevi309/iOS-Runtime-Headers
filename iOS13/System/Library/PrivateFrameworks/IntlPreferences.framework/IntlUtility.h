/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences
*/


#import <IntlPreferences/IntlPreferences-Structs.h>
@class NSMutableArray;

@interface IntlUtility : NSObject {

	NSMutableArray* mBidiLanguagesArray;
	NSMutableArray* mBidiTestedLanguagesArray;

}
+(void)setYearlessYear:(id)arg1 forCalendar:(id)arg2 ;
+(BOOL)isYearlessDate:(id)arg1 forCalendar:(id)arg2 ;
+(id)preferredLanguagesForRegionWithoutFiltering:(id)arg1 ;
+(id)filterLanguageList:(id)arg1 forRegion:(id)arg2 fromLanguages:(id)arg3 ;
+(id)restrictedCountryCodes;
+(id)sharedIntlUtility;
+(id)preferredLanguageForBundleID:(id)arg1 ;
+(id)preferredLunarCalendarForLocaleID:(id)arg1 ;
+(id)lunarCalendarsForLocaleID:(id)arg1 ;
+(id)localeForCalendarID:(id)arg1 ;
+(id)preferredLanguagesForRegion:(id)arg1 ;
+(BOOL)isLunarCalendarDefaultOn;
+(id)numberingSystemForLocaleID:(id)arg1 ;
+(id)baseSystemLanguages;
+(id)languageIdentifierFromIdentifier:(id)arg1 withRegion:(id)arg2 ;
+(id)normalizedLanguageIDFromString:(id)arg1 ;
+(BOOL)forceCapitalizationInLanguageLists;
+(id)baseLanguageIdentifierFromIdentifier:(id)arg1 ;
+(id)stdLanguageIDs;
+(void)enumeratePreferredCalendarsForLocaleID:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(id)localeForCalendarID:(id)arg1 andLocale:(id)arg2 ;
+(BOOL)isLunarCalendarDefaultOnForLanguage:(id)arg1 locale:(id)arg2 ;
+(id)defaultCalendarForLocaleID:(id)arg1 ;
+(id)supportedCalendars;
+(long long)yearlessYearForMonth:(long long)arg1 withCalendar:(id)arg2 ;
+(id)numberingSystemsForLocaleID:(id)arg1 ;
+(id)displayNameForNumberingSystemWithIdentifier:(id)arg1 localeIdentifier:(id)arg2 short:(BOOL)arg3 ;
+(id)capitalizeFirstWordOfName:(id)arg1 accordingToLanguage:(id)arg2 ;
+(int)UDisplayContextForIUDisplayNameContext:(unsigned long long)arg1 ;
+(id)parentLocaleIdentifierForIdentifier:(id)arg1 ;
+(long long)formattingContextFromIUDisplayNameContext:(unsigned long long)arg1 ;
+(id)_proposedOverrideLanguageFromLanguage:(id)arg1 forLocalizations:(id)arg2 preferredLanguages:(id)arg3 regionCode:(id)arg4 ;
+(void)_setPreferredLanguage:(id)arg1 forBundleID:(id)arg2 ;
+(id)alternateContinentOfRegion:(id)arg1 ;
+(id)numberingSystemsFromArray:(id)arg1 forLocaleID:(id)arg2 ;
+(id)displayNameForNumberingSystemWithIdentifier:(id)arg1 localeIdentifier:(id)arg2 ;
+(id)shortDisplayNameForNumberingSystemWithIdentifier:(id)arg1 localeIdentifier:(id)arg2 ;
+(id)defaultNumberingSystemForLocaleID:(id)arg1 ;
+(id)preferredLanguagesFromLanguages:(id)arg1 byAddingFallbacksForRegion:(id)arg2 ;
+(BOOL)upgradeAppleLanguagesFrom:(id)arg1 to:(id)arg2 ;
+(void)setPreferredLanguage:(id)arg1 forBundleID:(id)arg2 ;
+(void)setPreferredLanguage:(id)arg1 forBundleID:(id)arg2 andRelaunchWithCompletion:(/*^block*/id)arg3 ;
-(id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 capitalization:(unsigned long long)arg3 ;
-(id)ICUdisplayNameForLanguage:(id)arg1 capitalization:(ULocaleDisplayNamesRef)arg2 ;
-(id)displayNameForLanguage:(id)arg1 context:(unsigned long long)arg2 displayLanguage:(id)arg3 ;
-(id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 capitalization:(unsigned long long)arg3 short:(BOOL)arg4 ;
-(id)displayNameForLabelForLunarCalendarID:(id)arg1 displayLanguage:(id)arg2 ;
-(id)languageList;
-(id)displayNameForDialect:(id)arg1 context:(unsigned long long)arg2 displayLanguage:(id)arg3 ;
-(id)displayNameForLocale:(id)arg1 displayLanguage:(id)arg2 capitalization:(unsigned long long)arg3 short:(BOOL)arg4 ;
-(BOOL)canRenderLanguage:(id)arg1 ;
-(id)localizedNameForScript:(short)arg1 ;
-(id)localizedLanguageForLanguage:(id)arg1 ;
-(id)displayNameForNormalizedLanguage:(id)arg1 context:(unsigned long long)arg2 displayLanguage:(id)arg3 ;
@end

