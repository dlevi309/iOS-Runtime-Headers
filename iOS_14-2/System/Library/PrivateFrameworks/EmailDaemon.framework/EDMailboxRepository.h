/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EFLoggable.h>

@protocol OS_dispatch_queue;
@class EDMailboxPersistence, NSObject, NSString;

@interface EDMailboxRepository : NSObject <EFLoggable> {

	EDMailboxPersistence* _mailboxPersistence;
	NSObject*<OS_dispatch_queue> _serializationQueue;

}

@property (nonatomic,retain) EDMailboxPersistence * mailboxPersistence;                      //@synthesize mailboxPersistence=_mailboxPersistence - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serializationQueue;              //@synthesize serializationQueue=_serializationQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(EDMailboxPersistence *)mailboxPersistence;
-(void)refreshMailboxList;
-(void)setMailboxPersistence:(EDMailboxPersistence *)arg1 ;
-(void)getMailboxesWithCompletion:(/*^block*/id)arg1 ;
-(void)startObservingMailboxChangesWithChangeObserver:(id)arg1 observationIdentifier:(id)arg2 ;
-(void)cancelObservation:(id)arg1 ;
-(void)performMailboxChangeAction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)mailboxObjectIDsForMailboxType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)mailboxTypeForMailboxObjectID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)serializationQueue;
-(id)initWithMailboxPersistence:(id)arg1 ;
-(BOOL)_performCreateMailboxChangeAction:(id)arg1 ;
-(BOOL)_performDeleteMailboxChangeAction:(id)arg1 ;
-(BOOL)_performMoveMailboxChangeAction:(id)arg1 ;
-(BOOL)_performRenameMailboxChangeAction:(id)arg1 ;
@end

