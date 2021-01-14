/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/EDMailboxProvider.h>

@protocol EDMailboxProviderDelegate, EDAccountsProvider, OS_dispatch_queue, EFScheduler;
@class MFMailboxUidTransformer, NSMapTable, NSArray, NSObject, NSSet, NSString;

@interface MFMailboxProvider : NSObject <EDMailboxProvider> {

	Ai _deferringInvalidationCount;
	BOOL _needsToInvalidate;
	id<EDMailboxProviderDelegate> delegate;
	id<EDAccountsProvider> _accountsProvider;
	MFMailboxUidTransformer* _mailboxUidTransformer;
	NSMapTable* _uidToMailboxMap;
	NSMapTable* _objectIDToUidMap;
	NSArray* _allMailboxCache;
	NSObject*<OS_dispatch_queue> _mailboxCacheQueue;
	id<EFScheduler> _observerScheduler;

}

@property (assign,nonatomic,__weak) id<EDAccountsProvider> accountsProvider;                //@synthesize accountsProvider=_accountsProvider - In the implementation block
@property (nonatomic,retain) MFMailboxUidTransformer * mailboxUidTransformer;               //@synthesize mailboxUidTransformer=_mailboxUidTransformer - In the implementation block
@property (retain) NSMapTable * uidToMailboxMap;                                            //@synthesize uidToMailboxMap=_uidToMailboxMap - In the implementation block
@property (retain) NSMapTable * objectIDToUidMap;                                           //@synthesize objectIDToUidMap=_objectIDToUidMap - In the implementation block
@property (retain) NSArray * allMailboxCache;                                               //@synthesize allMailboxCache=_allMailboxCache - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> mailboxCacheQueue;              //@synthesize mailboxCacheQueue=_mailboxCacheQueue - In the implementation block
@property (nonatomic,retain) id<EFScheduler> observerScheduler;                             //@synthesize observerScheduler=_observerScheduler - In the implementation block
@property (assign,nonatomic,__weak) id<EDMailboxProviderDelegate> delegate; 
@property (nonatomic,readonly) NSSet * allMailboxObjectIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)mailboxFromLegacyMailbox:(id)arg1 ;
-(void)setAllMailboxCache:(NSArray *)arg1 ;
-(void)_populateCache;
-(void)setUidToMailboxMap:(NSMapTable *)arg1 ;
-(id<EFScheduler>)observerScheduler;
-(id<EDMailboxProviderDelegate>)delegate;
-(void)_willFetchMailboxList:(id)arg1 ;
-(void)setObjectIDToUidMap:(NSMapTable *)arg1 ;
-(void)_beginDeferringInvalidation;
-(id)legacyMailboxForObjectID:(id)arg1 ;
-(void)_mailboxInvalidated:(id)arg1 ;
-(BOOL)_isDeferringInvalidation;
-(void)_didReloadMailboxList:(id)arg1 ;
-(void)fetchMailboxes;
-(id<EDAccountsProvider>)accountsProvider;
-(void)setDelegate:(id<EDMailboxProviderDelegate>)arg1 ;
-(NSArray *)allMailboxCache;
-(MFMailboxUidTransformer *)mailboxUidTransformer;
-(void)_didFetchMailboxList:(id)arg1 ;
-(id)mailboxForObjectID:(id)arg1 ;
-(void)setMailboxUidTransformer:(MFMailboxUidTransformer *)arg1 ;
-(id)mailboxObjectIDsForMailboxType:(long long)arg1 ;
-(NSSet *)allMailboxObjectIDs;
-(void)setAccountsProvider:(id<EDAccountsProvider>)arg1 ;
-(void)_willReloadMailboxList:(id)arg1 ;
-(id)initWithAccountsProvider:(id)arg1 ;
-(NSMapTable *)objectIDToUidMap;
-(id)legacyMailboxesForObjectIDs:(id)arg1 ;
-(long long)mailboxTypeForMailboxObjectID:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)mailboxCacheQueue;
-(NSMapTable *)uidToMailboxMap;
-(void)_invalidateCache;
-(void)setObserverScheduler:(id<EFScheduler>)arg1 ;
-(id)allMailboxes;
-(void)enumerateAccountsWithBlock:(/*^block*/id)arg1 ;
-(void)_didChangeMailboxList:(id)arg1 ;
-(void)invalidateMailboxes;
-(id)mailboxesFromLegacyMailboxes:(id)arg1 ;
-(void)_endDeferringInvalidation;
@end

