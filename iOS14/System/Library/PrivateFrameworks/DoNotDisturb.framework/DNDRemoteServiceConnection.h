/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <libobjc.A.dylib/DNDRemoteServiceClientProtocol.h>
#import <libobjc.A.dylib/DNDRemoteServiceServerProtocol.h>

@class NSXPCConnection, NSHashTable, NSString;

@interface DNDRemoteServiceConnection : NSObject <DNDRemoteServiceClientProtocol, DNDRemoteServiceServerProtocol> {

	NSXPCConnection* _connection;
	NSHashTable* _eventListeners;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)sharedInstance;
-(id)init;
-(void)deliverUpdatedBehaviorSettings:(id)arg1 ;
-(void)deliverUpdatedPhoneCallBypassSettings:(id)arg1 ;
-(void)getScheduleSettingsWithRequestDetails:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPhoneCallBypassSettings:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)registerForSettingsUpdatesWithRequestDetails:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)invalidateAllActiveModeAssertionsWithRequestDetails:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getPhoneCallBypassSettingsWithRequestDetails:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getLatestModeAssertionInvalidationWithRequestDetails:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deliverActiveModeAssertionUpdate:(id)arg1 invalidation:(id)arg2 clientIdentifiers:(id)arg3 ;
-(void)_handleRemoteConnectionInterrupted;
-(void)deliverStateUpdate:(id)arg1 ;
-(void)registerForAssertionUpdatesWithRequestDetails:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeEventListener:(id)arg1 ;
-(void)_handleRemoteConnectionInvalidated;
-(void)takeModeAssertionWithDetails:(id)arg1 requestDetails:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setScheduleSettings:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getBehaviorSettingsWithRequestDetails:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addEventListener:(id)arg1 ;
-(void)setBehaviorSettings:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)queryStateWithRequestDetails:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getActiveModeAssertionWithRequestDetails:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)invalidateActiveModeAssertionWithDetails:(id)arg1 reasonOverride:(unsigned long long)arg2 requestDetails:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)resolveBehaviorForEventDetails:(id)arg1 requestDetails:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deliverUpdatedScheduleSettings:(id)arg1 ;
-(void)registerForStateUpdatesWithRequestDetails:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

