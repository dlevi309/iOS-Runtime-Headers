/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNTimeballServiceProxyInterface.h>
#import <libobjc.A.dylib/MNTimeballInternalProvider.h>
#import <libobjc.A.dylib/MNTimeballInternalObserver.h>

@protocol OS_dispatch_queue, MNTimeballServiceProxyDelegate;
@class MNTimeballServicePeer, MNObserverHashTable, MNTimeballCache, MNRouteRefreshPolicyScheduler, MNTimeballRoutingProvider, MNTimeballLocationManager, NSObject, MNXPCTransactionCounter, NSMutableDictionary, NSString;

@interface MNTimeballServiceLocalProxy : NSObject <MNTimeballServiceProxyInterface, MNTimeballInternalProvider, MNTimeballInternalObserver> {

	MNTimeballServicePeer* _peer;
	MNObserverHashTable* _observers;
	MNTimeballCache* _cache;
	MNRouteRefreshPolicyScheduler* _scheduler;
	MNTimeballRoutingProvider* _routingProvider;
	MNTimeballLocationManager* _locationManager;
	NSObject*<OS_dispatch_queue> _operationQueue;
	MNXPCTransactionCounter* _xpcTransactionCounter;
	NSMutableDictionary* _destinationOptions;
	BOOL _isLeeching;
	id<MNTimeballServiceProxyDelegate> _delegate;

}

@property (nonatomic,readonly) MNTimeballServicePeer * peer;                           //@synthesize peer=_peer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<MNTimeballServiceProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(NSString *)description;
-(id<MNTimeballServiceProxyDelegate>)delegate;
-(void)setDelegate:(id<MNTimeballServiceProxyDelegate>)arg1 ;
-(id)_delegate;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(MNTimeballServicePeer *)peer;
-(void)provider:(id)arg1 didReceiveError:(id)arg2 forDestination:(id)arg3 ;
-(void)provider:(id)arg1 didReceiveUpdate:(id)arg2 forDestination:(id)arg3 ;
-(void)_requestHighMemoryThreshold:(id)arg1 ;
-(void)_removeHighMemoryThreshold;
-(void)_invokeDelegateHandlerWithID:(id)arg1 forDestination:(id)arg2 update:(id)arg3 error:(id)arg4 ;
-(void)_receivedNetworkUpdate:(id)arg1 forDestination:(id)arg2 ;
-(void)_receivedNetworkError:(id)arg1 forDestination:(id)arg2 ;
-(void)_completedUpdateForDelegateHandlerID:(id)arg1 ;
-(void)_handleResult:(id)arg1 forDestination:(id)arg2 error:(id)arg3 fromNetwork:(BOOL)arg4 requestingClientID:(id)arg5 handlerID:(id)arg6 completed:(BOOL)arg7 ;
-(void)_enqueOperation:(/*^block*/id)arg1 ;
-(void)_requestOptions:(long long)arg1 forDestinations:(id)arg2 fromLocation:(id)arg3 freshness:(id)arg4 handlerID:(id)arg5 ;
-(void)requestRoutingOptions:(long long)arg1 forDestinations:(id)arg2 freshness:(id)arg3 handlerID:(id)arg4 ;
-(void)subscribeToDestination:(id)arg1 options:(long long)arg2 refreshPolicy:(unsigned long long)arg3 ;
-(void)unsubscribeFromDestination:(id)arg1 ;
-(void)subscribeToAllDestinations;
-(void)unsubscribeFromAllDestinations;
-(id)initWithPeer:(id)arg1 targetQueue:(id)arg2 cache:(id)arg3 locationManager:(id)arg4 routingProvider:(id)arg5 scheduler:(id)arg6 ;
@end

