/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKMessagesSyncServiceServerDelegate;
@interface NNMKMessagesSyncServiceServer : NNMKSyncServiceEndpoint {

	id<NNMKMessagesSyncServiceServerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NNMKMessagesSyncServiceServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(id)sendMoreMessages:(id)arg1 ;
-(id<NNMKMessagesSyncServiceServerDelegate>)delegate;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg1 ;
-(id)sendBatchedFetchResult:(id)arg1 ;
-(id)sendBatchedInitialMessagesSync:(id)arg1 ;
-(void)connectivityChanged;
-(void)setDelegate:(id<NNMKMessagesSyncServiceServerDelegate>)arg1 ;
-(id)sendInitialMessagesSync:(id)arg1 ;
-(id)updateMailboxSelection:(id)arg1 ;
-(id)addMessages:(id)arg1 notificationPriority:(BOOL)arg2 ;
-(void)readProtobufData:(id)arg1 type:(unsigned long long)arg2 ;
-(id)updateMessagesStatus:(id)arg1 notificationPriority:(BOOL)arg2 ;
-(id)sendMoreMessagesForConversation:(id)arg1 ;
-(id)sendCoalescedBatchedFetchResult:(id)arg1 ;
-(void)spaceBecameAvailable;
-(id)deleteMessages:(id)arg1 notificationPriority:(BOOL)arg2 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2 ;
@end

