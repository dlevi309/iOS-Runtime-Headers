/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/EFLoggable.h>

@class EMRemoteConnection, NSString;

@interface EMOutgoingMessageRepository : NSObject <EFLoggable> {

	EMRemoteConnection* _connection;

}

@property (retain) EMRemoteConnection * connection;                 //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)remoteInterface;
+(id)signpostLog;
-(EMRemoteConnection *)connection;
-(void)setConnection:(EMRemoteConnection *)arg1 ;
-(unsigned long long)signpostID;
-(BOOL)isProcessing;
-(id)initWithRemoteConnection:(id)arg1 ;
-(void)suspendDeliveryQueue;
-(void)resumeDeliveryQueue;
-(void)processAllQueuedMessages;
-(id)saveDraftMessage:(id)arg1 mailboxObjectID:(id)arg2 previousDraftObjectID:(id)arg3 ;
-(void)deleteDraftsInMailbox:(id)arg1 documentID:(id)arg2 previousDraftObjectID:(id)arg3 ;
-(id)deliverMessage:(id)arg1 usingMailDrop:(BOOL)arg2 ;
-(BOOL)outboxContainsMessageFromAccount:(id)arg1 ;
-(unsigned long long)numberOfPendingMessages;
@end

