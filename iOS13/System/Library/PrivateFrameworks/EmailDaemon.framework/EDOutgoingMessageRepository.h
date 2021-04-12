/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EMOutgoingMessageRepositoryInterface.h>

@protocol OS_dispatch_queue;
@class NSObject, EDMessagePersistence, EDMessageChangeManager, NSString;

@interface EDOutgoingMessageRepository : NSObject <EMOutgoingMessageRepositoryInterface> {

	NSObject*<OS_dispatch_queue> _workQueue;
	EDMessagePersistence* _messagePersistence;
	EDMessageChangeManager* _messageChangeManager;

}

@property (nonatomic,retain) EDMessagePersistence * messagePersistence;                  //@synthesize messagePersistence=_messagePersistence - In the implementation block
@property (nonatomic,retain) EDMessageChangeManager * messageChangeManager;              //@synthesize messageChangeManager=_messageChangeManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)signpostLog;
-(void)performBlock:(/*^block*/id)arg1 ;
-(unsigned long long)signpostID;
-(EDMessageChangeManager *)messageChangeManager;
-(EDMessagePersistence *)messagePersistence;
-(void)setMessageChangeManager:(EDMessageChangeManager *)arg1 ;
-(void)setMessagePersistence:(EDMessagePersistence *)arg1 ;
-(void)saveDraftMessage:(id)arg1 mailboxID:(id)arg2 previousDraftObjectID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)deleteDraftsInMailboxID:(id)arg1 documentID:(id)arg2 previousDraftObjectID:(id)arg3 ;
-(void)deliverMessage:(id)arg1 usingMailDrop:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)outboxContainsMessageFromAccountObjectID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)suspendDeliveryQueue;
-(void)resumeDeliveryQueue;
-(void)processAllQueuedMessages;
-(void)isProcessingWithCompletion:(/*^block*/id)arg1 ;
-(void)numberOfPendingMessagesWithCompletion:(/*^block*/id)arg1 ;
-(id)messagesForDocumentID:(id)arg1 mailboxID:(id)arg2 ;
-(id)initWithMessagePersistence:(id)arg1 messageChangeManager:(id)arg2 ;
@end

