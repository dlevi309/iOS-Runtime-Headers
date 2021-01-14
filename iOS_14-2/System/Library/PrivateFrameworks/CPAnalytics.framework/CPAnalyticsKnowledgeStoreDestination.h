/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/

#import <CPAnalytics/CPAnalyticsDestination.h>

@protocol _DKKnowledgeSaving;
@class NSMutableArray, NSString;

@interface CPAnalyticsKnowledgeStoreDestination : NSObject <CPAnalyticsDestination> {

	NSMutableArray* _matchers;
	id<_DKKnowledgeSaving> _knowledgeStore;

}

@property (nonatomic,readonly) NSMutableArray * matchers;                          //@synthesize matchers=_matchers - In the implementation block
@property (nonatomic,readonly) id<_DKKnowledgeSaving> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)processEvent:(id)arg1 ;
-(void)_addCoreDuetDatasetSample:(id)arg1 toDataset:(id)arg2 ;
-(id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
-(NSMutableArray *)matchers;
-(id<_DKKnowledgeSaving>)knowledgeStore;
-(id)_datasetSampleFromEvent:(id)arg1 andMatcher:(id)arg2 ;
@end

