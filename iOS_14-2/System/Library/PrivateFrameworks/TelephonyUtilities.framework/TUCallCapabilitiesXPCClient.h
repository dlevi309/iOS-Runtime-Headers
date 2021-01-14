/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/TUCallCapabilitiesXPCClient.h>

@protocol TUCallCapabilitiesXPCClient <NSObject>
@required
-(oneway void)capabilityStateUpdated:(id)arg1;

@end

#import <libobjc.A.dylib/TUCallCapabilitiesXPCServerActions.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSMapTable, TUCallCapabilitiesState, NSString;

@interface TUCallCapabilitiesXPCClient : NSObject <TUCallCapabilitiesXPCClient, TUCallCapabilitiesXPCServerActions> {

	int _token;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _xpcConnection;
	NSMapTable* _delegateToQueue;
	TUCallCapabilitiesState* _state;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                   //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) int token;                                       //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSMapTable * delegateToQueue;                    //@synthesize delegateToQueue=_delegateToQueue - In the implementation block
@property (nonatomic,retain) TUCallCapabilitiesState * state;                   //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)callCapabilitiesClientXPCInterface;
+(void)setAsynchronousServer:(id)arg1 ;
+(void)setSynchronousServer:(id)arg1 ;
+(id)synchronousServer;
+(id)asynchronousServer;
+(id)callCapabilitiesServerXPCInterface;
-(void)handleServerDisconnect;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(oneway void)setVoLTECallingEnabled:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2 ;
-(void)removeDelegate:(id)arg1 ;
-(id)synchronousServerWithErrorHandler:(/*^block*/id)arg1 ;
-(id)init;
-(oneway void)setWiFiCallingRoamingEnabled:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2 ;
-(oneway void)invalidateAndRefreshWiFiCallingProvisioningURLForSenderIdentityWithUUID:(id)arg1 ;
-(oneway void)setRelayCallingEnabled:(BOOL)arg1 forDeviceWithID:(id)arg2 ;
-(void)performDelegateCallbackBlock:(/*^block*/id)arg1 ;
-(oneway void)setThumperCallingEnabled:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2 ;
-(id)asynchronousServerWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_retrieveState;
-(oneway void)setRelayCallingEnabled:(BOOL)arg1 ;
-(NSMapTable *)delegateToQueue;
-(oneway void)setWiFiCallingEnabled:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2 ;
-(oneway void)cancelPinRequestFromPrimaryDevice;
-(void)setState:(TUCallCapabilitiesState *)arg1 ;
-(TUCallCapabilitiesState *)state;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(oneway void)setThumperCallingAllowedOnDefaultPairedDevice:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2 ;
-(oneway void)setThumperCallingAllowed:(BOOL)arg1 onSecondaryDeviceWithID:(id)arg2 forSenderIdentityWithUUID:(id)arg3 ;
-(oneway void)capabilityStateUpdated:(id)arg1 ;
-(int)token;
-(void)_updateState:(id)arg1 ;
-(oneway void)invalidateAndRefreshThumperCallingProvisioningURLForSenderIdentityWithUUID:(id)arg1 ;
-(id)asynchronousServer;
-(oneway void)requestPinFromPrimaryDevice;
-(oneway void)endEmergencyCallbackMode;
-(void)dealloc;
@end

