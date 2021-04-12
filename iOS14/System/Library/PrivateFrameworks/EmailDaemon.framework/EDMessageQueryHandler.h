/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <EmailDaemon/EDMessageRepositoryQueryHandler.h>
#import <libobjc.A.dylib/EMCollectionItemIDStateCapturerDelegate.h>
#import <libobjc.A.dylib/EDMessageQueryHelperDelegate.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EFContentProtectionObserver.h>

@protocol EDRemoteSearchProvider, EFScheduler, OS_dispatch_queue;
@class EDMessageQueryHelper, NSObject, NSMutableDictionary, EMCollectionItemIDStateCapturer, NSString;

@interface EDMessageQueryHandler : EDMessageRepositoryQueryHandler <EMCollectionItemIDStateCapturerDelegate, EDMessageQueryHelperDelegate, EFLoggable, EFContentProtectionObserver> {

	EFAtomicObject _updateOldestMessagesCancelationToken;
	BOOL _didCancel;
	BOOL _isInitialized;
	id<EDRemoteSearchProvider> _remoteSearchProvider;
	EDMessageQueryHelper* _currentQueryHelper;
	id<EFScheduler> _scheduler;
	NSObject*<OS_dispatch_queue> _contentProtectionQueue;
	NSObject*<OS_dispatch_queue> _resultQueue;
	NSMutableDictionary* _oldestMessageIDsByMailboxObjectIDs;
	EMCollectionItemIDStateCapturer* _stateCapturer;

}

@property (nonatomic,readonly) id<EDRemoteSearchProvider> remoteSearchProvider;                            //@synthesize remoteSearchProvider=_remoteSearchProvider - In the implementation block
@property (nonatomic,retain) EDMessageQueryHelper * currentQueryHelper;                                    //@synthesize currentQueryHelper=_currentQueryHelper - In the implementation block
@property (nonatomic,readonly) id<EFScheduler> scheduler;                                                  //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> contentProtectionQueue;                        //@synthesize contentProtectionQueue=_contentProtectionQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> resultQueue;                                   //@synthesize resultQueue=_resultQueue - In the implementation block
@property (assign,nonatomic) BOOL didCancel;                                                               //@synthesize didCancel=_didCancel - In the implementation block
@property (assign,nonatomic) BOOL isInitialized;                                                           //@synthesize isInitialized=_isInitialized - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * oldestMessageIDsByMailboxObjectIDs;              //@synthesize oldestMessageIDsByMailboxObjectIDs=_oldestMessageIDsByMailboxObjectIDs - In the implementation block
@property (nonatomic,readonly) EMCollectionItemIDStateCapturer * stateCapturer;                            //@synthesize stateCapturer=_stateCapturer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)findMessagesByPreviousObjectIDForAddedMessages:(id)arg1 messageSource:(id)arg2 ;
-(BOOL)isInitialized;
-(EMCollectionItemIDStateCapturer *)stateCapturer;
-(BOOL)didCancel;
-(void)start;
-(NSObject*<OS_dispatch_queue>)resultQueue;
-(id)labelForStateCapture;
-(id)itemIDsForStateCaptureWithErrorString:(id*)arg1 ;
-(id<EDRemoteSearchProvider>)remoteSearchProvider;
-(void)cancel;
-(NSObject*<OS_dispatch_queue>)contentProtectionQueue;
-(void)dealloc;
-(void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2 ;
-(id<EFScheduler>)scheduler;
-(void)setIsInitialized:(BOOL)arg1 ;
-(void)_createHelperAndReconcileJournal:(BOOL)arg1 ;
-(void)setDidCancel:(BOOL)arg1 ;
-(void)_contentProtectionChangedToUnlocked;
-(void)_contentProtectionChangedToLocked;
-(void)_restartHelper;
-(BOOL)_queryHelperIsCurrent:(id)arg1 ;
-(void)queryHelper:(id)arg1 didFindMessages:(id)arg2 ;
-(void)queryHelperDidFindAllMessages:(id)arg1 ;
-(void)queryHelper:(id)arg1 didAddMessages:(id)arg2 ;
-(void)queryHelper:(id)arg1 messageFlagsDidChangeForMessages:(id)arg2 ;
-(void)queryHelper:(id)arg1 conversationIDDidChangeForMessages:(id)arg2 fromConversationID:(long long)arg3 ;
-(void)queryHelper:(id)arg1 conversationNotificationLevelDidChangeForConversation:(long long)arg2 conversationID:(long long)arg3 ;
-(void)queryHelper:(id)arg1 objectIDDidChangeForMessage:(id)arg2 oldObjectID:(id)arg3 oldConversationID:(long long)arg4 ;
-(void)queryHelper:(id)arg1 didUpdateMessages:(id)arg2 forKeyPaths:(id)arg3 ;
-(void)queryHelper:(id)arg1 didDeleteMessages:(id)arg2 ;
-(void)queryHelperDidFinishRemoteSearch:(id)arg1 ;
-(void)queryHelperNeedsRestart:(id)arg1 ;
-(EDMessageQueryHelper *)currentQueryHelper;
-(void)setCurrentQueryHelper:(EDMessageQueryHelper *)arg1 ;
-(id)_objectIDsAndUnreadObjectIDsFromMessages:(id)arg1 unreadObjectIDs:(id*)arg2 ;
-(void)_initializeOldestMessagesByMailbox;
-(id)findMessagesByPreviousObjectIDForAddedMessages:(id)arg1 helper:(id)arg2 ;
-(void)_oldestMessagesNeedUpdate;
-(id)_createChangesForMessagesWithConversationID:(long long)arg1 block:(/*^block*/id)arg2 ;
-(void)_updateOldestMessagesForMailboxes:(id)arg1 cancelationToken:(id)arg2 ;
-(id)_oldestItemQueryForMailbox:(id)arg1 ;
-(void)_oldestMessagesByMailboxObjectIDsWasUpdated;
-(NSMutableDictionary *)oldestMessageIDsByMailboxObjectIDs;
-(id)initWithQuery:(id)arg1 messagePersistence:(id)arg2 hookRegistry:(id)arg3 remoteSearchProvider:(id)arg4 observer:(id)arg5 observationIdentifier:(id)arg6 ;
@end

