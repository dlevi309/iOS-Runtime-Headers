/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKKnowledgeEventStreamDeleting.h>
#import <libobjc.A.dylib/_DKKnowledgeSynchronizing.h>
#import <libobjc.A.dylib/_DKKnowledgeSaving.h>
#import <libobjc.A.dylib/_DKKnowledgeDeleting.h>
#import <libobjc.A.dylib/_DKKnowledgeQuerying.h>

@protocol _DKKnowledgeQuerying_DKKnowledgeSaving_DKKnowledgeDeleting_DKKnowledgeEventStreamDeleting, OS_dispatch_queue;
@class NSObject, _DKQueryDispatcher, _DKRateLimitPolicyEnforcer, _DKPrivacyPolicyEnforcer;

@interface _DKKnowledgeStore : NSObject <_DKKnowledgeEventStreamDeleting, _DKKnowledgeSynchronizing, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeQuerying> {

	NSObject*<_DKKnowledgeQuerying>*<_DKKnowledgeSaving>*<_DKKnowledgeDeleting>*<_DKKnowledgeEventStreamDeleting> _knowledgeStoreHandle;
	_DKQueryDispatcher* _queryDispatcher;
	_DKRateLimitPolicyEnforcer* _rateLimitEnforcer;
	_DKPrivacyPolicyEnforcer* _privacyEnforcer;
	NSObject*<OS_dispatch_queue> _defaultQueue;

}
+(id)knowledgeStoreWithDirectReadOnlyAccess;
+(id)userKnowledgeStore;
+(id)knowledgeStoreWithDirectReadOnlyAccessWithXPCStore:(id)arg1 storeDirectory:(id)arg2 ;
+(id)knowledgeStoreWithDirectReadWriteAccess;
+(id)userKnowledgeStoreWithDirectReadWriteAccess;
+(id)userKnowledgeStoreWithDirectReadOnlyAccess;
+(id)knowledgeStore;
-(BOOL)deleteRemoteState:(id*)arg1 ;
-(void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)init;
-(void)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 responseQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)saveObjects:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(void)executeQuery:(id)arg1 responseQueue:(id)arg2 ;
-(id)executeQuery:(id)arg1 error:(id*)arg2 ;
-(BOOL)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 error:(id*)arg3 ;
-(id)sourceDeviceIdentityFromObject:(id)arg1 error:(id*)arg2 ;
-(void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)deleteObjects:(id)arg1 error:(id*)arg2 ;
-(BOOL)synchronizeWithError:(id*)arg1 ;
-(unsigned long long)deleteAllEventsInEventStream:(id)arg1 error:(id*)arg2 ;
-(void)deleteAllEventsMatchingPredicate:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)initWithKnowledgeStoreHandle:(id)arg1 readOnly:(BOOL)arg2 ;
-(id)sourceDeviceIdentityWithError:(id*)arg1 ;
-(void)deleteAllEventsInEventStream:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)deviceUUID;
@end

