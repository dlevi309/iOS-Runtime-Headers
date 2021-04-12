/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/DNDRemoteServiceConnectionEventListener.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSHashTable, DNDModeAssertion;

@interface DNDModeAssertionService : NSObject <DNDRemoteServiceConnectionEventListener> {

	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSString* _clientIdentifier;
	NSHashTable* _assertionUpdateListeners;
	atomic_flag _registeredForUpdates;
	DNDModeAssertion* _activeAssertion;
	os_unfair_lock_s _activeAssertionLock;

}

@property (nonatomic,copy,readonly) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)serviceForClientIdentifier:(id)arg1 ;
-(id)takeModeAssertionWithDetails:(id)arg1 error:(id*)arg2 ;
-(id)invalidateActiveModeAssertionWithInvalidationDetails:(id)arg1 reasonOverride:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)addAssertionUpdateListener:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_handleXPCInterruption;
-(id)activeModeAssertionWithError:(id*)arg1 ;
-(id)latestModeAssertionInvalidationWithError:(id*)arg1 ;
-(void)didReceiveConnectionInterruptedEventForRemoteService:(id)arg1 ;
-(void)_handleChangeActiveModeAssertion:(id)arg1 invalidation:(id)arg2 ;
-(id)_initWithClientIdentifier:(id)arg1 ;
-(BOOL)addAssertionUpdateListener:(id)arg1 error:(id*)arg2 ;
-(void)remoteService:(id)arg1 didChangeActiveModeAssertion:(id)arg2 invalidation:(id)arg3 ;
-(void)didReceiveConnectionInvalidatedEventForRemoteService:(id)arg1 ;
-(BOOL)invalidateAllActiveModeAssertionsWithError:(id*)arg1 ;
-(BOOL)removeAssertionUpdateListener:(id)arg1 error:(id*)arg2 ;
-(void)removeAssertionUpdateListener:(id)arg1 ;
-(void)_registerForAssertionUpdatesIfRequiredWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)clientIdentifier;
-(id)invalidateActiveModeAssertionWithError:(id*)arg1 ;
@end

