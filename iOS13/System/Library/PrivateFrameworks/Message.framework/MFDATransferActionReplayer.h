/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <EmailCore/ECTransferActionReplayer.h>
#import <libobjc.A.dylib/ECTransferActionReplayerSubclassMethods.h>

@class MFDAMessageStore, NSString;

@interface MFDATransferActionReplayer : ECTransferActionReplayer <ECTransferActionReplayerSubclassMethods> {

	MFDAMessageStore* _store;

}

@property (nonatomic,retain) MFDAMessageStore * store;              //@synthesize store=_store - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MFDAMessageStore *)store;
-(void)setStore:(MFDAMessageStore *)arg1 ;
-(id)replayActionUsingStore:(id)arg1 ;
-(BOOL)isRecoverableError:(id)arg1 ;
-(id)fetchBodyDataForRemoteID:(id)arg1 mailboxURL:(id)arg2 ;
-(BOOL)downloadFailed;
-(id)copyItems:(id)arg1 destinationMailboxURL:(id)arg2 ;
-(id)moveItems:(id)arg1 destinationMailboxURL:(id)arg2 ;
-(id)appendItem:(id)arg1 mailboxURL:(id)arg2 ;
-(BOOL)deleteSourceMessagesFromTransferItems:(id)arg1 ;
@end

