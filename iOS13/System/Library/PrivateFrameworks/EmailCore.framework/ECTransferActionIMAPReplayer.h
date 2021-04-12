/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <EmailCore/ECTransferActionReplayer.h>
#import <libobjc.A.dylib/ECTransferActionReplayerSubclassMethods.h>
#import <libobjc.A.dylib/ECIMAPLocalActionReplayer.h>

@protocol ECIMAPServerInterface, ECIMAPLocalActionReplayerDelegate;
@class NSString;

@interface ECTransferActionIMAPReplayer : ECTransferActionReplayer <ECTransferActionReplayerSubclassMethods, ECIMAPLocalActionReplayer> {

	id<ECIMAPServerInterface> serverInterface;
	id<ECIMAPLocalActionReplayerDelegate> delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<ECIMAPLocalActionReplayerDelegate> delegate; 
@property (nonatomic,retain) id<ECIMAPServerInterface> serverInterface; 
-(id<ECIMAPLocalActionReplayerDelegate>)delegate;
-(void)setDelegate:(id<ECIMAPLocalActionReplayerDelegate>)arg1 ;
-(id<ECIMAPServerInterface>)serverInterface;
-(BOOL)isRecoverableError:(id)arg1 ;
-(id)fetchBodyDataForRemoteID:(id)arg1 mailboxURL:(id)arg2 ;
-(BOOL)downloadFailed;
-(id)copyItems:(id)arg1 destinationMailboxURL:(id)arg2 ;
-(id)moveItems:(id)arg1 destinationMailboxURL:(id)arg2 ;
-(id)appendItem:(id)arg1 mailboxURL:(id)arg2 ;
-(BOOL)deleteSourceMessagesFromTransferItems:(id)arg1 ;
-(void)setServerInterface:(id<ECIMAPServerInterface>)arg1 ;
-(id)_transferItems:(id)arg1 destinationMailboxURL:(id)arg2 isMove:(BOOL)arg3 ;
@end

