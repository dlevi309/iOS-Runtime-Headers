/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEONavdServerProxy.h>
#import <libobjc.A.dylib/GEONavdProxyObserver.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSMutableArray, NSMutableDictionary, NSObject;

@interface GEONavdRemoteProxy : GEONavdServerProxy <GEONavdProxyObserver> {

	NSXPCConnection* _connection;
	NSMutableArray* _observers;
	NSMutableDictionary* _handlers;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) id<GEONavdXPCInterface> remoteObjectProxyThreadUnsafe; 
-(void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 ;
-(void)addObserver:(id)arg1 ;
-(void)open;
-(id)init;
-(void)close;
-(void)navdProxyReceivedData:(id)arg1 ofType:(id)arg2 ;
-(void)_connectToDaemonIfNeededThreadUnsafe;
-(void)onlyPerformLocalUpdatesForPlannedDestination:(id)arg1 client:(id)arg2 ;
-(void)shouldPostDarwinNotificationForNextUpdate:(BOOL)arg1 ;
-(id<GEONavdXPCInterface>)remoteObjectProxyThreadUnsafe;
-(void)requestRefreshForPlannedDestination:(id)arg1 client:(id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(void)navdProxyReceivedHypothesis:(id)arg1 forClient:(id)arg2 ;
-(void)statusWithCallback:(/*^block*/id)arg1 ;
-(void)forceCacheRefresh;
-(void)didPostUINotification:(unsigned long long)arg1 forDestination:(id)arg2 fromClient:(id)arg3 ;
-(void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)dealloc;
@end

