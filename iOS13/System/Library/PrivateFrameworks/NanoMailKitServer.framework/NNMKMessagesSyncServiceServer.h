/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKMessagesSyncServiceServerDelegate;
@interface NNMKMessagesSyncServiceServer : NNMKSyncServiceEndpoint {

	id<NNMKMessagesSyncServiceServerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NNMKMessagesSyncServiceServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<NNMKMessagesSyncServiceServerDelegate>)delegate;
-(void)setDelegate:(id<NNMKMessagesSyncServiceServerDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg1 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2 ;
-(void)readProtobufData:(id)arg1 type:(unsigned long long)arg2 ;
-(id)updateMailboxSelection:(id)arg1 ;
-(void)connectivityChanged;
-(void)spaceBecameAvailable;
-(id)updateMessagesStatus:(id)arg1 notificationPriority:(BOOL)arg2 ;
-(id)deleteMessages:(id)arg1 notificationPriority:(BOOL)arg2 ;
-(id)addMessages:(id)arg1 notificationPriority:(BOOL)arg2 ;
-(id)sendInitialMessagesSync:(id)arg1 ;
-(id)sendBatchedInitialMessagesSync:(id)arg1 ;
-(id)sendMoreMessages:(id)arg1 ;
-(id)sendMoreMessagesForConversation:(id)arg1 ;
-(id)sendBatchedFetchResult:(id)arg1 ;
-(id)sendCoalescedBatchedFetchResult:(id)arg1 ;
@end

