/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <libobjc.A.dylib/WFTemperatureUnitObserver.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@protocol WeatherPreferencesPersistence, SynchronizedDefaultsDelegate;
@class NSString, NSArray, WeatherCloudPreferences, City, NSDate;

@interface WeatherPreferences : NSObject <WFTemperatureUnitObserver, NSURLConnectionDelegate> {

	NSString* _UUID;
	NSString* _serviceHost;
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
+(id)sharedPreferences;
+(id)userDefaultsPersistence;
+(id)preferencesWithPersistence:(id)arg1 ;
+(id)readInternalDefaultValueForKey:(id)arg1 ;
+(id)serviceDebuggingPath;
+(BOOL)performUpgradeOfPersistence:(id)arg1 fileManager:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(id)UUID;
-(id)_cacheDirectoryPath;
-(id)initWithPersistence:(id)arg1 ;
-(NSDate *)lastUpdated;
-(void)resetLocale;
-(City *)localWeatherCity;
-(id)loadSavedCities;
-(id)readDefaultValueForKey:(id)arg1 ;
-(void)setSyncDelegate:(id<SynchronizedDefaultsDelegate>)arg1 ;
-(void)setLocalWeatherEnabled:(BOOL)arg1 ;
-(void)writeDefaultValue:(id)arg1 forKey:(id)arg2 ;
-(void)synchronizeStateToDisk;
-(void)saveToDiskWithLocalWeatherCity:(id)arg1 ;
-(void)saveToDiskWithCities:(id)arg1 ;
-(void)saveToDiskWithCities:(id)arg1 activeCity:(unsigned long long)arg2 ;
-(id<SynchronizedDefaultsDelegate>)syncDelegate;
-(id)_defaultCities;
-(BOOL)areCitiesDefault:(id)arg1 ;
-(void)setCelsius:(BOOL)arg1 ;
-(void)setupUbiquitousStoreIfNeeded;
-(WeatherCloudPreferences *)cloudPreferences;
-(void)setCloudPreferences:(WeatherCloudPreferences *)arg1 ;
-(void)setDefaultSelectedCityID:(id)arg1 ;
-(void)synchronizeStateToDiskDoNotify:(BOOL)arg1 ;
-(BOOL)isLocalWeatherEnabled;
-(int)userTemperatureUnit;
-(BOOL)_defaultsCurrent;
-(id)cityFromPreferencesDictionary:(id)arg1 ;
-(id)preferencesDictionaryForCity:(id)arg1 ;
-(BOOL)_defaultsAreValid;
-(id)citiesByConsolidatingDuplicates:(id)arg1 originalOrder:(id)arg2 ;
-(int)loadActiveCity;
-(void)setActiveCity:(unsigned long long)arg1 ;
-(id)citiesByConsolidatingDuplicatesInBucket:(id)arg1 ;
-(void)saveToUbiquitousStore;
-(id)readInternalDefaultValueForKey:(id)arg1 ;
-(void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnitTo:(int)arg2 ;
-(BOOL)ensureValidSelectedCityID;
-(void)adjustPrefsForLocalWeatherEnabled:(BOOL)arg1 ;
-(void)registerTemperatureUnits;
-(BOOL)readTemperatureUnits;
-(BOOL)isCelsius;
-(void)saveToDiskWithCity:(id)arg1 forActiveIndex:(unsigned long long)arg2 ;
-(void)setDefaultCities:(id)arg1 ;
-(int)loadDefaultSelectedCity;
-(id)loadDefaultSelectedCityID;
-(void)setDefaultSelectedCity:(unsigned long long)arg1 ;
-(void)forceSyncCloudPreferences;
-(id)serviceHost;
-(id)twcLogoURL;
-(id)twcLogoURL:(id)arg1 ;
-(BOOL)serviceDebugging;
-(void)_clearCachedObjects;
-(BOOL)userGroupPrefsLockedWhenInit;
-(void)setUserGroupPrefsLockedWhenInit:(BOOL)arg1 ;
@end

