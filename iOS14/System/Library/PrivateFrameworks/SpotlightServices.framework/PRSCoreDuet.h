/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@class _DKKnowledgeStore, _DKEventStream;

@interface PRSCoreDuet : NSObject {

	_DKKnowledgeStore* _knowledgeStore;
	_DKEventStream* _spotlightStream;

}

@property (retain) _DKKnowledgeStore * knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (retain) _DKEventStream * spotlightStream;                //@synthesize spotlightStream=_spotlightStream - In the implementation block
-(void)setSpotlightStream:(_DKEventStream *)arg1 ;
-(_DKEventStream *)spotlightStream;
-(void)addResultCategoryAndGroupToHistory:(id)arg1 groupName:(id)arg2 error:(id)arg3 ;
-(void)setKnowledgeStore:(_DKKnowledgeStore *)arg1 ;
-(_DKKnowledgeStore *)knowledgeStore;
-(id)initWithStreamName:(id)arg1 ;
-(id)getRankedCategoriesDictionaryWithPredictionWindow:(double)arg1 predictionInterval:(double)arg2 ;
@end

