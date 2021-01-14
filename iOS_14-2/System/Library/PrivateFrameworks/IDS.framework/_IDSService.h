/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <IDS/IDSGroupContextControllerDelegate.h>
#import <IDS/IDSAccountControllerDelegate.h>
#import <IDS/IDSConnectionDelegatePrivate.h>
#import <IDS/IDSDaemonListenerProtocol.h>

@class IDSAccountController, NSMutableDictionary, NSSet, NSMapTable, NSMutableSet, NSMutableArray, IDSGroupContextController, IDSQuickSwitchAcknowledgementTracker, IDSServiceProperties, IDSAccount, NSArray, NSString;

@interface _IDSService : NSObject <IDSGroupContextControllerDelegate, IDSAccountControllerDelegate, IDSConnectionDelegatePrivate, IDSDaemonListenerProtocol> {

	IDSAccountController* _accountController;
	NSMutableDictionary* _uniqueIDToConnection;
	NSSet* _commands;
	NSMapTable* _delegateToInfo;
	id _delegateContext;
	NSMutableDictionary* _protobufSelectors;
	NSMutableSet* _lastIsActiveSet;
	NSMutableArray* _linkedDevices;
	NSMutableDictionary* _subServices;
	BOOL _linkedDevicesLoaded;
	BOOL _pretendingToBeFull;
	BOOL _everHadDelegate;
	BOOL _manuallyAckMessages;
	BOOL _clientIsSandboxed;
	unsigned _listenerCaps;
	IDSGroupContextController* _groupContextController;
	NSMutableDictionary* _uniqueIDToProgress;
	IDSQuickSwitchAcknowledgementTracker* _acknowledgementTracker;
	IDSServiceProperties* _serviceProperties;
	/*^block*/id _pendingRegisteredIdentitiesBlock;

}

