/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <libobjc.A.dylib/WFTemperatureUnitObserver.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@protocol WeatherPreferencesPersistence, SynchronizedDefaultsDelegate;
@class NSString, NSArray, WeatherCloudPreferences, City, NSDate;

@interface WeatherPreferences : NSObject <WFTemperatureUnitObserver, NSURLConnectionDelegate> {

	NSString* _UUID;
	BOOL _serviceDebugging;
	NSArray* _lastUbiquitousWrittenDefaults;
	id<WeatherPreferencesPersistence> _persistence;
	NSString* _cacheDirectoryPath;
	BOOL _logUnitsAndLocale;
	BOOL _userGroupPrefsLockedWhenInit;
	id<SynchronizedDefaultsDelegate> _syncDelegate;
	WeatherCloudPreferences* _cloudPreferences;

}

@property (assign,nonatomic) BOOL userGroupPrefsLockedWhenInit;                                                                   //@synthesize userGroupPrefsLockedWhenInit=_userGroupPrefsLockedWhenInit - In the implementation block
@property (readonly) int userTemperatureUnit; 
@property (retain) WeatherCloudPreferences * cloudPreferences;                                                                    //@synthesize cloudPreferences=_cloudPreferences - In the implementation block
@property (assign,nonatomic,__weak) id<SynchronizedDefaultsDelegate> syncDelegate;                                                //@synthesize syncDelegate=_syncDelegate - In the implementation block
@property (assign,setter=setLocalWeatherEnabled:,getter=isLocalWeatherEnabled,nonatomic) BOOL isLocalWeatherEnabled; 
@property (nonatomic,readonly) City * localWeatherCity; 
@property (nonatomic,__weak,readonly) NSDate * lastUpdated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceDebuggingPath;
+(id)userDefaultsPersistence;
+(id)preferencesWithPersistence:(id)arg1 ;
+(id)readInternalDefaultValueForKey:(id)arg1 ;
+(BOOL)performUpgradeOfPersistence:(id)arg1 fileManager:(id)arg2 error:(id*)arg3 ;
+(id)sharedPreferences;
-(NSDate *)lastUpdated;
-(id)citiesByConsolidatingDuplicatesInBucket:(id)arg1 ;
-(id)twcLogoURL;
-(id)UUID;
-(BOOL)isLocalWeatherEnabled;
-(BOOL)ensureValidSelectedCityID;
-(void)setDefaultSelectedCity:(unsigned long long)arg1 ;
-(id)init;
-(void)setCloudPreferences:(WeatherCloudPreferences *)arg1 ;
-(id)preferencesDictionaryForCity:(id)arg1 ;
-(id)readDefaultValueForKey:(id)arg1 ;
-(void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnitTo:(int)arg2 ;
-(void)setActiveCity:(unsigned long long)arg1 ;
-(id)citiesByConsolidatingDuplicates:(id)arg1 originalOrder:(id)arg2 ;
-(int)userTemperatureUnit;
-(id)loadDefaultSelectedCityID;
-(void)setDefaultCities:(id)arg1 ;
-(id<SynchronizedDefaultsDelegate>)syncDelegate;
-(BOOL)isCelsius;
-(id)cityFromPreferencesDictionary:(id)arg1 ;
-(void)registerTemperatureUnits;
-(void)_clearCachedObjects;
-(void)saveToDiskWithCities:(id)arg1 ;
-(id)twcLogoURL:(id)arg1 ;
-(BOOL)readTemperatureUnits;
-(void)setDefaultSelectedCityID:(id)arg1 ;
-(id)loadSavedCities;
-(City *)localWeatherCity;
-(id)_cacheDirectoryPath;
-(void)synchronizeStateToDisk;
-(WeatherCloudPreferences *)cloudPreferences;
-(void)setupUbiquitousStoreIfNeeded;
-(void)setUserGroupPrefsLockedWhenInit:(BOOL)arg1 ;
-(void)synchronizeStateToDiskDoNotify:(BOOL)arg1 ;
-(void)setLocalWeatherEnabled:(BOOL)arg1 ;
-(void)writeDefaultValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)serviceDebugging;
-(void)resetLocale;
-(int)loadDefaultSelectedCity;
-(void)setCelsius:(BOOL)arg1 ;
-(BOOL)userGroupPrefsLockedWhenInit;
-(void)saveToUbiquitousStore;
-(id)_defaultCities;
-(BOOL)areCitiesDefault:(id)arg1 ;
-(id)readInternalDefaultValueForKey:(id)arg1 ;
-(void)forceSyncCloudPreferences;
-(void)adjustPrefsForLocalWeatherEnabled:(BOOL)arg1 ;
-(id)initWithPersistence:(id)arg1 ;
-(BOOL)_defaultsCurrent;
-(int)loadActiveCity;
-(void)saveToDiskWithCities:(id)arg1 activeCity:(unsigned long long)arg2 ;
-(void)saveToDiskWithLocalWeatherCity:(id)arg1 ;
-(void)setSyncDelegate:(id<SynchronizedDefaultsDelegate>)arg1 ;
-(void)saveToDiskWithCity:(id)arg1 forActiveIndex:(unsigned long long)arg2 ;
-(BOOL)_defaultsAreValid;
@end

