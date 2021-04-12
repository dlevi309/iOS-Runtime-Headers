/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@class _IDSService, NSSet, NSArray;

@interface IDSService : NSObject {

	_IDSService* _internal;

}

@property (nonatomic,readonly) _IDSService * _internal; 
@property (nonatomic,copy,readonly) NSSet * internalAccounts; 
@property (nonatomic,copy,readonly) NSSet * accounts; 
@property (nonatomic,copy,readonly) NSArray * devices; 
+(id)removeSentinelFromAliases:(id)arg1 ;
+(BOOL)checkMessageSize:(unsigned long long)arg1 priority:(long long)arg2 ;
-(void)dealloc;
-(_IDSService *)_internal;
-(id)internal;
-(NSArray *)devices;
-(NSSet *)accounts;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(id)initWithService:(id)arg1 ;
-(BOOL)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(id)accountMatchingSimIdentifier:(id)arg1 ;
-(id)accountMatchingSim:(id)arg1 ;
-(BOOL)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(BOOL)sendData:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(void)scheduleTransactionLogTask:(id)arg1 ;
-(NSSet *)internalAccounts;
-(id)aliases;
-(id)activeAliases;
-(void)activateAlias:(id)arg1 ;
-(void)deactivateAlias:(id)arg1 ;
-(id)initWithService:(id)arg1 commands:(id)arg2 manuallyAckMessages:(BOOL)arg3 ;
-(void)performGroupTask:(/*^block*/id)arg1 ;
-(BOOL)sendProtobuf:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7 ;
-(BOOL)sendOpportunisticData:(id)arg1 options:(id)arg2 identifier:(id)arg3 error:(id*)arg4 ;
-(BOOL)cancelOpportunisticDataWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7 ;
-(BOOL)sendData:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7 ;
-(BOOL)sendAccessoryData:(id)arg1 toAccessoryID:(id)arg2 accessToken:(id)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(BOOL)sendData:(id)arg1 priority:(long long)arg2 options:(id)arg3 identifier:(id*)arg4 error:(id*)arg5 ;
-(BOOL)getProgressUpdateForIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)sendAckForMessageWithContext:(id)arg1 ;
-(BOOL)sendCertifiedDeliveryReceipt:(id)arg1 ;
-(BOOL)cancelIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)sendServerMessage:(id)arg1 command:(id)arg2 fromAccount:(id)arg3 ;
-(id)serviceDomain;
-(id)iCloudAccount;
-(id)deviceForFromID:(id)arg1 ;
-(id)firstRoutableInternetDestinationForSelf;
-(id)deviceForUniqueID:(id)arg1 ;
-(id)devicesForBTUUID:(id)arg1 ;
-(id)uriForFromID:(id)arg1 ;
-(void)setPreferInfraWiFi:(BOOL)arg1 ;
-(void)setLinkPreferences:(id)arg1 ;
-(void)startOTRTest:(long long)arg1 ;
-(void)setPretendingToBeFull:(BOOL)arg1 ;
-(BOOL)isPretendingToBeFull;
-(void)testCloudQRConnection;
-(BOOL)updateSubServices:(id)arg1 forDevice:(id)arg2 ;
-(id)datagramConnectionForSessionDestination:(id)arg1 error:(id*)arg2 ;
-(id)datagramConnectionForSessionDestination:(id)arg1 uid:(unsigned)arg2 error:(id*)arg3 ;
-(id)datagramConnectionForSocketDescriptor:(int)arg1 error:(id*)arg2 ;
-(id)streamConnectionForSessionDestination:(id)arg1 error:(id*)arg2 ;
-(id)streamConnectionForSocketDescriptor:(int)arg1 error:(id*)arg2 ;
-(id)datagramChannelForSessionDestination:(id)arg1 error:(id*)arg2 ;
-(id)datagramChannelForSocketDescriptor:(int)arg1 error:(id*)arg2 ;
-(id)_accountWithAlias:(id)arg1 ;
-(id)initWithService:(id)arg1 serviceDomain:(id)arg2 ;
-(id)initWithService:(id)arg1 commands:(id)arg2 ;
-(id)initWithService:(id)arg1 manuallyAckMessages:(BOOL)arg2 ;
-(void)addDelegate:(id)arg1 withDelegateProperties:(id)arg2 queue:(id)arg3 ;
-(void)setProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2 ;
-(void)setProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2 ;
-(SEL)protobufActionForIncomingRequestsOfType:(unsigned short)arg1 ;
-(SEL)protobufActionForIncomingResponsesOfType:(unsigned short)arg1 ;
-(BOOL)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(BOOL)sendResourceAtURL:(id)arg1 metadata:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7 ;
-(BOOL)sendAheadGroup:(id)arg1 priority:(long long)arg2 options:(id)arg3 identifier:(id*)arg4 error:(id*)arg5 ;
-(long long)maxHomeKitPayloadSize;
-(void)updateSubServices:(id)arg1 ;
-(void)requestConnectionForUnicastParameter:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)activateAliases:(id)arg1 ;
-(void)deactivateAliases:(id)arg1 ;
@end

