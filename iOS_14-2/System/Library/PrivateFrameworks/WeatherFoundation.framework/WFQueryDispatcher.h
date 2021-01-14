/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@protocol OS_dispatch_queue;
#import <WeatherFoundation/WeatherFoundation-Structs.h>
@class NSObject, NSMutableDictionary;

@interface WFQueryDispatcher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _queriesPendingResponse;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * queriesPendingResponse;              //@synthesize queriesPendingResponse=_queriesPendingResponse - In the implementation block
-(id)init;
-(void)locationForSearchCompletion:(id)arg1 taskIdentifier:(id)arg2 results:(/*^block*/id)arg3 ;
-(void)locationForCoordinate:(CLLocationCoordinate2D)arg1 taskIdentifier:(id)arg2 results:(/*^block*/id)arg3 ;
-(void)invalidateCacheWithIdentifier:(id)arg1 ;
-(void)locationForString:(id)arg1 taskIdentifier:(id)arg2 results:(/*^block*/id)arg3 ;
-(void)cancelTaskWithIdentifier:(id)arg1 ;
-(void)fetchFavoriteLocationsWithTaskIdentifier:(id)arg1 results:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)queriesPendingResponse;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dispatchQuery:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setQueriesPendingResponse:(NSMutableDictionary *)arg1 ;
-(void)removePendingQueryWithIdentifier:(id)arg1 ;
@end

