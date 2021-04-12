/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EDMessageChangeHookResponder.h>
#import <libobjc.A.dylib/EFLoggable.h>

@protocol EDMailboxPredictionQueryAdapter, OS_dispatch_queue, EMUserProfileProvider;
@class NSObject, EDCachingMailboxPredictor, EDMailboxPersistence, EDPersistenceHookRegistry, NSString;

@interface EDMailboxPredictionController : NSObject <EDMessageChangeHookResponder, EFLoggable> {

	id<EDMailboxPredictionQueryAdapter> _queryAdapter;
	NSObject*<OS_dispatch_queue> _processingQueue;
	EDCachingMailboxPredictor* _cachingPredictor;
	EDMailboxPersistence* _mailboxPersistence;
	EDPersistenceHookRegistry* _hookRegistry;
	id<EMUserProfileProvider> _userProfileProvider;

}

@property (nonatomic,readonly) id<EDMailboxPredictionQueryAdapter> queryAdapter;              //@synthesize queryAdapter=_queryAdapter - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> processingQueue;                  //@synthesize processingQueue=_processingQueue - In the implementation block
@property (nonatomic,readonly) EDCachingMailboxPredictor * cachingPredictor;                  //@synthesize cachingPredictor=_cachingPredictor - In the implementation block
@property (nonatomic,readonly) EDMailboxPersistence * mailboxPersistence;                     //@synthesize mailboxPersistence=_mailboxPersistence - In the implementation block
@property (nonatomic,readonly) EDPersistenceHookRegistry * hookRegistry;                      //@synthesize hookRegistry=_hookRegistry - In the implementation block
@property (nonatomic,readonly) id<EMUserProfileProvider> userProfileProvider;                 //@synthesize userProfileProvider=_userProfileProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(EDPersistenceHookRegistry *)hookRegistry;
-(void)persistenceWillAddMessage:(id)arg1 fromExistingMessage:(BOOL)arg2 ;
-(EDMailboxPersistence *)mailboxPersistence;
-(id<EMUserProfileProvider>)userProfileProvider;
-(id)predictMailboxForMovingMessages:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_createPredictor;
-(void)_invalidateCacheForAddedMessage:(id)arg1 ;
-(id)_processPredictionForMessages:(id)arg1 ;
-(EDCachingMailboxPredictor *)cachingPredictor;
-(id<EDMailboxPredictionQueryAdapter>)queryAdapter;
-(id)initWithMessagePersistence:(id)arg1 mailboxPersistence:(id)arg2 hookRegistry:(id)arg3 userProfileProvider:(id)arg4 ;
@end

