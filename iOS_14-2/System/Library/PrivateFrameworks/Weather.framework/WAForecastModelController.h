/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/


@protocol OS_dispatch_queue;
#import <Weather/Weather-Structs.h>
@class NSOperationQueue, NSObject, NSMutableSet, NSMutableDictionary, WFServiceConnection, NSString, WFWeatherStoreService;

@interface WAForecastModelController : NSObject {

	NSOperationQueue* _forecastOperationQueue;
	NSObject*<OS_dispatch_queue> _incomingRequestQueue;
	NSObject*<OS_dispatch_queue> _completionHandlerQueue;
	NSMutableSet* _updatingCities;
	NSMutableDictionary* _completionHandlersForCity;
	WFServiceConnection* _connection;
	ct_green_tea_logger_sRef _greenTeaLogger;
	NSOperationQueue* _priorityForecastOperationQueue;
	NSMutableSet* _priorityUpdatingCities;
	NSMutableDictionary* _priorityCompletionHandlersForCity;
	NSString* _trackingParameter;
	WFWeatherStoreService* _store;

}

@property (retain) NSOperationQueue * forecastOperationQueue;                            //@synthesize forecastOperationQueue=_forecastOperationQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> incomingRequestQueue;                    //@synthesize incomingRequestQueue=_incomingRequestQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> completionHandlerQueue;                  //@synthesize completionHandlerQueue=_completionHandlerQueue - In the implementation block
@property (retain) NSMutableSet * updatingCities;                                        //@synthesize updatingCities=_updatingCities - In the implementation block
@property (retain) NSMutableDictionary * completionHandlersForCity;                      //@synthesize completionHandlersForCity=_completionHandlersForCity - In the implementation block
@property (nonatomic,retain) WFServiceConnection * connection;                           //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) ct_green_tea_logger_sRef greenTeaLogger;                    //@synthesize greenTeaLogger=_greenTeaLogger - In the implementation block
@property (retain) NSOperationQueue * priorityForecastOperationQueue;                    //@synthesize priorityForecastOperationQueue=_priorityForecastOperationQueue - In the implementation block
@property (retain) NSMutableSet * priorityUpdatingCities;                                //@synthesize priorityUpdatingCities=_priorityUpdatingCities - In the implementation block
@property (retain) NSMutableDictionary * priorityCompletionHandlersForCity;              //@synthesize priorityCompletionHandlersForCity=_priorityCompletionHandlersForCity - In the implementation block
@property (copy) NSString * trackingParameter;                                           //@synthesize trackingParameter=_trackingParameter - In the implementation block
@property (readonly) WFWeatherStoreService * store;                                      //@synthesize store=_store - In the implementation block
-(void)setTrackingParameter:(NSString *)arg1 ;
-(NSString *)trackingParameter;
-(void)setUpdatingCities:(NSMutableSet *)arg1 ;
-(BOOL)isPriorityCityBeingUpdated:(id)arg1 ;
-(id)init;
-(void)setGreenTeaLogger:(ct_green_tea_logger_sRef)arg1 ;
-(WFWeatherStoreService *)store;
-(NSMutableDictionary *)priorityCompletionHandlersForCity;
-(void)setCompletionHandlersForCity:(NSMutableDictionary *)arg1 ;
-(NSOperationQueue *)priorityForecastOperationQueue;
-(NSOperationQueue *)forecastOperationQueue;
-(void)cancelAllFetchRequests;
-(BOOL)isPriorityForecastOperationsEnabled;
-(BOOL)fetchForecastForCity:(id)arg1 withUnits:(int)arg2 completion:(/*^block*/id)arg3 ;
-(id)_queue_executeFetchForCity:(id)arg1 withUnits:(int)arg2 completion:(/*^block*/id)arg3 completionHandlersForCity:(id)arg4 updatingCities:(id)arg5 ;
-(NSMutableSet *)updatingCities;
-(void)setCompletionHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_handleForecastOperationCompletion:(id)arg1 ;
-(id)_queue_executeFetchForCity:(id)arg1 withUnits:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPriorityForecastOperationQueue:(NSOperationQueue *)arg1 ;
-(NSMutableDictionary *)completionHandlersForCity;
-(WFServiceConnection *)connection;
-(id)_queue_executeFetchForCity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setForecastOperationQueue:(NSOperationQueue *)arg1 ;
-(BOOL)isPriorityCity:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionHandlerQueue;
-(void)setIncomingRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPriorityUpdatingCities:(NSMutableSet *)arg1 ;
-(NSObject*<OS_dispatch_queue>)incomingRequestQueue;
-(NSMutableSet *)priorityUpdatingCities;
-(id)_commaSeparatedPriorityUpdatingCitiesNames;
-(BOOL)isCityBeingUpdated:(id)arg1 ;
-(void)setConnection:(WFServiceConnection *)arg1 ;
-(id)_commaSeparatedUpdatingCitiesNames;
-(BOOL)fetchForecastForCity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(ct_green_tea_logger_sRef)greenTeaLogger;
-(BOOL)fetchForecastForCities:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPriorityCompletionHandlersForCity:(NSMutableDictionary *)arg1 ;
-(id)_commaSeparatedNamesForUpdatingCities:(id)arg1 ;
-(void)dealloc;
@end

