/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)sharedManager;
+(id)sharedManagerWithPreferences:(id)arg1 ;
-(id)initWithPreferences:(id)arg1 ;
-(NSDate *)lastModified;
-(void)setLastModified:(NSDate *)arg1 ;
-(NSArray *)cities;
-(void)addDefaultCitiesIfNeeded;
-(id)worldClockCityFromPersistenceRepresentation:(id)arg1 ;
-(void)pushCityPropertiesToPreferences;
-(void)_notifyNano;
-(id)worldClockCityFromPersistenceDictionary:(id)arg1 ;
-(id)worldClockCityFromPersistenceArray:(id)arg1 ;
-(id)fixUpCityProperties:(id)arg1 ;
-(void)saveCities;
-(BOOL)canAddCity;
-(void)loadCities;
-(BOOL)checkIfCitiesModified;
-(id)cityWithIdUrl:(id)arg1 ;
-(unsigned long long)addCity:(id)arg1 ;
-(void)removeCity:(id)arg1 ;
-(void)removeCityAtIndex:(unsigned long long)arg1 ;
-(void)removeAllCities;
-(void)moveCityFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
@end

