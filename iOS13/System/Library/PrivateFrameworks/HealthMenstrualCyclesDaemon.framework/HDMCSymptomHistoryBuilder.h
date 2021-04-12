/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
*/


@class NSMutableDictionary;

@interface HDMCSymptomHistoryBuilder : NSObject {

	NSMutableDictionary* _mostRecentDayBySymptom;
	unsigned long long _recentSymptoms;

}

@property (assign,nonatomic) unsigned long long recentSymptoms;              //@synthesize recentSymptoms=_recentSymptoms - In the implementation block
-(unsigned long long)recentSymptoms;
-(id)initWithCurrentDayIndex:(long long)arg1 ;
-(void)addSymptoms:(unsigned long long)arg1 forDayIndex:(long long)arg2 ;
-(void)setRecentSymptoms:(unsigned long long)arg1 ;
@end

