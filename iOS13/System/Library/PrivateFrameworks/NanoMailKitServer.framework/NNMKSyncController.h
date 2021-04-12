/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@protocol NNMKDeviceRegistryHolder;
@interface NNMKSyncController : NSObject {

	id<NNMKDeviceRegistryHolder> _delegate;

}

@property (assign,nonatomic,__weak) id<NNMKDeviceRegistryHolder> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<NNMKDeviceRegistryHolder>)delegate;
-(void)setDelegate:(id<NNMKDeviceRegistryHolder>)arg1 ;
-(id)mailboxWithId:(id)arg1 ;
-(id)deviceRegistry;
-(id)watchMessageIdFromMessageId:(id)arg1 ;
-(BOOL)canSyncMailbox:(id)arg1 ;
-(id)filterMessages:(id)arg1 byAlreadySynced:(BOOL)arg2 byMailbox:(id)arg3 ;
-(id)filterMessages:(id)arg1 receivedBeforeDate:(id)arg2 ;
-(BOOL)shouldAddsDeletesMessagesByStatusUpdatesForMailbox:(id)arg1 ;
-(BOOL)isValidMessageStatus:(unsigned long long)arg1 forMailbox:(id)arg2 ;
-(BOOL)canSyncMessage:(id)arg1 forMailbox:(id)arg2 ;
-(id)watchAttachmentContentIdFromContentId:(id)arg1 ;
-(BOOL)_validateMessage:(id)arg1 ;
-(BOOL)isMessage:(id)arg1 fromMailbox:(id)arg2 ;
-(id)groupMessagesByMailboxId:(id)arg1 ;
-(id)removeInvalidMailboxesFromMailboxSelection:(id)arg1 ;
-(BOOL)doesMessageBelongToSyncedMailboxes:(id)arg1 ;
-(id)messageIdFromWatchMessageId:(id)arg1 ;
-(id)mailboxesToSync;
-(void)groupMessagesByMailbox:(id)arg1 mailboxes:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)mailboxForMessageWithId:(id)arg1 ;
@end

