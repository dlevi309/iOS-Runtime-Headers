/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EDMessageRepositoryQueryHandler.h>
#import <libobjc.A.dylib/EDMessageChangeHookResponder.h>
#import <libobjc.A.dylib/EDThreadChangeHookResponder.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EMCollectionItemIDStateCapturerDelegate.h>

@protocol EFScheduler, EFCancelable;
@class EMThreadScope, EDThreadPersistence, EFCancelationToken, NSMutableDictionary, NSMutableArray, NSMutableSet, EDUpdateThrottler, EDThreadReloadSummaryHelper, EMMailboxScope, EMCollectionItemIDStateCapturer, NSString;

@interface EDPrecomputedThreadQueryHandler : EDMessageRepositoryQueryHandler <EDMessageChangeHookResponder, EDThreadChangeHookResponder, EFLoggable, EMCollectionItemIDStateCapturerDelegate> {

	EMThreadScope* _threadScope;
	EDThreadPersistence* _threadPersistence;
	id<EFScheduler> _changeScheduler;
	id<EFScheduler> _backgroundWorkScheduler;
	EFCancelationToken* _cancelationToken;
	NSMutableDictionary* _pendingChanges;
	NSMutableArray* _pendingPositionChanges;
	NSMutableSet* _unreportedJournaledObjectIDs;
	NSMutableDictionary* _reportedJournaledObjectIDs;
	NSMutableDictionary* _oldestThreadObjectIDsByMailbox;
	id<EFCancelable> _updateOldestThreadsCancelationToken;
	EDUpdateThrottler* _updateThrottler;
	EDThreadReloadSummaryHelper* _reloadSummaryHelper;
	EMMailboxScope* _mailboxScope;
	EMCollectionItemIDStateCapturer* _stateCapturer;

}

