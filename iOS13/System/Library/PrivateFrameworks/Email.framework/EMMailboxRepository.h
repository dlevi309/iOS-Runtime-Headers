/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <Email/EMRepository.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EMMailboxChangeObserver.h>
#import <libobjc.A.dylib/EMMailboxTypeResolver.h>

@protocol EFCancelable;
@class NSMutableDictionary, EMRemoteConnection, EFPromise, NSMapTable, EMAccountRepository, NSOrderedSet, NSString;

@interface EMMailboxRepository : EMRepository <EFLoggable, EMMailboxChangeObserver, EMMailboxTypeResolver> {

	os_unfair_lock_s _mailboxesPromiseLock;
	os_unfair_lock_s _lock;
	NSMutableDictionary* _mailboxesByObjectID;
	EMRemoteConnection* _connection;
	id<EFCancelable> _registrationCancelable;
	EFPromise* _mailboxesPromise;
	NSMapTable* _observerMap;
	EMAccountRepository* _accountRepository;

}

@property (retain) EMRemoteConnection * connection;                                  //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) id<EFCancelable> registrationCancelable;                //@synthesize registrationCancelable=_registrationCancelable - In the implementation block
@property (readonly) NSOrderedSet * mailboxesIfAvailable; 
@property (nonatomic,retain) EFPromise * mailboxesPromise;                           //@synthesize mailboxesPromise=_mailboxesPromise - In the implementation block
@property (nonatomic,retain) NSMapTable * observerMap;                               //@synthesize observerMap=_observerMap - In the implementation block
@property (nonatomic,readonly) EMAccountRepository * accountRepository;              //@synthesize accountRepository=_accountRepository - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)remoteInterface;
-(void)dealloc;
-(EMRemoteConnection *)connection;
-(void)setConnection:(EMRemoteConnection *)arg1 ;
-(id)initInternal;
-(id)mailboxForObjectID:(id)arg1 ;
-(id)mailboxObjectIDsForMailboxType:(long long)arg1 ;
-(long long)mailboxTypeForMailboxObjectID:(id)arg1 ;
-(id)initForTesting;
-(id)performQuery:(id)arg1 withObserver:(id)arg2 ;
-(void)refreshMailboxList;
-(id)initWithRemoteConnection:(id)arg1 accountRepository:(id)arg2 ;
-(EMAccountRepository *)accountRepository;
-(void)setRegistrationCancelable:(id<EFCancelable>)arg1 ;
-(void)_restartObservingMailboxChangesIfNecessary;
-(void)_commonInitWithAccountRepository:(id)arg1 ;
-(id)initForTestingWithAccountRepository:(id)arg1 ;
-(void)mailboxListChanged:(id)arg1 ;
-(id<EFCancelable>)registrationCancelable;
-(void)_startObservingMailboxChangesIfNecessary;
-(id)_mailboxesFuture;
-(NSOrderedSet *)mailboxesIfAvailable;
-(id)_filterIDsFromMailbox:(id)arg1 withQuery:(id)arg2 ;
-(id)_remoteMailboxObjectIDsForMailboxType:(long long)arg1 ;
-(long long)_remoteMailboxTypeForMailboxObjectID:(id)arg1 ;
-(void)_prepareMailboxes:(id)arg1 ;
-(EFPromise *)mailboxesPromise;
-(void)setMailboxesPromise:(EFPromise *)arg1 ;
-(void)performQuery:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)mailboxesForObjectIDs:(id)arg1 ;
-(id)performMailboxChangeAction:(id)arg1 ;
-(NSMapTable *)observerMap;
-(void)setObserverMap:(NSMapTable *)arg1 ;
@end

