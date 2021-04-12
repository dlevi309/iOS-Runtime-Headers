/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)sharedManager;
+(id)newCitiesByIdentifierMap:(id)arg1 ;
+(id)_localeDictionaryFromSQLRow:(char**)arg1 ;
+(id)_displayStringForTaiwanRegionWithKey2Value:(BOOL)arg1 ;
+(CFArrayRef)legacyCityForCity:(id)arg1 ;
+(id)displayStringForHongKongSARChina;
+(id)displayStringForHongKongSAR;
+(id)displayStringForMacaoSARChina;
+(id)displayStringForMacaoSAR;
+(id)displayStringForTaiwanRegion;
-(id)init;
-(void)dealloc;
-(id)citiesMatchingQualifier:(id)arg1 ;
-(void)localizeCities:(id)arg1 ;
-(id)citiesMatchingName:(id)arg1 localized:(BOOL)arg2 ;
-(void)_whileDatabaseLocked_ensureGreenKeyValueCaches;
-(id)_whileDatabaseLocked_localeCodesMatchingQualifier:(id)arg1 ;
-(id)citiesWithIdentifiers:(id)arg1 ;
-(void)_whileDatabaseLocked_modifyCityForGreen:(id)arg1 ;
-(id)_cityForClassicIdentifier:(id)arg1 commaSearchOptions:(unsigned long long)arg2 ;
-(id)cityForClassicIdentifier:(id)arg1 ;
-(id)citiesMatchingName:(id)arg1 ;
-(id)localeWithCode:(id)arg1 ;
-(id)defaultCitiesForLocaleCode:(id)arg1 options:(int)arg2 ;
-(id)_defaultCityForTimeZone:(id)arg1 localeCode:(id)arg2 ;
-(id)_cityForTimeZone:(id)arg1 localeCode:(id)arg2 ;
-(id)citiesWithTimeZone:(id)arg1 ;
-(id)allCities;
-(id)bestCityForLegacyCity:(CFArrayRef)arg1 ;
-(id)allLocales;
-(id)defaultCitiesForLocaleCode:(id)arg1 ;
-(id)defaultCitiesShownInWorldClock;
-(id)defaultCityForTimeZone:(id)arg1 ;
-(id)defaultCityForTimeZone:(id)arg1 localeCode:(id)arg2 ;
-(CPSearchMatcher *)citySearchMatcher;
@end

