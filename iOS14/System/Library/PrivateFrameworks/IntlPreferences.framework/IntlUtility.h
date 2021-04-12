/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences
*/


#import <IntlPreferences/IntlPreferences-Structs.h>
@class NSMutableArray;

@interface IntlUtility : NSObject {

	NSMutableArray* mBidiLanguagesArray;
	NSMutableArray* mBidiTestedLanguagesArray;

}
+(void)enumeratePreferredCalendarsForLocaleID:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(void)setPreferredLanguage:(id)arg1 forBundleID:(id)arg2 andRelaunchWithCompletion:(/*^block*/id)arg3 ;
+(void)unsubscribeFromAppLanguageChanges;
+(id)numberingSystemForLocaleID:(id)arg1 ;
+(id)_proposedOverrideLanguageFromLanguage:(id)arg1 forLocalizations:(id)arg2 preferredLanguages:(id)arg3 regionCode:(id)arg4 ;
+(BOOL)upgradeAppleLanguagesFrom:(id)arg1 to:(id)arg2 ;
+(id)_getXPCConnectionForLocalizationSwitcher;
+(id)preferredLanguagesForRegionWithoutFiltering:(id)arg1 ;
+(void)preferredLanguagesForBundleID:(id)arg1 reply:(/*^block*/id)arg2 ;
+(id)localeForCalendarID:(id)arg1 ;
+(id)defaultNumberingSystemForLocaleID:(id)arg1 ;
+(id)defaultCalendarForLocaleID:(id)arg1 ;
+(id)preferredLanguagesForRegion:(id)arg1 ;
+(BOOL)isLunarCalendarDefaultOn;
+(id)alternateContinentOfRegion:(id)arg1 ;
+(id)displayNameForNumberingSystemWithIdentifier:(id)arg1 localeIdentifier:(id)arg2 short:(BOOL)arg3 ;
+(id)sharedIntlUtility;
+(BOOL)isYearlessDate:(id)arg1 forCalendar:(id)arg2 ;
+(long long)formattingContextFromIUDisplayNameContext:(unsigned long long)arg1 ;
+(id)lunarCalendarsForLocaleID:(id)arg1 ;
+(void)setPreferredLanguage:(id)arg1 forBundleID:(id)arg2 ;
+(id)numberingSystemsFromArray:(id)arg1 forLocaleID:(id)arg2 ;
+(id)filterLanguageList:(id)arg1 forRegion:(id)arg2 fromLanguages:(id)arg3 ;
+(void)setYearlessYear:(id)arg1 forCalendar:(id)arg2 ;
+(id)normalizedLanguageIDFromString:(id)arg1 ;
+(id)parentLocaleIdentifierForIdentifier:(id)arg1 ;
+(BOOL)isLunarCalendarDefaultOnForLanguage:(id)arg1 locale:(id)arg2 ;
+(id)baseSystemLanguages;
+(id)numberingSystemsForLocaleID:(id)arg1 ;
+(id)languageIdentifierFromIdentifier:(id)arg1 withRegion:(id)arg2 ;
+(long long)yearlessYearForMonth:(long long)arg1 withCalendar:(id)arg2 ;
+(id)capitalizeFirstWordOfName:(id)arg1 accordingToLanguage:(id)arg2 ;
+(id)stdLanguageIDs;
+(id)baseLanguageIdentifierFromIdentifier:(id)arg1 ;
+(id)supportedCalendars;
+(id)restrictedCountryCodes;
+(BOOL)forceCapitalizationInLanguageLists;
+(void)_setPreferredLanguage:(id)arg1 forBundleID:(id)arg2 ;
+(void)subscribeToAppLanguageChanges:(/*^block*/id)arg1 ;
+(id)localeForCalendarID:(id)arg1 andLocale:(id)arg2 ;
+(id)perAppLanguageSelectionBundleIdentifiers;
+(id)preferredLanguagesFromLanguages:(id)arg1 byAddingFallbacksForRegion:(id)arg2 ;
+(int)UDisplayContextForIUDisplayNameContext:(unsigned long long)arg1 ;
+(id)preferredLunarCalendarForLocaleID:(id)arg1 ;
+(id)preferredLanguageForBundleID:(id)arg1 ;
+(id)shortDisplayNameForNumberingSystemWithIdentifier:(id)arg1 localeIdentifier:(id)arg2 ;
+(id)displayNameForNumberingSystemWithIdentifier:(id)arg1 localeIdentifier:(id)arg2 ;
+(id)_preferredLanguagesForBundleID:(id)arg1 ;
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

