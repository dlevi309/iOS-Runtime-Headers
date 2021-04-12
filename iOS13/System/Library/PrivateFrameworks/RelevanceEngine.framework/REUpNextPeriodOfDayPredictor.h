/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REObservableSingleton.h>

@class NSDateInterval;

@interface REUpNextPeriodOfDayPredictor : REObservableSingleton

@property (nonatomic,readonly) unsigned long long currentPeriodOfDay; 
@property (nonatomic,readonly) NSDateInterval * intervalForCurrentPeriodOfDay; 
-(unsigned long long)currentPeriodOfDay;
-(NSDateInterval *)intervalForCurrentPeriodOfDay;
-(id)dateIntervalForNextPeriodOfDay:(unsigned long long)arg1 ;
-(id)dateIntervalForPreviousPeriodOfDay:(unsigned long long)arg1 ;
@end

