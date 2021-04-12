/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <libobjc.A.dylib/CXProviderHostProtocol.h>
#import <libobjc.A.dylib/CXProviderVendorProtocol.h>

@protocol CXCallSourceDelegate, OS_dispatch_queue;
@class NSObject, NSString, NSURL;

@interface CXCallSource : NSObject <CXProviderHostProtocol, CXProviderVendorProtocol> {

	BOOL _connected;
	id<CXCallSourceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<CXProviderVendorProtocol> vendorProtocolDelegate; 
@property (assign,getter=isConnected,nonatomic) BOOL connected;                                                                  //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic,__weak) id<CXCallSourceDelegate> delegate;                                                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,copy,readonly) NSURL * bundleURL; 
@property (nonatomic,readonly) int processIdentifier; 
@property (getter=isPermittedToUsePublicAPI,nonatomic,readonly) BOOL permittedToUsePublicAPI; 
@property (getter=isPermittedToUsePrivateAPI,nonatomic,readonly) BOOL permittedToUsePrivateAPI; 
@property (getter=isPermittedToUseBluetoothAccessories,nonatomic,readonly) BOOL permittedToUseBluetoothAccessories; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<CXCallSourceDelegate>)delegate;
-(void)setDelegate:(id<CXCallSourceDelegate>)arg1 ;
-(NSString *)identifier;
-(int)processIdentifier;
-(NSString *)bundleIdentifier;
-(NSURL *)bundleURL;
-(BOOL)isConnected;
-(void)setConnected:(BOOL)arg1 ;
-(id<CXProviderVendorProtocol>)vendorProtocolDelegate;
-(BOOL)isPermittedToUsePublicAPI;
-(BOOL)isPermittedToUsePrivateAPI;
-(oneway void)actionCompleted:(id)arg1 ;
-(oneway void)commitTransaction:(id)arg1 ;
-(oneway void)handleActionTimeout:(id)arg1 ;
-(oneway void)handleAudioSessionActivationStateChangedTo:(BOOL)arg1 ;
-(oneway void)registerWithConfiguration:(id)arg1 ;
-(oneway void)reportNewIncomingCallWithUUID:(id)arg1 update:(id)arg2 reply:(/*^block*/id)arg3 ;
-(oneway void)reportCallWithUUID:(id)arg1 updated:(id)arg2 ;
-(oneway void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2 ;
-(oneway void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2 ;
-(oneway void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2 ;
-(oneway void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 failureContext:(id)arg4 ;
-(oneway void)reportAudioFinishedForCallWithUUID:(id)arg1 ;
-(oneway void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3 ;
-(oneway void)reportCallWithUUID:(id)arg1 changedMeterLevel:(float)arg2 forDirection:(long long)arg3 ;
-(oneway void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3 ;
-(oneway void)requestTransaction:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)beginWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isPermittedToUseBluetoothAccessories;
-(void)reportCallWithUUID:(id)arg1 updated:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 failureContext:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)reportAudioFinishedForCallWithUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)reportCallWithUUID:(id)arg1 changedMeterLevel:(float)arg2 forDirection:(long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)actionCompleted:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

