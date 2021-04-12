/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
*/

#import <libobjc.A.dylib/HKRedactedDescription.h>

@class HKMCDaySummary, NSString;

@interface HKMCDayViewModel : NSObject <HKRedactedDescription> {

	BOOL _fetched;
	BOOL _partiallyLoggedPeriod;
	unsigned long long _menstruationLevel;
	unsigned long long _fertileWindowLevel;
	HKMCDaySummary* _daySummary;

}

@property (nonatomic,readonly) unsigned long long menstruationLevel;                                       //@synthesize menstruationLevel=_menstruationLevel - In the implementation block
@property (nonatomic,readonly) unsigned long long fertileWindowLevel;                                      //@synthesize fertileWindowLevel=_fertileWindowLevel - In the implementation block
@property (getter=isSupplementaryDataLogged,nonatomic,readonly) BOOL supplementaryDataLogged; 
@property (getter=isFetched,nonatomic,readonly) BOOL fetched;                                              //@synthesize fetched=_fetched - In the implementation block
@property (getter=isPartiallyLoggedPeriod,nonatomic,readonly) BOOL partiallyLoggedPeriod;                  //@synthesize partiallyLoggedPeriod=_partiallyLoggedPeriod - In the implementation block
@property (nonatomic,readonly) HKMCDaySummary * daySummary;                                                //@synthesize daySummary=_daySummary - In the implementation block
@property (copy,readonly) NSString * hk_redactedDescription; 
+(id)unfetchedDayViewModel;
+(id)dayViewModelWithMenstruationLevel:(unsigned long long)arg1 fertileWindowLevel:(unsigned long long)arg2 daySummary:(id)arg3 partiallyLoggedPeriod:(BOOL)arg4 fetched:(BOOL)arg5 ;
+(id)emptyDayViewModel;
-(id)description;
-(NSString *)hk_redactedDescription;
-(HKMCDaySummary *)daySummary;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isSupplementaryDataLogged;
-(BOOL)isFetched;
-(id)_initWithMenstruationLevel:(unsigned long long)arg1 fertileWindowLevel:(unsigned long long)arg2 daySummary:(id)arg3 partiallyLoggedPeriod:(BOOL)arg4 fetched:(BOOL)arg5 ;
-(unsigned long long)menstruationLevel;
-(unsigned long long)fertileWindowLevel;
-(BOOL)isPartiallyLoggedPeriod;
@end

