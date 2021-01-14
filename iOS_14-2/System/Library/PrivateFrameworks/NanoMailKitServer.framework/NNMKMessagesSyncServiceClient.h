/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKMessagesSyncServiceClientDelegate;
@interface NNMKMessagesSyncServiceClient : NNMKSyncServiceEndpoint {

	id<NNMKMessagesSyncServiceClientDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NNMKMessagesSyncServiceClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(id)sendMessage:(id)arg1 ;
-(id<NNMKMessagesSyncServiceClientDelegate>)delegate;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg1 ;
-(void)connectivityChanged;
-(void)setDelegate:(id<NNMKMessagesSyncServiceClientDelegate>)arg1 ;
-(id)updateMailboxSelection:(id)arg1 ;
-(void)readProtobufData:(id)arg1 type:(unsigned long long)arg2 ;
-(id)updateMessagesStatus:(id)arg1 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2 ;
-(id)deleteMessages:(id)arg1 ;
-(void)warnMessagesFilteredOut:(id)arg1 ;
-(void)requestCompactMessages:(id)arg1 ;
@end

