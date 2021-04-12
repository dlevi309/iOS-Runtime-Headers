/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

@class NSMutableArray, RETrainingScheduler;


@protocol RETrainingManagerProperties <REExportedInterface>
@property (nonatomic,readonly) NSMutableArray * trainingEvents; 
@property (nonatomic,readonly) RETrainingScheduler * trainingScheduler; 
@required
-(NSMutableArray *)trainingEvents;
-(RETrainingScheduler *)trainingScheduler;

@end

