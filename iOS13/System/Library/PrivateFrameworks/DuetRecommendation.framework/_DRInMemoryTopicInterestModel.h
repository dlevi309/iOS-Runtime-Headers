/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
*/

#import <libobjc.A.dylib/_DRTopicInterestModeling.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, _DRTopicInterestSummary, NSObject;

@interface _DRInMemoryTopicInterestModel : NSObject <_DRTopicInterestModeling> {

	NSMutableArray* _topics;
	_DRTopicInterestSummary* _summary;
	NSObject*<OS_dispatch_queue> _syncQueue;

}
+(id)predicateForTopicInteractionsBefore:(id)arg1 ;
+(id)predicateForTopicsWithPrefix:(id)arg1 ;
+(id)predicateForTopicInteractionsAfter:(id)arg1 ;
-(id)init;
-(void)purgeEntriesWithPrefix:(id)arg1 earlierThanDate:(id)arg2 ;
-(void)recordPresentationOfTopics:(id)arg1 onDate:(id)arg2 ;
-(void)recordSelectionOfTopics:(id)arg1 onDate:(id)arg2 ;
-(id)computeSummaryWithFilter:(id)arg1 ;
-(void)enumerateTopicCountsWithFilter:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)purgeEntriesEarlierThanDate:(id)arg1 ;
@end

