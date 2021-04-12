/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
*/

#import <CoreDuet/_DKQuery.h>
#import <libobjc.A.dylib/_DKExecutableQuery.h>

@protocol OS_dispatch_queue;
@class NSObject, NSPredicate, _DRTopicInterestSummary;

@interface _DRTopicStatisticsQuery : _DKQuery <_DKExecutableQuery> {

	NSObject*<OS_dispatch_queue> _defaultQueue;
	NSPredicate* _predicate;
	_DRTopicInterestSummary* _summary;

}

@property (retain) _DRTopicInterestSummary * summary;              //@synthesize summary=_summary - In the implementation block
+(id)topicStatisticsQueryWithFilter:(id)arg1 ;
+(id)sumExpression;
+(id)countExpression;
+(id)topicStatisticsQuery;
-(id)executeUsingCoreDataStorage:(id)arg1 error:(id*)arg2 ;
-(id)handleResults:(id)arg1 error:(id)arg2 ;
-(id)initWithPredicate:(id)arg1 ;
-(_DRTopicInterestSummary *)summary;
-(void)setSummary:(_DRTopicInterestSummary *)arg1 ;
-(void)clearSummary;
@end

