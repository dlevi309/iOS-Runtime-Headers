/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/PMLProtoBufTracker.h>

@class PMLTrackerMockAdapter, NSArray;

@interface PMLAWDEvaluationTrackerMock : PMLProtoBufTracker {

	PMLTrackerMockAdapter* _adapter;

}

@property (readonly) NSArray * trackedEvaluations; 
+(id)mockTracker;
+(id)mockTrackerForPlanId:(id)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(void)clearTrackedMessages;
-(id)initWithAdapter:(id)arg1 modelInfo:(id)arg2 ;
-(NSArray *)trackedEvaluations;
@end

