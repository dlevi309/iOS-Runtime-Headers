/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol ATXPredictedLocationsManagerProtocol;
@class NSMutableDictionary;

@interface ATXPredictedTransitionsCache : NSObject {

	id<ATXPredictedLocationsManagerProtocol> _manager;
	NSMutableDictionary* _homeToWork;
	NSMutableDictionary* _workToHome;

}
+(void)removeEntriesFromCache:(id)arg1 beforeDate:(id)arg2 ;
+(id)ceilingDateToNextHour:(id)arg1 ;
+(id)getNextTransitionInCache:(id)arg1 fromDate:(id)arg2 ;
-(id)init;
-(void)dump;
-(id)initWithLocationManager:(id)arg1 ;
-(id)getNextHomeToWorkTransitionsOnActivity:(id)arg1 ;
-(id)getNextWorkToHomeTransitionsOnActivity:(id)arg1 ;
-(void)prewarmOnActivity:(id)arg1 ;
-(void)fetchEntriesStartingDate:(id)arg1 onActivity:(id)arg2 ;
-(BOOL)cacheHeadingFromLoiType:(long long)arg1 toLoiType:(long long)arg2 forDate:(id)arg3 ;
-(id)cacheForDestinationLoiType:(long long)arg1 ;
-(void)pruneStaleEntries;
@end

