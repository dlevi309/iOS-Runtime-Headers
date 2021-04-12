/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol _DKKnowledgeQuerying;
@class _DKEventStream;

@interface _CDSpotlightEventIndexerDataSource : NSObject {

	id<_DKKnowledgeQuerying> _knowledgeStore;
	_DKEventStream* _stream;

}

@property (nonatomic,readonly) id<_DKKnowledgeQuerying> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,readonly) _DKEventStream * stream;                              //@synthesize stream=_stream - In the implementation block
+(unsigned long long)currentVersion;
-(_DKEventStream *)stream;
-(id)bundleIDToSearchableItemsDictionaryWithCreationDateInInterval:(id)arg1 limit:(long long)arg2 nextBatch:(BOOL*)arg3 latestCreationDate:(id*)arg4 error:(id*)arg5 ;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(id)initWithKnowledgeStore:(id)arg1 eventStream:(id)arg2 ;
-(id)earliestEventCreationDateWithError:(id*)arg1 ;
-(id)searchableItemUniqueIdentifierWithDomain:(id)arg1 indexingIdentifier:(id)arg2 ;
-(id)searchableItemIdentifiersForTombstonedEventsInInterval:(id)arg1 latestTombstoneDate:(id*)arg2 error:(id*)arg3 ;
-(id)bundleIDToSearchableItemsDictionaryFromEvents:(id)arg1 ;
@end

