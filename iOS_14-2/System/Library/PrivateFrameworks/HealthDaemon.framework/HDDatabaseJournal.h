/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDDatabaseJournalDelegate, HDJournalChapter;
#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSProgress, HDDatabaseTransaction, NSURL, NSLock;

@interface HDDatabaseJournal : NSObject {

	os_unfair_lock_s _progressLock;
	NSProgress* _progressLock_observableProgress;
	NSProgress* _progressLock_internalProgress;
	os_unfair_lock_s _activeTransactionLock;
	os_unfair_lock_s _interruptionLock;
	HDDatabaseTransaction* _activeMergeTransaction;
	long long _journalStatus;
	BOOL _interrupted;
	BOOL _invalidated;
	Class _lastInsertedEntryClass;
	long long _type;
	id<HDDatabaseJournalDelegate> _delegate;
	NSURL* _URL;
	NSLock* _journalLock;
	id<HDJournalChapter> _currentJournalChapter;

}

@property (nonatomic,copy) NSURL * URL;                                                  //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSLock * journalLock;                                       //@synthesize journalLock=_journalLock - In the implementation block
@property (nonatomic,retain) id<HDJournalChapter> currentJournalChapter;                 //@synthesize currentJournalChapter=_currentJournalChapter - In the implementation block
@property (nonatomic,readonly) long long type;                                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic,__weak) id<HDDatabaseJournalDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)unlock;
-(void)setCurrentJournalChapter:(id<HDJournalChapter>)arg1 ;
-(void)_executeAtomically:(/*^block*/id)arg1 ;
-(id)init;
-(id)_mergeTransactionContextWithContext:(id)arg1 ;
-(id<HDDatabaseJournalDelegate>)delegate;
-(void)setURL:(NSURL *)arg1 ;
-(void)_mergeJournalEntries:(id)arg1 profile:(id)arg2 ;
-(BOOL)_isJournalDatabaseFeatureEnabled;
-(void)lock;
-(void)interruptJournalMerge;
-(BOOL)_createNextJournalChapterWithError:(id*)arg1 ;
-(void)setDelegate:(id<HDDatabaseJournalDelegate>)arg1 ;
-(void)_waitIfInterrupted;
-(id)description;
-(long long)journalChapterCount;
-(void)resumeJournalMerge;
-(NSLock *)journalLock;
-(BOOL)mergeWithProfile:(id)arg1 ;
-(void)_unitTesting_closeCurrentJournalChapter;
-(long long)type;
-(NSURL *)URL;
-(id)progressForJournalMerge;
-(BOOL)_setActiveTransactionAndReturnInterrupted:(id)arg1 ;
-(id)initWithType:(long long)arg1 path:(id)arg2 ;
-(void)setJournalLock:(NSLock *)arg1 ;
-(void)invalidate;
-(BOOL)addJournalEntries:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
-(BOOL)_appendData:(id)arg1 entryClass:(Class)arg2 error:(id*)arg3 ;
-(BOOL)_processJournalChaptersWithProfile:(id)arg1 ;
-(BOOL)_performPostJournalMergeWithVersion:(unsigned)arg1 profile:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
-(id<HDJournalChapter>)currentJournalChapter;
-(id)_unitTesting_directoryURL;
-(void)_unitTesting_setJournalStatusRequiresMerge;
-(unsigned long long)sizeOnDisk;
-(void)dealloc;
-(BOOL)performMergeTransactionWithProfile:(id)arg1 transactionContext:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
-(unsigned)_mergeJournalChapter:(id)arg1 profile:(id)arg2 accessibilityAssertion:(id)arg3 ;
@end

