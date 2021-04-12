/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNTimeballServiceProxyDelegate.h>

@protocol MNTimeballServiceProxyInterface;
@class NSMapTable, NSLock, NSMutableDictionary, MNObserverHashTable, NSString;

@interface MNTimeballService : NSObject <MNTimeballServiceProxyDelegate> {

	id<MNTimeballServiceProxyInterface> _proxy;
	NSMapTable* _handlerMap;
	NSLock* _subscribersLock;
	NSMutableDictionary* _subscribersPerDestination;
	MNObserverHashTable* _leechers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithClientID:(id)arg1 ;
-(void)invokeHandlerWithID:(id)arg1 forDestination:(id)arg2 update:(id)arg3 error:(id)arg4 ;
-(void)completedUpdateForHandlerID:(id)arg1 ;
-(void)didReceiveError:(id)arg1 forDestination:(id)arg2 ;
-(void)didReceiveUpdate:(id)arg1 forDestination:(id)arg2 ;
-(void)requestRoutingOptions:(long long)arg1 forDestinations:(id)arg2 freshness:(id)arg3 callbackBlock:(/*^block*/id)arg4 ;
-(id)_addHandler:(/*^block*/id)arg1 ;
-(void)removeSubscriber:(id)arg1 forDestination:(id)arg2 ;
-(/*^block*/id)_handlerForID:(id)arg1 ;
-(void)_removeHandlerWithID:(id)arg1 ;
-(void)requestRoutingOptions:(long long)arg1 forDestination:(id)arg2 freshness:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)addSubscriber:(id)arg1 forDestination:(id)arg2 options:(long long)arg3 refreshPolicy:(unsigned long long)arg4 ;
-(void)removeSubscriberForAllDestinations:(id)arg1 ;
-(void)startLeechingDestinationUpdates:(id)arg1 ;
-(void)stopLeechingDestinationUpdates:(id)arg1 ;
@end

