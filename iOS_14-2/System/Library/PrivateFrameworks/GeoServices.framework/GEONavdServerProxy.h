/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@interface GEONavdServerProxy : NSObject
-(void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 ;
-(void)open;
-(id)init;
-(void)getDirectionsForClient:(id)arg1 withRouteHypothesisRequest:(id)arg2 andCallback:(/*^block*/id)arg3 ;
-(void)close;
-(void)onlyPerformLocalUpdatesForPlannedDestination:(id)arg1 client:(id)arg2 ;
-(void)shouldPostDarwinNotificationForNextUpdate:(BOOL)arg1 ;
-(void)requestRefreshForPlannedDestination:(id)arg1 client:(id)arg2 ;
-(void)statusWithCallback:(/*^block*/id)arg1 ;
-(void)forceCacheRefresh;
-(void)didPostUINotification:(unsigned long long)arg1 forDestination:(id)arg2 fromClient:(id)arg3 ;
-(void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 handler:(/*^block*/id)arg4 ;
@end

