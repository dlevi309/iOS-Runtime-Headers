/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKKnowledgeStorageEventNotificationDelegate.h>

@protocol OS_dispatch_queue;
@class _DKKnowledgeStorage, _CDSpotlightEventIndexer, NSObject;

@interface _CDIntentSpotlightIndex : NSObject <_DKKnowledgeStorageEventNotificationDelegate> {

	BOOL _includeAdditions;
	_DKKnowledgeStorage* _storage;
	_CDSpotlightEventIndexer* _indexer;
	double _delay;
	unsigned long long _batchSize;
	NSObject*<OS_dispatch_queue> _activityQueue;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) _DKKnowledgeStorage * storage;                         //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) _CDSpotlightEventIndexer * indexer;                    //@synthesize indexer=_indexer - In the implementation block
@property (assign,nonatomic) double delay;                                            //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                            //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> activityQueue;              //@synthesize activityQueue=_activityQueue - In the implementation block
@property (assign,nonatomic) BOOL includeAdditions;                                   //@synthesize includeAdditions=_includeAdditions - In the implementation block
@property (nonatomic,copy) id completion;                                             //@synthesize completion=_completion - In the implementation block
-(NSObject*<OS_dispatch_queue>)activityQueue;
-(void)setCompletion:(id)arg1 ;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(unsigned long long)batchSize;
-(_DKKnowledgeStorage *)storage;
-(void)setDelay:(double)arg1 ;
-(void)setActivityQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(_CDSpotlightEventIndexer *)indexer;
-(id)completion;
-(void)knowledgeStorage:(id)arg1 didInsertLocalEventsWithStreamNameCounts:(id)arg2 ;
-(void)triggerIndexIncludingAdditions:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)knowledgeStorage:(id)arg1 didTombstoneEventsWithStreamNameCounts:(id)arg2 ;
-(double)delay;
-(id)initWithKnowledgeStorage:(id)arg1 ;
-(void)dealloc;
-(void)setIncludeAdditions:(BOOL)arg1 ;
-(BOOL)includeAdditions;
@end

