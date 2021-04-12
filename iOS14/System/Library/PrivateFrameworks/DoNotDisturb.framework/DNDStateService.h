/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,copy,readonly) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)serviceForClientIdentifier:(id)arg1 ;
-(BOOL)_queue_registerForStateUpdatesIfRequired;
-(id)queryCurrentStateWithError:(id*)arg1 ;
-(void)addStateUpdateListener:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_handleLostXPCConnection;
-(void)didReceiveConnectionInterruptedEventForRemoteService:(id)arg1 ;
-(id)_initWithClientIdentifier:(id)arg1 ;
-(void)removeStateUpdateListener:(id)arg1 ;
-(BOOL)removeStateUpdateListener:(id)arg1 error:(id*)arg2 ;
-(void)didReceiveConnectionInvalidatedEventForRemoteService:(id)arg1 ;
-(BOOL)addStateUpdateListener:(id)arg1 error:(id*)arg2 ;
-(NSString *)clientIdentifier;
-(void)remoteService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2 ;
@end

