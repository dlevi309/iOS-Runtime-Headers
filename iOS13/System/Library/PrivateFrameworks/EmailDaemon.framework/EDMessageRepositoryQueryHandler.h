/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/EFCancelable.h>
#import <libobjc.A.dylib/EDMessageRepositoryQueryHandler.h>

@protocol EDMessageRepositoryQueryHandler <NSObject,EFCancelable>
@required
-(void)start;
-(void)tearDown;
-(void)requestSummaryForMessageObjectID:(id)arg1;

@end


@protocol EMMessageListItemQueryResultsObserver;
@class NSSet, EFQuery, EDMessagePersistence, EDPersistenceHookRegistry, EMObjectID, NSMapTable, NSString;

@interface EDMessageRepositoryQueryHandler : NSObject <EFCancelable, EDMessageRepositoryQueryHandler> {

	atomic_flag _didStart;
	os_unfair_lock_s _summaryLock;
	NSSet* _mailboxes;
	EFQuery* _query;
	EDMessagePersistence* _messagePersistence;
	EDPersistenceHookRegistry* _hookRegistry;
	id<EMMessageListItemQueryResultsObserver> _resultsObserver;
	EMObjectID* _observationIdentifier;
	long long _dateSortOrder;
	NSMapTable* _summaryLoadersMapTable;

}

@property (nonatomic,retain) NSMapTable * summaryLoadersMapTable;                                      //@synthesize summaryLoadersMapTable=_summaryLoadersMapTable - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s summaryLock;                                           //@synthesize summaryLock=_summaryLock - In the implementation block
@property (nonatomic,copy,readonly) EFQuery * query;                                                   //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) EDMessagePersistence * messagePersistence;                              //@synthesize messagePersistence=_messagePersistence - In the implementation block
@property (nonatomic,readonly) EDPersistenceHookRegistry * hookRegistry;                               //@synthesize hookRegistry=_hookRegistry - In the implementation block
@property (nonatomic,readonly) id<EMMessageListItemQueryResultsObserver> resultsObserver;              //@synthesize resultsObserver=_resultsObserver - In the implementation block
@property (nonatomic,readonly) EMObjectID * observationIdentifier;                                     //@synthesize observationIdentifier=_observationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * mailboxes;                                                 //@synthesize mailboxes=_mailboxes - In the implementation block
@property (nonatomic,readonly) long long dateSortOrder;                                                //@synthesize dateSortOrder=_dateSortOrder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(EFQuery *)query;
-(void)cancel;
-(void)start;
-(void)tearDown;
-(NSSet *)mailboxes;
-(EDPersistenceHookRegistry *)hookRegistry;
-(EDMessagePersistence *)messagePersistence;
-(void)requestSummaryForMessageObjectID:(id)arg1 ;
-(void)test_tearDown;
-(id)initWithQuery:(id)arg1 messagePersistence:(id)arg2 hookRegistry:(id)arg3 observer:(id)arg4 observationIdentifier:(id)arg5 ;
-(id<EMMessageListItemQueryResultsObserver>)resultsObserver;
-(EMObjectID *)observationIdentifier;
-(id)_distinctObjectIDs:(id)arg1 queryHandlerLog:(id)arg2 ;
-(long long)dateSortOrder;
-(NSMapTable *)summaryLoadersMapTable;
-(void)setSummaryLoadersMapTable:(NSMapTable *)arg1 ;
-(os_unfair_lock_s)summaryLock;
@end

