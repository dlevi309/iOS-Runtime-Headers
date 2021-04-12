/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <libobjc.A.dylib/NTTodayResultsAggregator.h>

@protocol NTTodayResultsAggregator;
@class NSString;

@interface NTNewsTodayResultsContentFillAggregator : NSObject <NTTodayResultsAggregator> {

	double _minHeadlineScale;
	double _maxHeadlineScale;
	id<NTTodayResultsAggregator> _aggregator;

}

@property (assign,nonatomic) double minHeadlineScale;                              //@synthesize minHeadlineScale=_minHeadlineScale - In the implementation block
@property (assign,nonatomic) double maxHeadlineScale;                              //@synthesize maxHeadlineScale=_maxHeadlineScale - In the implementation block
@property (nonatomic,retain) id<NTTodayResultsAggregator> aggregator;              //@synthesize aggregator=_aggregator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NTTodayResultsAggregator>)aggregator;
-(id)init;
-(void)setMinHeadlineScale:(double)arg1 ;
-(void)setMaxHeadlineScale:(double)arg1 ;
-(double)minHeadlineScale;
-(double)maxHeadlineScale;
-(id)initWithAggregator:(id)arg1 minHeadlineScale:(double)arg2 maxHeadlineScale:(double)arg3 ;
-(id)aggregateSections:(id)arg1 itemsBySectionDescriptor:(id)arg2 budgetInfo:(id)arg3 ;
-(id)_aggregateSections:(id)arg1 itemsBySectionDescriptor:(id)arg2 budgetInfo:(id)arg3 scale:(double)arg4 ;
-(id)_bestResultOfResults:(id)arg1 withBudgetInfo:(id)arg2 ;
-(void)setAggregator:(id<NTTodayResultsAggregator>)arg1 ;
@end

