/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
*/


@protocol WCXPCManagerDaemonProtocol <NSObject>
@required
-(void)sessionReadyForInitialStateForClientPairingID:(id)arg1 supportsActiveDeviceSwitch:(BOOL)arg2 withErrorHandler:(/*^block*/id)arg3;
-(void)updateApplicationContext:(id)arg1 clientPairingID:(id)arg2 errorHandler:(/*^block*/id)arg3;
-(void)transferFile:(id)arg1 sandboxToken:(id)arg2 clientPairingID:(id)arg3 errorHandler:(/*^block*/id)arg4;
-(void)cancelSendWithIdentifier:(id)arg1;
-(void)transferUserInfo:(id)arg1 withURL:(id)arg2 clientPairingID:(id)arg3 errorHandler:(/*^block*/id)arg4;
-(void)acknowledgeFileIndexWithIdentifier:(id)arg1 clientPairingID:(id)arg2;
-(void)acknowledgeFileResultIndexWithIdentifier:(id)arg1 clientPairingID:(id)arg2;
-(void)acknowledgeUserInfoIndexWithIdentifier:(id)arg1 clientPairingID:(id)arg2;
-(void)acknowledgeUserInfoResultIndexWithIdentifier:(id)arg1 clientPairingID:(id)arg2;
-(void)cancelAllOutstandingMessages;
-(void)sendMessage:(id)arg1 clientPairingID:(id)arg2 acceptanceHandler:(/*^block*/id)arg3;

@end

