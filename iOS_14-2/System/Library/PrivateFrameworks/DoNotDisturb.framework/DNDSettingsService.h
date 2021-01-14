/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <libobjc.A.dylib/DNDRemoteServiceConnectionEventListener.h>

@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, NSString;

@interface DNDSettingsService : NSObject <DNDRemoteServiceConnectionEventListener> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSHashTable* _settingsUpdateListeners;
	BOOL _registeredForUpdates;
	NSString* _clientIdentifier;

}

@property (nonatomic,copy,readonly) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)serviceForClientIdentifier:(id)arg1 ;
-(void)didReceiveConnectionInterruptedEventForRemoteService:(id)arg1 ;
-(id)_initWithClientIdentifier:(id)arg1 ;
-(void)didReceiveConnectionInvalidatedEventForRemoteService:(id)arg1 ;
-(NSString *)clientIdentifier;
-(void)remoteService:(id)arg1 didReceiveUpdatedBehaviorSettings:(id)arg2 ;
-(void)remoteService:(id)arg1 didReceiveUpdatedPhoneCallBypassSettings:(id)arg2 ;
-(void)remoteService:(id)arg1 didReceiveUpdatedScheduleSettings:(id)arg2 ;
-(BOOL)_queue_registerForSettingsUpdatesIfRequired;
-(void)_handleLostXPCConnectionWithRetry:(BOOL)arg1 ;
-(id)behaviorSettingsReturningError:(id*)arg1 ;
-(BOOL)setBehaviorSettings:(id)arg1 error:(id*)arg2 ;
-(id)phoneCallBypassSettingsReturningError:(id*)arg1 ;
-(BOOL)setPhoneCallBypassSettings:(id)arg1 error:(id*)arg2 ;
-(id)scheduleSettingsReturningError:(id*)arg1 ;
-(BOOL)setScheduleSettings:(id)arg1 error:(id*)arg2 ;
-(void)addSettingsUpdateListener:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeSettingsUpdateListener:(id)arg1 ;
-(BOOL)setBehaviorSettings:(id)arg1 returningError:(id*)arg2 ;
-(BOOL)setPhoneCallBypassSettings:(id)arg1 returningError:(id*)arg2 ;
-(BOOL)setScheduleSettings:(id)arg1 returningError:(id*)arg2 ;
-(BOOL)addSettingsUpdateListener:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeSettingsUpdateListener:(id)arg1 error:(id*)arg2 ;
@end

