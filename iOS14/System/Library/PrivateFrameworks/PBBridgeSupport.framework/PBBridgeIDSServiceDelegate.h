/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@class IDSService, NSTimer, NSMutableDictionary, BKSProcessAssertion, NSString;

@interface PBBridgeIDSServiceDelegate : NSObject <IDSServiceDelegate> {

	BOOL _shouldSuppressTransportReachabilityTimeout;
	BOOL _isTinkerPairing;
	IDSService* _service;
	NSTimer* _transportReachabilityTimer;
	NSMutableDictionary* _inflightMessages;
	NSMutableDictionary* _pendingMessages;
	BKSProcessAssertion* _suspendAssertion;

}

@property (nonatomic,retain) NSTimer * transportReachabilityTimer;                         //@synthesize transportReachabilityTimer=_transportReachabilityTimer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * inflightMessages;                       //@synthesize inflightMessages=_inflightMessages - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingMessages;                        //@synthesize pendingMessages=_pendingMessages - In the implementation block
@property (nonatomic,retain) BKSProcessAssertion * suspendAssertion;                       //@synthesize suspendAssertion=_suspendAssertion - In the implementation block
@property (nonatomic,retain) IDSService * service;                                         //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressTransportReachabilityTimeout;              //@synthesize shouldSuppressTransportReachabilityTimeout=_shouldSuppressTransportReachabilityTimeout - In the implementation block
@property (assign,setter=setTinkerPairing:,nonatomic) BOOL isTinkerPairing;                //@synthesize isTinkerPairing=_isTinkerPairing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)service:(id)arg1 linkedDevicesChanged:(id)arg2 ;
-(void)setPendingMessages:(NSMutableDictionary *)arg1 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(id)serviceIdentifier;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)setService:(IDSService *)arg1 ;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(NSMutableDictionary *)pendingMessages;
-(IDSService *)service;
-(id)_sendProtoBuf:(id)arg1 service:(id)arg2 priority:(long long)arg3 responseIdentifier:(id)arg4 expectsResponse:(BOOL)arg5 ;
-(id)sendProtoBuf:(id)arg1 service:(id)arg2 priority:(long long)arg3 responseIdentifier:(id)arg4 expectsResponse:(BOOL)arg5 retryCount:(long long)arg6 retryInterval:(double)arg7 ;
-(NSMutableDictionary *)inflightMessages;
-(void)setInflightMessages:(NSMutableDictionary *)arg1 ;
-(void)endSetupTransaction;
-(void)transportBecameReachable;
-(void)transportBecameUnreachable;
-(void)setupServiceMessageSelectorMappings;
-(id)customDescriptionOfMessageType:(unsigned short)arg1 ;
-(void)clearPowerAssertionIfNotPairing:(id)arg1 ;
-(void)startReachabilityTimer;
-(void)cancelReachabilityTimer;
-(void)checkReachability;
-(BOOL)connectionStateWithDevices:(id)arg1 accounts:(id)arg2 ;
-(BOOL)reportConnectionForService:(id)arg1 accounts:(id)arg2 devices:(id)arg3 ;
-(void)updateConnectivityTimer:(BOOL)arg1 ;
-(void)beginSetupTransaction;
-(void)resetTransportReachabilityTimer;
-(void)setShouldSuppressTransportReachabilityTimeout:(BOOL)arg1 ;
-(BOOL)shouldSuppressTransportReachabilityTimeout;
-(BOOL)isTinkerPairing;
-(void)setTinkerPairing:(BOOL)arg1 ;
-(NSTimer *)transportReachabilityTimer;
-(void)setTransportReachabilityTimer:(NSTimer *)arg1 ;
-(BKSProcessAssertion *)suspendAssertion;
-(void)setSuspendAssertion:(BKSProcessAssertion *)arg1 ;
@end