@property (nonatomic,retain,readonly) IDSGroupContextController * groupContextController;              //@synthesize groupContextController=_groupContextController - In the implementation block
@property (nonatomic,copy,readonly) NSSet * accounts; 
@property (nonatomic,copy,readonly) NSSet * internalAccounts; 
@property (nonatomic,readonly) IDSAccount * iCloudAccount; 
@property (nonatomic,copy,readonly) NSArray * devices; 
@property (nonatomic,copy,readonly) NSString * serviceDomain; 
@property (assign,getter=isPretendingToBeFull,nonatomic) BOOL pretendingToBeFull; 
@property (assign,nonatomic) BOOL manuallyAckMessages;                                                 //@synthesize manuallyAckMessages=_manuallyAckMessages - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)serviceWithIdentifier:(id)arg1 commands:(id)arg2 manuallyAckMessages:(BOOL)arg3 delegateContext:(id)arg4 completion:(/*^block*/id)arg5 ;
+(id)deviceForFromID:(id)arg1 fromDevices:(id)arg2 ;
-(NSSet *)accounts;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)connection:(id)arg1 devicesChanged:(id)arg2 ;
-(void)_callIsActiveChanged;
-(BOOL)sendOpportunisticData:(id)arg1 options:(id)arg2 identifier:(id)arg3 error:(id*)arg4 ;
-(void)connection:(id)arg1 incomingAccessoryReportMessage:(id)arg2 accessoryID:(id)arg3 controllerID:(id)arg4 context:(id)arg5 ;
-(void)removeDelegate:(id)arg1 ;
-(NSArray *)devices;
-(void)connection:(id)arg1 incomingGroupData:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)setManuallyAckMessages:(BOOL)arg1 ;
-(void)_tearDownConnectionForUniqueID:(id)arg1 ;
-(void)connection:(id)arg1 identifier:(id)arg2 alternateCallbackID:(id)arg3 willSendToDestinations:(id)arg4 skippedDestinations:(id)arg5 registrationPropertyToDestinations:(id)arg6 ;
-(BOOL)cancelOpportunisticDataWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(long long)_messageTypeForCommand:(id)arg1 ;
-(IDSGroupContextController *)groupContextController;
-(void)accountController:(id)arg1 accountRemoved:(id)arg2 ;
-(id)deviceForUniqueID:(id)arg1 ;
-(id)firstRoutableInternetDestinationForSelf;
-(NSSet *)internalAccounts;
-(id)deviceForFromID:(id)arg1 ;
-(id)daemonListener;
-(/*^block*/id)_acknowledgementBlockWithDelegateIdentifier:(id)arg1 ;
-(id)groupContextController:(id)arg1 accountsForAlises:(id)arg2 ;
-(void)connection:(id)arg1 account:(id)arg2 receivedGroupSessionParticipantUpdate:(id)arg3 ;
-(id)_initWithDelegateContext:(id)arg1 ;
-(void)resendSubServicesToDaemonForCurrentDevice;
-(void)connection:(id)arg1 identifier:(id)arg2 fromID:(id)arg3 hasBeenDeliveredWithContext:(id)arg4 ;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 ;
-(void)service:(id)arg1 tinkerDeviceUpdated:(id)arg2 ;
-(id)_payloadFromDecryptedData:(id)arg1 ;
-(id)_activeDeviceForUniqueID:(id)arg1 ;
-(void)sendAckForMessageWithContext:(id)arg1 ;
-(void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(/*^block*/id)arg2 callbackBlock:(/*^block*/id)arg3 postCallbacksBlock:(/*^block*/id)arg4 group:(id)arg5 ;
-(void)connection:(id)arg1 incomingData:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)connection:(id)arg1 isActiveChanged:(BOOL)arg2 ;
-(void)_enableAccount:(id)arg1 ;
-(BOOL)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7 ;
-(void)connection:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)_callLinkedDevicesChanged;
-(void)_processAccountSet:(id)arg1 ;
-(void)_disableAccount:(id)arg1 ;
-(void)connection:(id)arg1 account:(id)arg2 receivedGroupSessionParticipantDataUpdate:(id)arg3 ;
-(void)_callDelegatesForDevicesChanged;
-(BOOL)sendProtobuf:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7 ;
-(void)connection:(id)arg1 didSendOpportunisticDataWithIdentifier:(id)arg2 toIDs:(id)arg3 ;
-(void)_loadCachedLinkedDevices;
-(void)_stopAwaitingQuickSwitchAcknowledgementFromDelegateWithIdentifier:(id)arg1 ;
-(id)datagramConnectionForSocketDescriptor:(int)arg1 error:(id*)arg2 ;
-(void)connection:(id)arg1 didHintCheckingTransportLogWithReason:(long long)arg2 ;
-(void)groupContextController:(id)arg1 didCreateGroup:(id)arg2 ;
-(id)datagramChannelForSocketDescriptor:(int)arg1 error:(id*)arg2 ;
-(void)accountController:(id)arg1 accountEnabled:(id)arg2 ;
-(void)setLinkPreferences:(id)arg1 ;
-(BOOL)sendAccessoryData:(id)arg1 toAccessoryID:(id)arg2 accessToken:(id)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(BOOL)getProgressUpdateForIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)_enforceSandboxPolicy;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 group:(id)arg2 ;
-(void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(/*^block*/id)arg2 callbackBlock:(/*^block*/id)arg3 postCallbacksBlock:(/*^block*/id)arg4 ;
-(void)_handlePretendingToBeFullWithIdentifier:(id*)arg1 ;
-(void)connection:(id)arg1 incomingTopLevelMessage:(id)arg2 fromID:(id)arg3 messageContext:(id)arg4 ;
-(BOOL)sendData:(id)arg1 priority:(long long)arg2 options:(id)arg3 identifier:(id*)arg4 error:(id*)arg5 ;
-(void)_reloadCachedLinkedDevices;
-(void)didSwitchActivePairedDevice:(id)arg1 forService:(id)arg2 wasHandled:(BOOL*)arg3 ;
-(BOOL)sendServerMessage:(id)arg1 command:(id)arg2 fromAccount:(id)arg3 ;
-(void)performGroupTask:(/*^block*/id)arg1 ;
-(BOOL)manuallyAckMessages;
-(void)daemonConnected;
-(id)datagramConnectionForSessionDestination:(id)arg1 uid:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)sendData:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7 ;
-(BOOL)sendCertifiedDeliveryReceipt:(id)arg1 ;
-(SEL)protobufActionForType:(unsigned short)arg1 isResponse:(BOOL)arg2 ;
-(void)connection:(id)arg1 messageIdentifier:(id)arg2 alternateCallbackID:(id)arg3 updatedWithResponseCode:(long long)arg4 error:(id)arg5 lastCall:(BOOL)arg6 messageContext:(id)arg7 ;
-(id)_sendingAccountForAccount:(id)arg1 ;
-(id)streamConnectionForSessionDestination:(id)arg1 error:(id*)arg2 ;
-(void)connection:(id)arg1 incomingPendingMessageFromID:(id)arg2 context:(id)arg3 ;
-(BOOL)cancelIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)service:(id)arg1 linkedDevicesUpdated:(id)arg2 ;
-(void)connection:(id)arg1 account:(id)arg2 sessionInviteReceived:(id)arg3 fromID:(id)arg4 transportType:(id)arg5 options:(id)arg6 context:(id)arg7 messageContext:(id)arg8 ;
-(void)startOTRTest:(long long)arg1 ;
-(id)devicesForBTUUID:(id)arg1 ;
-(void)setProtobufAction:(SEL)arg1 forProtobufType:(unsigned short)arg2 isResponse:(BOOL)arg3 ;
-(void)service:(id)arg1 tinkerDeviceRemoved:(id)arg2 ;
-(void)connection:(id)arg1 incomingProtobuf:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(id)_filteredAccountsFrom:(id)arg1 ;
-(id)linkedDeviceForFromID:(id)arg1 withRelationship:(long long)arg2 ;
-(id)initWithService:(id)arg1 commands:(id)arg2 manuallyAckMessages:(BOOL)arg3 delegateContext:(id)arg4 ;
-(BOOL)sendResourceAtURL:(id)arg1 metadata:(id)arg2 fromAccount:(id)arg3 toDestinations:(id)arg4 priority:(long long)arg5 options:(id)arg6 identifier:(id*)arg7 error:(id*)arg8 ;
-(void)connection:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(void)_logConnectionMap;
-(BOOL)isPretendingToBeFull;
-(void)accountController:(id)arg1 accountAdded:(id)arg2 ;
-(id)daemonController;
-(void)_updateLinkedDevicesWithDevicesInfo:(id)arg1 ;
-(IDSAccount *)iCloudAccount;
-(void)connection:(id)arg1 incomingOpportunisticData:(id)arg2 withIdentifier:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 tinkerDeviceAdded:(id)arg2 ;
-(id)uriForFromID:(id)arg1 ;
-(id)linkedDevicesWithRelationship:(long long)arg1 ;
-(void)connection:(id)arg1 incomingEngramMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)testCloudQRConnection;
-(void)scheduleTransactionLogTask:(id)arg1 ;
-(BOOL)canSendMessageWithAccount:(id)arg1 toDestination:(id)arg2 ;
-(void)connection:(id)arg1 didUpdateDeviceIdentity:(id)arg2 error:(id)arg3 context:(id)arg4 ;
-(id)streamConnectionForSocketDescriptor:(int)arg1 error:(id*)arg2 ;
-(id)_init;
-(id)datagramChannelForSessionDestination:(id)arg1 error:(id*)arg2 ;
-(id)_sendingAccountForAccount:(id)arg1 destination:(id)arg2 fromID:(id)arg3 ;
-(void)setPreferInfraWiFi:(BOOL)arg1 ;
-(BOOL)updateSubServices:(id)arg1 forDevice:(id)arg2 ;
-(void)setPretendingToBeFull:(BOOL)arg1 ;
-(void)_setupNewConnectionForAccount:(id)arg1 ;
-(BOOL)_isDroppingMessages;
-(void)accountController:(id)arg1 accountDisabled:(id)arg2 ;
-(void)connection:(id)arg1 connectedDevicesChanged:(id)arg2 ;
-(BOOL)_canAccount:(id)arg1 sendWithFromID:(id)arg2 ;
-(void)connection:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 context:(id)arg5 ;
-(NSString *)serviceDomain;
-(BOOL)sendAheadGroup:(id)arg1 priority:(long long)arg2 options:(id)arg3 identifier:(id*)arg4 completion:(/*^block*/id)arg5 ;
-(void)OTRTestCallback:(id)arg1 time:(double)arg2 error:(id)arg3 ;
-(void)connection:(id)arg1 didFlushCacheForRemoteURI:(id)arg2 fromURI:(id)arg3 guid:(id)arg4 ;
-(void)dealloc;
-(void)connection:(id)arg1 incomingAccessoryData:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)_sendMissingMessageMetric:(id)arg1 ;
-(id)datagramConnectionForSessionDestination:(id)arg1 error:(id*)arg2 ;
@end

