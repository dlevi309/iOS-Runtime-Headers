/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@protocol NNMKDeviceRegistryHolder;
@interface NNMKSyncController : NSObject {

	id<NNMKDeviceRegistryHolder> _delegate;

}

@property (assign,nonatomic,__weak) id<NNMKDeviceRegistryHolder> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)mailboxForMessageWithId:(id)arg1 ;
-(id)filterMessages:(id)arg1 byAlreadySynced:(BOOL)arg2 byMailbox:(id)arg3 ;
-(BOOL)canSyncMailbox:(id)arg1 ;
-(id)watchMessageIdFromMessageId:(id)arg1 ;
-(id<NNMKDeviceRegistryHolder>)delegate;
-(id)filterMessages:(id)arg1 receivedBeforeDate:(id)arg2 ;
-(id)mailboxWithId:(id)arg1 ;
-(id)deviceRegistry;
-(id)watchAttachmentContentIdFromContentId:(id)arg1 ;
-(void)setDelegate:(id<NNMKDeviceRegistryHolder>)arg1 ;
-(BOOL)isValidMessageStatus:(unsigned long long)arg1 forMailbox:(id)arg2 ;
-(id)messageIdFromWatchMessageId:(id)arg1 ;
-(BOOL)canSyncMessage:(id)arg1 forMailbox:(id)arg2 ;
-(id)removeInvalidMailboxesFromMailboxSelection:(id)arg1 ;
-(BOOL)_validateMessage:(id)arg1 ;
-(BOOL)doesMessageBelongToSyncedMailboxes:(id)arg1 ;
-(void)groupMessagesByMailbox:(id)arg1 mailboxes:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)mailboxesToSync;
-(BOOL)isMessage:(id)arg1 fromMailbox:(id)arg2 ;
-(BOOL)shouldAddsDeletesMessagesByStatusUpdatesForMailbox:(id)arg1 ;
-(id)groupMessagesByMailboxId:(id)arg1 ;
@end

