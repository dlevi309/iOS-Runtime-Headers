/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/EFCancelable.h>
#import <libobjc.A.dylib/EDMessageRepositoryQueryHandler.h>
@class EFQuery;


@protocol EDMessageRepositoryQueryHandler <EDReconciliationQueryProvider,EFCancelable>
@property (nonatomic,copy,readonly) EFQuery * query; 
@required
-(EFQuery *)query;
-(void)test_tearDown;
-(void)tearDown;
-(void)requestSummaryForMessageObjectID:(id)arg1;
-(void)start;

@end


@protocol EMMessageListItemQueryResultsObserver;
@class EFQuery, NSSet, EDMessagePersistence, EDPersistenceHookRegistry, EMObjectID, EFLocked, NSString;

@interface EDMessageRepositoryQueryHandler : NSObject <EFCancelable, EDMessageRepositoryQueryHandler> {

	atomic_flag _didStart;
	NSSet* _mailboxes;
	EFQuery* _query;
	EDMessagePersistence* _messagePersistence;
	EDPersistenceHookRegistry* _hookRegistry;
	id<EMMessageListItemQueryResultsObserver> _resultsObserver;
	EMObjectID* _observationIdentifier;
	long long _dateSortOrder;
	EFLocked* _summaryLoadersMapTable;

}

@property (nonatomic,retain) EFLocked * summaryLoadersMapTable;                                        //@synthesize summaryLoadersMapTable=_summaryLoadersMapTable - In the implementation block
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
-(EFQuery *)query;
-(void)test_tearDown;
-(void)tearDown;
-(void)requestSummaryForMessageObjectID:(id)arg1 ;
-(NSSet *)mailboxes;
-(void)start;
-(EDMessagePersistence *)messagePersistence;
-(EDPersistenceHookRegistry *)hookRegistry;
-(id)messageReconciliationQueries;
-(id)threadReconciliationQueries;
-(id<EMMessageListItemQueryResultsObserver>)resultsObserver;
-(void)cancel;
-(void)dealloc;
-(id)initWithQuery:(id)arg1 messagePersistence:(id)arg2 hookRegistry:(id)arg3 observer:(id)arg4 observationIdentifier:(id)arg5 ;
-(EMObjectID *)observationIdentifier;
-(id)_distinctObjectIDs:(id)arg1 queryHandlerLog:(id)arg2 ;
-(long long)dateSortOrder;
-(EFLocked *)summaryLoadersMapTable;
-(void)setSummaryLoadersMapTable:(EFLocked *)arg1 ;
@end

