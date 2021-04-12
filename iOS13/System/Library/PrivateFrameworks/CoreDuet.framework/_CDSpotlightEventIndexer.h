/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class _CDEventIndexerContext, CSSearchableIndex, _CDSpotlightEventIndexerDataSource;

@interface _CDSpotlightEventIndexer : NSObject {

	_CDEventIndexerContext* _context;
	CSSearchableIndex* _index;
	_CDSpotlightEventIndexerDataSource* _dataSource;

}

@property (nonatomic,retain) _CDEventIndexerContext * context;                               //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) CSSearchableIndex * index;                                    //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) _CDSpotlightEventIndexerDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (getter=isIndexing,nonatomic,readonly) BOOL indexing; 
+(id)keyPathsForValuesAffectingIndexing;
-(CSSearchableIndex *)index;
-(_CDEventIndexerContext *)context;
-(void)setContext:(_CDEventIndexerContext *)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(BOOL)isIndexing;
-(void)beginIndexingWithBatchSize:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(_CDSpotlightEventIndexerDataSource *)dataSource;
-(void)_beginIndexingFromLatestSpotlightClientState;
-(void)finishIndexing;
-(void)indexDeletionsAsBatch;
-(void)resetIndex;
-(void)indexAdditionsAsBatch;
@end

