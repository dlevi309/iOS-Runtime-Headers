/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/

#import <BiomePubSub/BPSPublisher.h>

@protocol _DKKnowledgeQuerying;
@class _DKEventQuery;

@interface BPSKnowledgeStorePublisher : BPSPublisher {

	_DKEventQuery* _query;
	id<_DKKnowledgeQuerying> _store;

}

@property (nonatomic,readonly) _DKEventQuery * query;                       //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) id<_DKKnowledgeQuerying> store;              //@synthesize store=_store - In the implementation block
-(_DKEventQuery *)query;
-(id)init;
-(id<_DKKnowledgeQuerying>)store;
-(void)subscribe:(id)arg1 ;
-(id)initWithEventQuery:(id)arg1 knowledgeStore:(id)arg2 ;
@end

