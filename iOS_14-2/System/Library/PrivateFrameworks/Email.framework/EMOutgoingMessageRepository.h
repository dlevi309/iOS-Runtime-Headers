/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EMOutgoingMessageRepositoryInterfaceObserver.h>

@protocol EFCancelable, EFScheduler;
@class EMRemoteConnection, NSMutableArray, NSNumber, NSString;

@interface EMOutgoingMessageRepository : NSObject <EFLoggable, EMOutgoingMessageRepositoryInterfaceObserver> {

	EMRemoteConnection* _connection;
	id<EFCancelable> _registrationCancelable;
	id<EFScheduler> _scheduler;
	NSMutableArray* _observers;
	NSNumber* _pendingMessages;

}

@property (retain) EMRemoteConnection * connection;                                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) id<EFCancelable> registrationCancelable;              //@synthesize registrationCancelable=_registrationCancelable - In the implementation block
@property (nonatomic,retain) id<EFScheduler> scheduler;                            //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,readonly) NSMutableArray * observers;                         //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSNumber * pendingMessages;                           //@synthesize pendingMessages=_pendingMessages - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)remoteInterface;
+(id)signpostLog;
-(id)initWithRemoteConnection:(id)arg1 ;
-(void)setRegistrationCancelable:(id<EFCancelable>)arg1 ;
-(void)addObserver:(id)arg1 ;
-(NSMutableArray *)observers;
-(unsigned long long)signpostID;
-(void)setPendingMessages:(NSNumber *)arg1 ;
-(void)numberOfPendingMessagesChanged:(id)arg1 ;
-(void)deleteDraftsInMailbox:(id)arg1 documentID:(id)arg2 previousDraftObjectID:(id)arg3 ;
-(id<EFCancelable>)registrationCancelable;
-(void)updateObservers;
-(BOOL)isProcessing;
-(EMRemoteConnection *)connection;
-(void)suspendDeliveryQueue;
-(void)setScheduler:(id<EFScheduler>)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)resumeDeliveryQueue;
-(void)processAllQueuedMessages;
-(id)deliverMessage:(id)arg1 usingMailDrop:(BOOL)arg2 ;
-(void)_startObservingUnsentChangesIfNecessary;
-(NSNumber *)pendingMessages;
-(void)setConnection:(EMRemoteConnection *)arg1 ;
-(unsigned long long)numberOfPendingMessages;
-(void)_restartObservingUnsentChangesIfNecessary;
-(BOOL)outboxContainsMessageFromAccount:(id)arg1 ;
-(void)dealloc;
-(id)saveDraftMessage:(id)arg1 mailboxObjectID:(id)arg2 previousDraftObjectID:(id)arg3 ;
-(id<EFScheduler>)scheduler;
@end

