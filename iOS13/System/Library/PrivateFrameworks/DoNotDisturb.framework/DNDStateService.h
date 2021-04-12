/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <libobjc.A.dylib/DNDRemoteServiceConnectionEventListener.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSHashTable;

@interface DNDStateService : NSObject <DNDRemoteServiceConnectionEventListener> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSString* _clientIdentifier;
	NSHashTable* _stateUpdateListeners;
	BOOL _registeredForUpdates;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
+(void)initialize;
+(id)serviceForClientIdentifier:(id)arg1 ;
-(NSString *)clientIdentifier;
-(id)_initWithClientIdentifier:(id)arg1 ;
-(BOOL)_queue_registerForStateUpdatesIfRequired;
-(void)_handleLostXPCConnection;
-(void)didReceiveConnectionInterruptedEventForRemoteService:(id)arg1 ;
-(void)didReceiveConnectionInvalidatedEventForRemoteService:(id)arg1 ;
-(void)remoteService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2 ;
-(id)queryCurrentStateWithError:(id*)arg1 ;
-(void)addStateUpdateListener:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeStateUpdateListener:(id)arg1 ;
-(BOOL)addStateUpdateListener:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeStateUpdateListener:(id)arg1 error:(id*)arg2 ;
@end

