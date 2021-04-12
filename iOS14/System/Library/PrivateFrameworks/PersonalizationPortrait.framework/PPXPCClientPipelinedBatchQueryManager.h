/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface PPXPCClientPipelinedBatchQueryManager : NSObject {

	AQ _queryId;
	NSMutableDictionary* _queryContexts;
	NSObject*<OS_dispatch_queue> _queue;

}
+(void)assertBatch:(id)arg1 forQueryName:(id)arg2 hasExpectedContainedType:(Class)arg3 ;
-(id)init;
-(void)cancelPendingQueriesWithError:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)handleReplyWithName:(id)arg1 batch:(id)arg2 isLast:(BOOL)arg3 error:(id)arg4 queryId:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)syncExecuteQueryWithName:(id)arg1 error:(id*)arg2 queryInitializer:(/*^block*/id)arg3 handleBatch:(/*^block*/id)arg4 ;
@end