@property (nonatomic,readonly) id<EFScheduler> changeScheduler;                                 //@synthesize changeScheduler=_changeScheduler - In the implementation block
@property (nonatomic,readonly) id<EFScheduler> backgroundWorkScheduler;                         //@synthesize backgroundWorkScheduler=_backgroundWorkScheduler - In the implementation block
@property (nonatomic,retain) EFCancelationToken * cancelationToken;                             //@synthesize cancelationToken=_cancelationToken - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingChanges;                              //@synthesize pendingChanges=_pendingChanges - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingPositionChanges;                           //@synthesize pendingPositionChanges=_pendingPositionChanges - In the implementation block
@property (nonatomic,retain) NSMutableSet * unreportedJournaledObjectIDs;                       //@synthesize unreportedJournaledObjectIDs=_unreportedJournaledObjectIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * reportedJournaledObjectIDs;                  //@synthesize reportedJournaledObjectIDs=_reportedJournaledObjectIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * oldestThreadObjectIDsByMailbox;              //@synthesize oldestThreadObjectIDsByMailbox=_oldestThreadObjectIDsByMailbox - In the implementation block
@property (nonatomic,retain) id<EFCancelable> updateOldestThreadsCancelationToken;              //@synthesize updateOldestThreadsCancelationToken=_updateOldestThreadsCancelationToken - In the implementation block
@property (nonatomic,readonly) EDUpdateThrottler * updateThrottler;                             //@synthesize updateThrottler=_updateThrottler - In the implementation block
@property (nonatomic,readonly) EDThreadReloadSummaryHelper * reloadSummaryHelper;               //@synthesize reloadSummaryHelper=_reloadSummaryHelper - In the implementation block
@property (nonatomic,readonly) EMMailboxScope * mailboxScope;                                   //@synthesize mailboxScope=_mailboxScope - In the implementation block
@property (nonatomic,readonly) EMCollectionItemIDStateCapturer * stateCapturer;                 //@synthesize stateCapturer=_stateCapturer - In the implementation block
@property (nonatomic,readonly) EMThreadScope * threadScope;                                     //@synthesize threadScope=_threadScope - In the implementation block
@property (nonatomic,readonly) EDThreadPersistence * threadPersistence;                         //@synthesize threadPersistence=_threadPersistence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(void)cancel;
-(void)start;
-(EFCancelationToken *)cancelationToken;
-(void)persistenceDidUpdateProperties:(id)arg1 message:(id)arg2 generationWindow:(id)arg3 ;
-(void)persistenceDidChangeMessageIDHeaderHash:(id)arg1 oldConversationID:(long long)arg2 message:(id)arg3 generationWindow:(id)arg4 ;
-(void)persistenceDidChangeConversationNotificationLevel:(long long)arg1 conversationID:(long long)arg2 generationWindow:(id)arg3 ;
-(EMMailboxScope *)mailboxScope;
-(EDThreadPersistence *)threadPersistence;
-(void)setCancelationToken:(EFCancelationToken *)arg1 ;
-(id)labelForStateCapture;
-(id)itemIDsForStateCaptureWithErrorString:(id*)arg1 ;
-(EMThreadScope *)threadScope;
-(EMCollectionItemIDStateCapturer *)stateCapturer;
-(NSMutableDictionary *)pendingChanges;
-(void)setPendingChanges:(NSMutableDictionary *)arg1 ;
-(EDUpdateThrottler *)updateThrottler;
-(EDThreadReloadSummaryHelper *)reloadSummaryHelper;
-(id)threadForObjectID:(id)arg1 error:(id*)arg2 ;
-(void)_getInitialResults;
-(void)persistenceIsAddingThreadWithObjectID:(id)arg1 journaled:(BOOL)arg2 generationWindow:(id)arg3 ;
-(void)persistenceIsMarkingThreadAsJournaledWithObjectID:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceIsReconcilingJournaledThreadsWithObjectIDs:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceIsChangingThreadWithObjectID:(id)arg1 changedKeyPaths:(id)arg2 generationWindow:(id)arg3 ;
-(void)persistenceIsDeletingThreadWithObjectID:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceDidFinishThreadUpdates;
-(void)persistenceWillResetThreadScope:(id)arg1 denyBlock:(/*^block*/id)arg2 ;
-(id<EFScheduler>)changeScheduler;
-(id<EFScheduler>)backgroundWorkScheduler;
-(NSMutableSet *)unreportedJournaledObjectIDs;
-(void)_oldestThreadsNeedUpdate;
-(NSMutableArray *)pendingPositionChanges;
-(void)_flushUpdatesWithReason:(id)arg1 ;
-(void)_persistenceIsAddingThreadWithObjectID:(id)arg1 ;
-(NSMutableDictionary *)reportedJournaledObjectIDs;
-(void)_addChangeToPendingChanges:(id)arg1 forThreadObjectID:(id)arg2 ;
-(void)_persistenceIsChangingThreadWithObjectID:(id)arg1 changedKeyPaths:(id)arg2 ;
-(BOOL)_isAddingOrDeletingObjectID:(id)arg1 ;
-(BOOL)_keyPathsAffectSorting:(id)arg1 ;
-(id)_messageForPersistedMessage:(id)arg1 ;
-(id<EFCancelable>)updateOldestThreadsCancelationToken;
-(NSMutableDictionary *)oldestThreadObjectIDsByMailbox;
-(void)setUpdateOldestThreadsCancelationToken:(id<EFCancelable>)arg1 ;
-(id)initWithQuery:(id)arg1 threadScope:(id)arg2 messagePersistence:(id)arg3 threadPersistence:(id)arg4 hookRegistry:(id)arg5 observer:(id)arg6 observationIdentifier:(id)arg7 observationResumer:(id)arg8 ;
-(void)setPendingPositionChanges:(NSMutableArray *)arg1 ;
-(void)setUnreportedJournaledObjectIDs:(NSMutableSet *)arg1 ;
-(void)setReportedJournaledObjectIDs:(NSMutableDictionary *)arg1 ;
-(void)setOldestThreadObjectIDsByMailbox:(NSMutableDictionary *)arg1 ;
@end

