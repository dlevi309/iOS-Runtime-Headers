/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
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
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,readonly) int processIdentifier; 
@property (nonatomic,readonly) SCD_Struct_CX1 auditToken; 
@property (getter=isPermittedToUsePublicAPI,nonatomic,readonly) BOOL permittedToUsePublicAPI; 
@property (getter=isPermittedToUsePrivateAPI,nonatomic,readonly) BOOL permittedToUsePrivateAPI; 
@property (getter=isPermittedToUseBluetoothAccessories,nonatomic,readonly) BOOL permittedToUseBluetoothAccessories; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isConnected;
-(NSString *)localizedName;
-(void)setConnected:(BOOL)arg1 ;
-(NSURL *)bundleURL;
-(int)processIdentifier;
-(id)init;
-(id<CXCallSourceDelegate>)delegate;
-(BOOL)isPermittedToUsePublicAPI;
-(BOOL)isPermittedToUsePrivateAPI;
-(NSString *)bundleIdentifier;
-(SCD_Struct_CX1)auditToken;
-(void)setDelegate:(id<CXCallSourceDelegate>)arg1 ;
-(NSString *)description;
-(id<CXProviderVendorProtocol>)vendorProtocolDelegate;
-(BOOL)isPermittedToUseBluetoothAccessories;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)identifier;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
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

