/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@protocol _DKKnowledgeSaving_DKKnowledgeQuerying;
@interface PHACoreDuetDatasetStorage : NSObject {

	id<_DKKnowledgeSaving><_DKKnowledgeQuerying> _knowledgeStore;

}

@property (nonatomic,readonly) id<_DKKnowledgeSaving><_DKKnowledgeQuerying> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
-(id)init;
-(id<_DKKnowledgeSaving><_DKKnowledgeQuerying>)knowledgeStore;
-(id)initWithKnowledgeStore:(id)arg1 ;
-(void)addSample:(id)arg1 toDataset:(id)arg2 ;
-(id)samplesForDataset:(id)arg1 subset:(id)arg2 ;
-(id)_getEventStreamForDatasetName:(id)arg1 ;
@end

