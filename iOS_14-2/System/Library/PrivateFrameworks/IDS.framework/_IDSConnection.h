/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <IDS/IDSDaemonListenerProtocol.h>
#import <IDS/IDSAccountDelegate.h>

@class NSMapTable, IDSAccount, NSSet, NSString, IMOrderedMutableDictionary;

@interface _IDSConnection : NSObject <IDSDaemonListenerProtocol, IDSAccountDelegate> {

	id _messageContext;
	id _delegateContext;
	unsigned char _incomingMessageLoggingSequence;
	unsigned char _outgoingMessageLoggingSequence;
	NSMapTable* _delegateToInfo;
	IDSAccount* _account;
	NSSet* _commands;
	NSString* _serviceToken;
	IMOrderedMutableDictionary* _pendingSends;
	unsigned _delegateCapabilities;
	BOOL _indirectDelegateCallouts;
	unsigned _wakingDowngradeCount;

}

@property (assign,nonatomic) unsigned wakingDowngradeCount;              //@synthesize wakingDowngradeCount=_wakingDowngradeCount - In the implementation block
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) IDSAccount * account; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(IDSAccount *)account;
-(void)_connect;
-(void)removeDelegate:(id)arg1 ;
-(void)accessoryReportMessageReceived:(id)arg1 accessoryID:(id)arg2 controllerID:(id)arg3 withGUID:(id)arg4 forTopic:(id)arg5 toIdentifier:(id)arg6 fromID:(id)arg7 context:(id)arg8 ;
-(void)account:(id)arg1 isActiveChanged:(BOOL)arg2 ;
-(id)daemonListener;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 ;
-(void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(/*^block*/id)arg2 callbackBlock:(/*^block*/id)arg3 postCallbacksBlock:(/*^block*/id)arg4 group:(id)arg5 ;
-(BOOL)isActive;
-(void)messageIdentifier:(id)arg1 alternateCallbackID:(id)arg2 forAccount:(id)arg3 willSendToDestinations:(id)arg4 skippedDestinations:(id)arg5 registrationPropertyToDestinations:(id)arg6 ;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 group:(id)arg2 ;
-(void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(/*^block*/id)arg2 callbackBlock:(/*^block*/id)arg3 postCallbacksBlock:(/*^block*/id)arg4 ;
-(void)daemonConnected;
-(BOOL)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(id)daemonController;
-(id)_init;
-(void)opportunisticDataReceived:(id)arg1 withIdentifier:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)messageReceived:(id)arg1 withGUID:(id)arg2 withPayload:(id)arg3 forTopic:(id)arg4 toIdentifier:(id)arg5 fromID:(id)arg6 context:(id)arg7 ;
-(void)dataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6 ;
-(void)accessoryDataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6 ;
-(void)updateDeviceIdentity:(id)arg1 error:(id)arg2 ;
-(void)messageIdentifier:(id)arg1 alternateCallbackID:(id)arg2 forAccount:(id)arg3 updatedWithResponseCode:(long long)arg4 error:(id)arg5 lastCall:(BOOL)arg6 context:(id)arg7 ;
-(void)didSendOpportunisticDataWithIdentifier:(id)arg1 onAccount:(id)arg2 toIDs:(id)arg3 ;
-(void)messageIdentifier:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 hasBeenDeliveredWithContext:(id)arg5 ;
-(void)protobufReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6 ;
-(void)pendingIncomingMessageWithGUID:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)groupShareReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6 ;
-(void)checkTransportLogWithReason:(long long)arg1 ;
-(void)engramDataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6 ;
-(void)didFlushCacheForService:(id)arg1 remoteURI:(id)arg2 fromURI:(id)arg3 guid:(id)arg4 ;
-(void)sessionInvitationReceivedWithPayload:(id)arg1 forTopic:(id)arg2 sessionID:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 transportType:(id)arg6 ;
-(void)receivedGroupSessionParticipantUpdate:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4 ;
-(void)receivedGroupSessionParticipantDataUpdate:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4 ;
-(void)_setTemporaryMessageContext:(id)arg1 ;
-(id)initWithAccount:(id)arg1 commands:(id)arg2 indirectDelegateCallouts:(BOOL)arg3 delegateContext:(id)arg4 ;
-(BOOL)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(BOOL)sendData:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_isDestinationSingleLocalAddress:(id)arg1 ;
-(unsigned)wakingDowngradeCount;
-(void)setWakingDowngradeCount:(unsigned)arg1 ;
-(id)_activeDevice;
-(void)_replaceSentinelInSendParameters:(id)arg1 withCurrentActiveDevice:(id)arg2 ;
-(id)_sendWithParameters:(id)arg1 options:(id)arg2 loggingType:(id)arg3 loggingDataSize:(unsigned long long)arg4 ;
-(void)_resendPendingSends;
-(void)_handleLastCallForPendingIdentifier:(id)arg1 callbackID:(id)arg2 ;
-(BOOL)_shouldAcceptIncomingType:(id)arg1 forTopic:(id)arg2 localURI:(id)arg3 remoteURI:(id)arg4 validateAliases:(BOOL)arg5 guid:(id)arg6 ;
-(BOOL)_isAccountInValidRegistrationStateToAcceptMessages;
-(void)dealloc;
-(BOOL)_canServiceNameAcceptMessagesInTransientRegistrationState:(id)arg1 ;
-(BOOL)sendServerMessage:(id)arg1 command:(id)arg2 ;
-(void)account:(id)arg1 devicesChanged:(id)arg2 ;
-(void)account:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(void)account:(id)arg1 connectedDevicesChanged:(id)arg2 ;
-(void)setDelegateCapabilities:(unsigned)arg1 ;
-(void)_sendMissingMessageMetric:(id)arg1 ;
@end

