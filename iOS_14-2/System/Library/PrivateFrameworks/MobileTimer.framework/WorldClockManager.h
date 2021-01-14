/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@class NSMutableArray, WorldClockPreferences, NSDate, NSArray;

@interface WorldClockManager : NSObject {

	BOOL _dirty;
	NSMutableArray* _cities;
	WorldClockPreferences* _defaults;
	NSDate* lastModified;

}

@property (nonatomic,retain) NSDate * lastModified; 
@property (nonatomic,readonly) NSArray * cities;                 //@synthesize cities=_cities - In the implementation block
+(id)sharedManagerWithPreferences:(id)arg1 ;
+(id)sharedManager;
-(void)setLastModified:(NSDate *)arg1 ;
-(void)_notifyNano;
-(void)saveCities;
-(id)worldClockCityFromPersistenceArray:(id)arg1 ;
-(id)citiesMatchingIdentifiers:(id)arg1 ;
-(BOOL)checkIfCitiesModified;
-(NSDate *)lastModified;
-(void)loadCities;
-(NSArray *)cities;
-(void)moveCityFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)pushCityPropertiesToPreferences;
-(id)worldClockCityFromPersistenceRepresentation:(id)arg1 ;
-(id)initWithPreferences:(id)arg1 ;
-(void)removeCityAtIndex:(unsigned long long)arg1 ;
-(void)removeCity:(id)arg1 ;
-(void)removeAllCities;
-(unsigned long long)addCity:(id)arg1 ;
-(id)worldClockCityFromPersistenceDictionary:(id)arg1 ;
-(void)addDefaultCitiesIfNeeded;
-(id)cityWithIdUrl:(id)arg1 ;
-(id)fixUpCityProperties:(id)arg1 ;
-(id)allCities;
-(BOOL)canAddCity;
@end

