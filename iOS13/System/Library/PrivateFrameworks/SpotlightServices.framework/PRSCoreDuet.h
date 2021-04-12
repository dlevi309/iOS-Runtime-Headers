/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@class _DKKnowledgeStore, _DKEventStream;

@interface PRSCoreDuet : NSObject {

	_DKKnowledgeStore* _knowledgeStore;
	_DKEventStream* _spotlightStream;

}

@property (retain) _DKKnowledgeStore * knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (retain) _DKEventStream * spotlightStream;                //@synthesize spotlightStream=_spotlightStream - In the implementation block
-(_DKKnowledgeStore *)knowledgeStore;
-(void)setKnowledgeStore:(_DKKnowledgeStore *)arg1 ;
-(id)initWithStreamName:(id)arg1 ;
-(void)addResultCategoryAndGroupToHistory:(id)arg1 groupName:(id)arg2 error:(id)arg3 ;
-(id)getRankedCategoriesDictionaryWithPredictionWindow:(double)arg1 predictionInterval:(double)arg2 ;
-(_DKEventStream *)spotlightStream;
-(void)setSpotlightStream:(_DKEventStream *)arg1 ;
@end

