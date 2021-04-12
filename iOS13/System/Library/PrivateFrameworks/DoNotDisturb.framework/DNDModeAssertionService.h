/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
+(void)initialize;
+(id)serviceForClientIdentifier:(id)arg1 ;
-(NSString *)clientIdentifier;
-(id)_initWithClientIdentifier:(id)arg1 ;
-(void)didReceiveConnectionInterruptedEventForRemoteService:(id)arg1 ;
-(void)didReceiveConnectionInvalidatedEventForRemoteService:(id)arg1 ;
-(void)remoteService:(id)arg1 didChangeActiveModeAssertion:(id)arg2 invalidation:(id)arg3 ;
-(id)invalidateActiveModeAssertionWithInvalidationDetails:(id)arg1 reasonOverride:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)_registerForAssertionUpdatesIfRequiredWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleXPCInterruption;
-(void)_handleChangeActiveModeAssertion:(id)arg1 invalidation:(id)arg2 ;
-(id)activeModeAssertionWithError:(id*)arg1 ;
-(id)takeModeAssertionWithDetails:(id)arg1 error:(id*)arg2 ;
-(id)invalidateActiveModeAssertionWithError:(id*)arg1 ;
-(id)latestModeAssertionInvalidationWithError:(id*)arg1 ;
-(BOOL)invalidateAllActiveModeAssertionsWithError:(id*)arg1 ;
-(void)addAssertionUpdateListener:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeAssertionUpdateListener:(id)arg1 ;
-(BOOL)addAssertionUpdateListener:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeAssertionUpdateListener:(id)arg1 error:(id*)arg2 ;
@end

