/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/PMLProtoBufTracker.h>

@class PMLTrackerMockAdapter, NSArray;

@interface PMLAWDEvaluationTrackerMock : PMLProtoBufTracker {

	PMLTrackerMockAdapter* _adapter;

}

@property (nonatomic,readonly) NSArray * trackedEvaluations; 
+(id)mockTracker;
+(id)mockTrackerForPlanId:(id)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(id)initWithAdapter:(id)arg1 modelInfo:(id)arg2 ;
-(void)clearTrackedMessages;
-(NSArray *)trackedEvaluations;
@end

