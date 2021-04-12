/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

