/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,retain) _DKContentProviderCache * contentProviderCache;              //@synthesize contentProviderCache=_contentProviderCache - In the implementation block
-(void)executeQuery:(id)arg1 responseQueue:(id)arg2 ;
-(id)executeQuery:(id)arg1 error:(id*)arg2 ;
-(void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(_DKContentProviderCache *)contentProviderCache;
-(void)setContentProviderCache:(_DKContentProviderCache *)arg1 ;
-(id)initWithKnowledgeStore:(id)arg1 ;
@end

