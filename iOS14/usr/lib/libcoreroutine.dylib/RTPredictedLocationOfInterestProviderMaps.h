/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/RTPredictedLocationOfInterestProvider.h>

@protocol OS_dispatch_queue;
@class NSObject, RTMapsSupportManager, NSString;

@interface RTPredictedLocationOfInterestProviderMaps : NSObject <RTPredictedLocationOfInterestProvider> {

	NSObject*<OS_dispatch_queue> _queue;
	RTMapsSupportManager* _mapsSupportManager;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) RTMapsSupportManager * mapsSupportManager;              //@synthesize mapsSupportManager=_mapsSupportManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(RTMapsSupportManager *)mapsSupportManager;
-(void)fetchPredictedLocationsOfInterestWithCriteria:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchNextPredictedLocationsOfInterestWithCriteria:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchPredictedExitDatesWithCriteria:(id)arg1 handler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)_getNextPredictedLocationsOfInterestBackedByHistortyEntryPlaceDisplayFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 historyEntryPlaceDisplays:(id)arg4 ;
-(id)initWithMapsSupportManager:(id)arg1 ;
-(id)_getNextPredictedLocationsOfInterestBackedByHistortyEntryRouteFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 historyEntryRoutes:(id)arg4 ;
@end

