/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <WeatherFoundation/WeatherServiceProtocol.h>
#import <WeatherFoundation/WeatherServicePrivateProtocol.h>

@protocol OS_dispatch_queue;
@class WFTemperatureUnitProvider, NSMutableArray, NSObject, WFWeatherStoreService, WFQueryDispatcher, NSMapTable, NSArray, NSString;

@interface WeatherService : NSObject <WeatherServiceProtocol, WeatherServicePrivateProtocol> {

	WFTemperatureUnitProvider* _temperatureUnitProvider;
	NSMutableArray* _clients;
	NSObject*<OS_dispatch_queue> _clientQueue;
	WFWeatherStoreService* _internalService;
	WFQueryDispatcher* _queryDispatcher;
	NSMapTable* _clientDictionary;

}

@property (retain) WFWeatherStoreService * internalService;                                    //@synthesize internalService=_internalService - In the implementation block
@property (retain) WFQueryDispatcher * queryDispatcher;                                        //@synthesize queryDispatcher=_queryDispatcher - In the implementation block
@property (retain) NSMapTable * clientDictionary;                                              //@synthesize clientDictionary=_clientDictionary - In the implementation block
@property (nonatomic,readonly) NSArray * clients; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) WFTemperatureUnitProvider * temperatureUnitProvider;              //@synthesize temperatureUnitProvider=_temperatureUnitProvider - In the implementation block
+(id)sharedService;
-(void)addClient:(id)arg1 ;
-(NSArray *)clients;
-(void)forecast:(unsigned long long)arg1 forLocation:(id)arg2 locale:(id)arg3 taskIdentifier:(id)arg4 ;
-(void)addClient:(id)arg1 forPid:(int)arg2 ;
-(NSMapTable *)clientDictionary;
-(id)init;
-(void)forecastForLocation:(id)arg1 locale:(id)arg2 onDate:(id)arg3 options:(id)arg4 taskIdentifier:(id)arg5 ;
-(id)initWithStore:(id)arg1 ;
-(WFQueryDispatcher *)queryDispatcher;
-(void)locationForSearchCompletion:(id)arg1 taskIdentifier:(id)arg2 ;
-(void)removeClient:(id)arg1 ;
-(void)dailyForecastForLocation:(id)arg1 locale:(id)arg2 taskIdentifier:(id)arg3 ;
-(void)locationForCoordinate:(CLLocationCoordinate2D)arg1 taskIdentifier:(id)arg2 ;
-(void)setTemperatureUnitProvider:(WFTemperatureUnitProvider *)arg1 ;
-(void)setQueryDispatcher:(WFQueryDispatcher *)arg1 ;
-(void)cancelTaskWithIdentifier:(id)arg1 ;
-(id)clientForPid:(int)arg1 ;
-(void)invalidateCache:(id)arg1 ;
-(void)setClientDictionary:(NSMapTable *)arg1 ;
-(void)queryDispatcherDidReceiveResponse:(id)arg1 identifier:(id)arg2 ;
-(void)setInternalService:(WFWeatherStoreService *)arg1 ;
-(void)replaceTemperatureUnitWith:(int)arg1 identifier:(id)arg2 ;
-(void)forecast:(unsigned long long)arg1 forLocation:(id)arg2 withUnits:(int)arg3 locale:(id)arg4 taskIdentifier:(id)arg5 ;
-(void)temperatureUnitWithIdentifier:(id)arg1 ;
-(WFTemperatureUnitProvider *)temperatureUnitProvider;
-(void)fetchFavoriteLocationsWithTaskIdentifier:(id)arg1 ;
-(void)locationForString:(id)arg1 taskIdentifier:(id)arg2 ;
-(void)hourlyForecastForLocation:(id)arg1 locale:(id)arg2 taskIdentifier:(id)arg3 ;
-(void)airQualityForLocation:(id)arg1 locale:(id)arg2 options:(id)arg3 taskIdentifier:(id)arg4 ;
-(void)reachabilityConfigurationForIdentifier:(id)arg1 ;
-(void)performMigrationWithCompletion:(/*^block*/id)arg1 ;
-(WFWeatherStoreService *)internalService;
@end

