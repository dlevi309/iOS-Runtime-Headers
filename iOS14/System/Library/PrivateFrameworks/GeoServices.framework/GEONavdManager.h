/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEONavdServerProxy, NSMutableArray;

@interface GEONavdManager : NSObject {

	GEONavdServerProxy* _proxy;
	NSMutableArray* _openers;
	os_unfair_lock_s _openersLock;

}
+(void)setProxyClass:(Class)arg1 ;
+(id)navdManagerClientIdentifier:(id)arg1 ;
+(id)navdManager;
-(void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 ;
-(id)init;
-(void)onlyPerformLocalUpdatesForPlannedDestination:(id)arg1 client:(id)arg2 ;
-(void)shouldPostDarwinNotificationForNextUpdate:(BOOL)arg1 ;
-(void)requestRefreshForPlannedDestination:(id)arg1 client:(id)arg2 ;
-(void)closeForClient:(id)arg1 ;
-(void)openForClient:(id)arg1 ;
-(void)statusWithCallback:(/*^block*/id)arg1 ;
-(void)forceCacheRefresh;
-(void)didPostUINotification:(unsigned long long)arg1 forDestination:(id)arg2 fromClient:(id)arg3 ;
-(void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 handler:(/*^block*/id)arg4 ;
@end

