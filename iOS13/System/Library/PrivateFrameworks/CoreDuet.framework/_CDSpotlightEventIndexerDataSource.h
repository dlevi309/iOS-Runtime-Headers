/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(id)bundleIDToSearchableItemsDictionaryFromEvents:(id)arg1 ;
-(id)initWithKnowledgeStore:(id)arg1 eventStream:(id)arg2 ;
-(id)earliestEventCreationDateWithError:(id*)arg1 ;
-(id)searchableItemUniqueIdentifierWithDomain:(id)arg1 indexingIdentifier:(id)arg2 ;
-(id)searchableItemIdentifiersForTombstonedEventsInInterval:(id)arg1 latestTombstoneDate:(id*)arg2 error:(id*)arg3 ;
-(id)bundleIDToSearchableItemsDictionaryWithCreationDateInInterval:(id)arg1 limit:(long long)arg2 nextBatch:(BOOL*)arg3 latestCreationDate:(id*)arg4 error:(id*)arg5 ;
@end

