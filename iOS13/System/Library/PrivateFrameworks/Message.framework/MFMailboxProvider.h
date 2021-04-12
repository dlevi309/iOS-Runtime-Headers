/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EDMailboxProvider.h>

@protocol EDMailboxProviderDelegate, EDAccountsProvider, OS_dispatch_queue, EFScheduler;
@class MFMailboxUidTransformer, NSMapTable, NSArray, NSObject, NSString;

@interface MFMailboxProvider : NSObject <EFLoggable, EDMailboxProvider> {

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<EDMailboxProviderDelegate> delegate; 
+(id)log;
-(id<EDMailboxProviderDelegate>)delegate;
-(void)setDelegate:(id<EDMailboxProviderDelegate>)arg1 ;
-(void)_invalidateCache;
-(id<EFScheduler>)observerScheduler;
-(id<EDAccountsProvider>)accountsProvider;
-(id)legacyMailboxForObjectID:(id)arg1 ;
-(void)_mailboxInvalidated:(id)arg1 ;
-(void)_willReloadMailboxList:(id)arg1 ;
-(void)_didReloadMailboxList:(id)arg1 ;
-(void)_didChangeMailboxList:(id)arg1 ;
-(void)_willFetchMailboxList:(id)arg1 ;
-(void)_didFetchMailboxList:(id)arg1 ;
-(void)_beginDeferringInvalidation;
-(void)enumerateAccountsWithBlock:(/*^block*/id)arg1 ;
-(void)setUidToMailboxMap:(NSMapTable *)arg1 ;
-(void)setObjectIDToUidMap:(NSMapTable *)arg1 ;
-(void)setAllMailboxCache:(NSArray *)arg1 ;
-(void)_endDeferringInvalidation;
-(NSArray *)allMailboxCache;
-(void)_populateCache;
-(id)mailboxesFromLegacyMailboxes:(id)arg1 ;
-(NSMapTable *)uidToMailboxMap;
-(id)mailboxFromLegacyMailbox:(id)arg1 ;
-(id)legacyMailboxesForObjectIDs:(id)arg1 ;
-(NSMapTable *)objectIDToUidMap;
-(BOOL)_isDeferringInvalidation;
-(id)allMailboxes;
-(id)mailboxForObjectID:(id)arg1 ;
-(id)mailboxObjectIDsForMailboxType:(long long)arg1 ;
-(long long)mailboxTypeForMailboxObjectID:(id)arg1 ;
-(void)fetchMailboxes;
-(id)initWithAccountsProvider:(id)arg1 ;
-(void)invalidateMailboxes;
-(void)setAccountsProvider:(id<EDAccountsProvider>)arg1 ;
-(MFMailboxUidTransformer *)mailboxUidTransformer;
-(void)setMailboxUidTransformer:(MFMailboxUidTransformer *)arg1 ;
-(NSObject*<OS_dispatch_queue>)mailboxCacheQueue;
-(void)setObserverScheduler:(id<EFScheduler>)arg1 ;
@end

