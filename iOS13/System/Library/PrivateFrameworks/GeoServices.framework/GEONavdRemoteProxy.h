/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)open;
-(void)close;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)statusWithCallback:(/*^block*/id)arg1 ;
-(void)shouldPostDarwinNotificationForNextUpdate:(BOOL)arg1 ;
-(void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)requestRefreshForPlannedDestination:(id)arg1 client:(id)arg2 ;
-(void)onlyPerformLocalUpdatesForPlannedDestination:(id)arg1 client:(id)arg2 ;
-(void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 ;
-(void)didPostUINotification:(unsigned long long)arg1 forDestination:(id)arg2 fromClient:(id)arg3 ;
-(void)forceCacheRefresh;
-(void)_connectToDaemonIfNeededThreadUnsafe;
-(void)navdProxyReceivedData:(id)arg1 ofType:(id)arg2 ;
-(void)navdProxyReceivedHypothesis:(id)arg1 forClient:(id)arg2 ;
-(id<GEONavdXPCInterface>)remoteObjectProxyThreadUnsafe;
@end

