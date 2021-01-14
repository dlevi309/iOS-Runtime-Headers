/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

