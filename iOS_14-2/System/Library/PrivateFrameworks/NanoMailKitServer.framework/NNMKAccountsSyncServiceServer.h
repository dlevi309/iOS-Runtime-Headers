/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKAccountsSyncServiceServerDelegate;
@interface NNMKAccountsSyncServiceServer : NNMKSyncServiceEndpoint {

	id<NNMKAccountsSyncServiceServerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NNMKAccountsSyncServiceServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(id)syncVIPList:(id)arg1 ;
-(id<NNMKAccountsSyncServiceServerDelegate>)delegate;
-(id)addOrUpdateAccount:(id)arg1 ;
-(id)sendStandaloneAccountIdentity:(id)arg1 ;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg1 ;
-(void)setDelegate:(id<NNMKAccountsSyncServiceServerDelegate>)arg1 ;
-(id)requestWatchAccountsStatus:(id)arg1 ;
-(void)readProtobufData:(id)arg1 type:(unsigned long long)arg2 ;
-(id)deleteAccount:(id)arg1 ;
-(id)sendInitialAccountsSync:(id)arg1 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2 ;
@end

