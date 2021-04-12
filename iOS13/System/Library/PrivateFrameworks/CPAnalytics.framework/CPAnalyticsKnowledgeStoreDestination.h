/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/

#import <CPAnalytics/CPAnalyticsDestination.h>

@protocol _DKKnowledgeSaving;
@class NSMutableArray;

@interface CPAnalyticsKnowledgeStoreDestination : NSObject <CPAnalyticsDestination> {

	NSMutableArray* _matchers;
	id<_DKKnowledgeSaving> _knowledgeStore;

}

@property (nonatomic,readonly) NSMutableArray * matchers;                          //@synthesize matchers=_matchers - In the implementation block
@property (nonatomic,readonly) id<_DKKnowledgeSaving> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
-(id<_DKKnowledgeSaving>)knowledgeStore;
-(void)processEvent:(id)arg1 ;
-(NSMutableArray *)matchers;
-(id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
-(id)_datasetSampleFromEvent:(id)arg1 andMatcher:(id)arg2 ;
-(void)_addCoreDuetDatasetSample:(id)arg1 toDataset:(id)arg2 ;
@end

