/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/


@protocol _DKKnowledgeSaving_DKKnowledgeDeleting_DKKnowledgeQuerying, OS_dispatch_queue;
@class _CDClientContext, NSMutableDictionary, NSObject;

@interface TPSDuetDataProvider : NSObject {

	id<_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying> _store;
	_CDClientContext* _context;
	NSMutableDictionary* _contextualRegistrations;
	NSObject*<OS_dispatch_queue> _registrationQueue;

}
-(BOOL)deregisterWakingForRegistrationID:(id)arg1 ;
-(id)_executeQueryWithPredicate:(id)arg1 streams:(id)arg2 limit:(unsigned long long)arg3 sortDescriptors:(id)arg4 error:(id*)arg5 ;
-(id)init;
-(void)observationDatesForPredicate:(id)arg1 streams:(id)arg2 limit:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_executeQueryWithPredicate:(id)arg1 streams:(id)arg2 limit:(unsigned long long)arg3 sortDescriptors:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)deleteEvents:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_initWithStore:(id)arg1 context:(id)arg2 ;
-(void)countsForPredicate:(id)arg1 stream:(id)arg2 interval:(id)arg3 groupByKeyPaths:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_initWithDirectory:(id)arg1 ;
-(void)_executeHistogramQueryWithPredicate:(id)arg1 stream:(id)arg2 interval:(id)arg3 groupByKeyPaths:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)registerWakingForPredicate:(id)arg1 registrationID:(id)arg2 clientIdentifier:(id)arg3 callback:(/*^block*/id)arg4 ;
-(void)saveEvents:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_deregisterWakingDuetRegistration:(id)arg1 ;
-(void)deleteEventsWithPredicate:(id)arg1 streams:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

