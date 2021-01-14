/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/DNDRemoteServiceServerProtocol.h>

@protocol DNDSRemoteServiceProviderDelegate;
@class NSXPCListener, NSMapTable, DNDSClientDetailsProvider, NSString;

@interface DNDSRemoteServiceProvider : NSObject <NSXPCListenerDelegate, DNDRemoteServiceServerProtocol> {

	NSXPCListener* _listener;
	NSMapTable* _clientConnectionDetailsByConnection;
	DNDSClientDetailsProvider* _clientDetailsProvider;
	id<DNDSRemoteServiceProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<DNDSRemoteServiceProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleModeAssertionUpdateResult:(id)arg1 ;
-(void)_unregisterConnectionDetailsForClientConnection:(id)arg1 ;
-(id<DNDSRemoteServiceProviderDelegate>)delegate;
-(void)getScheduleSettingsWithRequestDetails:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPhoneCallBypassSettings:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_handleClientConnectionInvalidated:(id)arg1 ;
-(void)registerForSettingsUpdatesWithRequestDetails:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)invalidateAllActiveModeAssertionsWithRequestDetails:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleUpdatedBehaviorSettings:(id)arg1 ;
-(void)getPhoneCallBypassSettingsWithRequestDetails:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_iterateClientConnectionsToSendWithHandler:(/*^block*/id)arg1 ;
-(void)getLatestModeAssertionInvalidationWithRequestDetails:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithClientDetailsProvider:(id)arg1 ;
-(void)handleStateUpdate:(id)arg1 ;
-(void)setDelegate:(id<DNDSRemoteServiceProviderDelegate>)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)handleUpdatedScheduleSettings:(id)arg1 ;
-(void)_registerOrMutateConnectionDetailsForClientConnection:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)handleUpdatedPhoneCallBypassSettings:(id)arg1 ;
-(void)registerForAssertionUpdatesWithRequestDetails:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)invalidate;
-(void)_handleClientConnectionInterrupted:(id)arg1 ;
-(void)takeModeAssertionWithDetails:(id)arg1 requestDetails:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setScheduleSettings:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getBehaviorSettingsWithRequestDetails:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setBehaviorSettings:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)queryStateWithRequestDetails:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getActiveModeAssertionWithRequestDetails:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)invalidateActiveModeAssertionWithDetails:(id)arg1 reasonOverride:(unsigned long long)arg2 requestDetails:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)resume;
-(void)resolveBehaviorForEventDetails:(id)arg1 requestDetails:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_clientDetailsForClientIdentifier:(id)arg1 clientConnection:(id)arg2 ;
-(void)dealloc;
-(void)registerForStateUpdatesWithRequestDetails:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

