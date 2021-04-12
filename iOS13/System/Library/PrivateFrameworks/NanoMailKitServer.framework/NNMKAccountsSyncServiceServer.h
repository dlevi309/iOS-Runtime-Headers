/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKAccountsSyncServiceServerDelegate;
@interface NNMKAccountsSyncServiceServer : NNMKSyncServiceEndpoint {

	id<NNMKAccountsSyncServiceServerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NNMKAccountsSyncServiceServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<NNMKAccountsSyncServiceServerDelegate>)delegate;
-(void)setDelegate:(id<NNMKAccountsSyncServiceServerDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(id)deleteAccount:(id)arg1 ;
-(id)addOrUpdateAccount:(id)arg1 ;
-(id)sendInitialAccountsSync:(id)arg1 ;
-(id)sendStandaloneAccountIdentity:(id)arg1 ;
-(id)requestWatchAccountsStatus:(id)arg1 ;
-(id)syncVIPList:(id)arg1 ;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg1 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2 ;
-(void)readProtobufData:(id)arg1 type:(unsigned long long)arg2 ;
@end

