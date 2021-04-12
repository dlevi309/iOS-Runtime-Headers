/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

