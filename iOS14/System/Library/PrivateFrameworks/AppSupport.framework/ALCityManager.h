/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
*/


#import <AppSupport/AppSupport-Structs.h>
@class CPSearchMatcher, NSRecursiveLock, NSDate, ALSCGreenClient;

@interface ALCityManager : NSObject {

	sqlite3Ref _db;
	sqlite3Ref _localizedDb;
	CPSearchMatcher* _citySearchMatcher;
	NSRecursiveLock* _databaseAccessRecursiveLock;
	BOOL _greenKey1ValueCache;
	BOOL _greenKey2ValueCache;
	BOOL _greenKey3ValueCache;
	NSDate* _greenKeyValueCacheExpirationDate;
	ALSCGreenClient* _greenClient;

}

@property (readonly) CPSearchMatcher * citySearchMatcher;              //@synthesize citySearchMatcher=_citySearchMatcher - In the implementation block
+(id)newCitiesByIdentifierMap:(id)arg1 ;
+(id)sharedManager;
+(id)_localeDictionaryFromSQLRow:(char**)arg1 ;
+(CFArrayRef)legacyCityForCity:(id)arg1 ;
-(id)allLocales;
-(id)defaultCityForTimeZone:(id)arg1 localeCode:(id)arg2 ;
-(id)init;
-(id)defaultCitiesForLocaleCode:(id)arg1 options:(int)arg2 ;
-(id)cityForClassicIdentifier:(id)arg1 ;
-(id)_cityForTimeZone:(id)arg1 localeCode:(id)arg2 ;
-(id)defaultCitiesForLocaleCode:(id)arg1 ;
-(id)citiesWithTimeZone:(id)arg1 ;
-(id)localeWithCode:(id)arg1 ;
-(void)localizeCities:(id)arg1 ;
-(CPSearchMatcher *)citySearchMatcher;
-(id)citiesMatchingQualifier:(id)arg1 ;
-(id)defaultCityForTimeZone:(id)arg1 ;
-(void)_whileDatabaseLocked_ensureGreenKeyValueCaches;
-(id)citiesMatchingName:(id)arg1 localized:(BOOL)arg2 ;
-(id)bestCityForLegacyCity:(CFArrayRef)arg1 ;
-(void)_whileDatabaseLocked_modifyCityForGreen:(id)arg1 ;
-(id)_cityForClassicIdentifier:(id)arg1 commaSearchOptions:(unsigned long long)arg2 ;
-(id)_defaultCityForTimeZone:(id)arg1 localeCode:(id)arg2 ;
-(id)citiesWithIdentifiers:(id)arg1 ;
-(id)defaultCitiesShownInWorldClock;
-(id)citiesMatchingName:(id)arg1 ;
-(id)_whileDatabaseLocked_localeCodesMatchingQualifier:(id)arg1 ;
-(id)allCities;
-(void)dealloc;
@end

