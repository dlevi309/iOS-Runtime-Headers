/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
*/


@class HKMCDaySummary;

@interface HKMCDayViewModel : NSObject {

	BOOL _fetched;
	unsigned long long _menstruationLevel;
	unsigned long long _fertileWindowLevel;
	HKMCDaySummary* _daySummary;

}

@property (nonatomic,readonly) unsigned long long menstruationLevel;                                       //@synthesize menstruationLevel=_menstruationLevel - In the implementation block
@property (nonatomic,readonly) unsigned long long fertileWindowLevel;                                      //@synthesize fertileWindowLevel=_fertileWindowLevel - In the implementation block
@property (getter=isSupplementaryDataLogged,nonatomic,readonly) BOOL supplementaryDataLogged; 
@property (getter=isFetched,nonatomic,readonly) BOOL fetched;                                              //@synthesize fetched=_fetched - In the implementation block
@property (nonatomic,readonly) HKMCDaySummary * daySummary;                                                //@synthesize daySummary=_daySummary - In the implementation block
+(id)unfetchedDayViewModel;
+(id)dayViewModelWithMenstruationLevel:(unsigned long long)arg1 fertileWindowLevel:(unsigned long long)arg2 daySummary:(id)arg3 fetched:(BOOL)arg4 ;
+(id)emptyDayViewModel;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)redactedDescription;
-(BOOL)isSupplementaryDataLogged;
-(BOOL)isFetched;
-(id)_initWithMenstruationLevel:(unsigned long long)arg1 fertileWindowLevel:(unsigned long long)arg2 daySummary:(id)arg3 fetched:(BOOL)arg4 ;
-(unsigned long long)menstruationLevel;
-(unsigned long long)fertileWindowLevel;
-(HKMCDaySummary *)daySummary;
@end

