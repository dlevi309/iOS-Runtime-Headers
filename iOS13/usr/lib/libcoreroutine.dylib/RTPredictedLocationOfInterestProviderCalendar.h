/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/RTPredictedLocationOfInterestProvider.h>

@protocol OS_dispatch_queue;
@class NSObject, RTEventManager, RTEventModelProvider, RTLearnedLocationManager, RTMapServiceManager, NSString;

@interface RTPredictedLocationOfInterestProviderCalendar : NSObject <RTPredictedLocationOfInterestProvider> {

	NSObject*<OS_dispatch_queue> _queue;
	RTEventManager* _eventManager;
	RTEventModelProvider* _eventModelProvider;
	RTLearnedLocationManager* _learnedLocationManager;
	RTMapServiceManager* _mapServiceManager;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) RTEventManager * eventManager;                                  //@synthesize eventManager=_eventManager - In the implementation block
@property (nonatomic,retain) RTEventModelProvider * eventModelProvider;                      //@synthesize eventModelProvider=_eventModelProvider - In the implementation block
@property (nonatomic,retain) RTLearnedLocationManager * learnedLocationManager;              //@synthesize learnedLocationManager=_learnedLocationManager - In the implementation block
@property (nonatomic,retain) RTMapServiceManager * mapServiceManager;                        //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)reasonableDistanceBetweenEventLocation:(id)arg1 andLocation:(id)arg2 ;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(RTEventManager *)eventManager;
-(void)setEventManager:(RTEventManager *)arg1 ;
-(void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 handler:(/*^block*/id)arg4 ;
-(RTLearnedLocationManager *)learnedLocationManager;
-(RTEventModelProvider *)eventModelProvider;
-(void)setEventModelProvider:(RTEventModelProvider *)arg1 ;
-(void)setLearnedLocationManager:(RTLearnedLocationManager *)arg1 ;
-(RTMapServiceManager *)mapServiceManager;
-(void)setMapServiceManager:(RTMapServiceManager *)arg1 ;
-(id)initWithEventManager:(id)arg1 eventModelProvider:(id)arg2 learnedLocationManager:(id)arg3 mapServiceManager:(id)arg4 ;
-(void)fetchNextPredictedLocationsOfInterestWithCriteria:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchPredictedExitDatesWithCriteria:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchPredictedLocationsOfInterestWithCriteria:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchLocationOfInterestForEvent:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchPredictedLocationsOfInterestOnDate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchPredictedLocationOfInterestAtEvent:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

