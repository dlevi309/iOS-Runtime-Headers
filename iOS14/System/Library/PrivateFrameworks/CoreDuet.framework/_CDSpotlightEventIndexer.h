/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class _CDEventIndexerContext, CSSearchableIndex, _CDSpotlightEventIndexerDataSource;

@interface _CDSpotlightEventIndexer : NSObject {

	_CDEventIndexerContext* _context;
	CSSearchableIndex* _index;
	_CDSpotlightEventIndexerDataSource* _dataSource;

}

@property (nonatomic,retain) _CDEventIndexerContext * context;               //@synthesize context=_context - In the implementation block
@property (getter=isIndexing,nonatomic,readonly) BOOL indexing; 
-(BOOL)isIndexing;
-(id)initWithDataSource:(id)arg1 ;
-(_CDEventIndexerContext *)context;
-(void)beginIndexingWithBatchSize:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setContext:(_CDEventIndexerContext *)arg1 ;
@end

