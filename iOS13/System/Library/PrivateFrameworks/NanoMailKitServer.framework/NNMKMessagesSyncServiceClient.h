/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKMessagesSyncServiceClientDelegate;
@interface NNMKMessagesSyncServiceClient : NNMKSyncServiceEndpoint {

	id<NNMKMessagesSyncServiceClientDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NNMKMessagesSyncServiceClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<NNMKMessagesSyncServiceClientDelegate>)delegate;
-(void)setDelegate:(id<NNMKMessagesSyncServiceClientDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(id)sendMessage:(id)arg1 ;
-(id)deleteMessages:(id)arg1 ;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg1 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2 ;
-(void)readProtobufData:(id)arg1 type:(unsigned long long)arg2 ;
-(id)updateMessagesStatus:(id)arg1 ;
-(void)warnMessagesFilteredOut:(id)arg1 ;
-(void)requestCompactMessages:(id)arg1 ;
-(id)updateMailboxSelection:(id)arg1 ;
-(void)connectivityChanged;
@end

