/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKAccountsSyncServiceClientDelegate;
@interface NNMKAccountsSyncServiceClient : NNMKSyncServiceEndpoint {

	id<NNMKAccountsSyncServiceClientDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NNMKAccountsSyncServiceClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(id<NNMKAccountsSyncServiceClientDelegate>)delegate;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg1 ;
-(void)setDelegate:(id<NNMKAccountsSyncServiceClientDelegate>)arg1 ;
-(void)readProtobufData:(id)arg1 type:(unsigned long long)arg2 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2 ;
-(id)updateAccountSourceTypeForAccount:(id)arg1 ;
-(id)sendAccountAuthenticationStatus:(id)arg1 ;
@end

