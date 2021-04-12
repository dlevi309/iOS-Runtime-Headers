/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKKnowledgeQuerying.h>

@protocol OS_dispatch_queue, _DKKnowledgeQuerying;
@class _DKContentProviderCache, NSObject, _DKKnowledgeContentProvider;

@interface _DKQueryDispatcher : NSObject <_DKKnowledgeQuerying> {

	_DKContentProviderCache* _contentProviderCache;
	NSObject*<OS_dispatch_queue> _queryQueue;
	NSObject*<OS_dispatch_queue> _defaultResponseQueue;
	id<_DKKnowledgeQuerying> _knowledgeStore;
	_DKKnowledgeContentProvider* _knowledgeContentProvider;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queryQueue;                             //@synthesize queryQueue=_queryQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> defaultResponseQueue;                   //@synthesize defaultResponseQueue=_defaultResponseQueue - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying> knowledgeStore;                             //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,retain) _DKKnowledgeContentProvider * knowledgeContentProvider;              //@synthesize knowledgeContentProvider=_knowledgeContentProvider - In the implementation block
@property (nonatomic,retain) _DKContentProviderCache * contentProviderCache;                      //@synthesize contentProviderCache=_contentProviderCache - In the implementation block
-(void)setQueryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)executeQuery:(id)arg1 error:(id*)arg2 ;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(id)initWithKnowledgeStore:(id)arg1 ;
-(void)setKnowledgeStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)executeQuery:(id)arg1 responseQueue:(id)arg2 ;
-(void)setDefaultResponseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setKnowledgeContentProvider:(_DKKnowledgeContentProvider *)arg1 ;
-(void)setContentProviderCache:(_DKContentProviderCache *)arg1 ;
-(id)contentProviderQueriesFromQuery:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)queryQueue;
-(NSObject*<OS_dispatch_queue>)defaultResponseQueue;
-(_DKKnowledgeContentProvider *)knowledgeContentProvider;
-(_DKContentProviderCache *)contentProviderCache;
@end

