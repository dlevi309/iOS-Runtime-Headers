/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class RTLearnedPlaceTypeInferenceStats, RTLearnedPlace;

@interface RTLearnedPlaceTypeInferencePlaceStats : NSObject {

	RTLearnedPlaceTypeInferenceStats* _stats;
	RTLearnedPlace* _place;
	unsigned long long _visitsCount;

}

@property (nonatomic,retain) RTLearnedPlace * place;                                  //@synthesize place=_place - In the implementation block
@property (assign,nonatomic) unsigned long long visitsCount;                          //@synthesize visitsCount=_visitsCount - In the implementation block
@property (nonatomic,readonly) RTLearnedPlaceTypeInferenceStats * stats;              //@synthesize stats=_stats - In the implementation block
+(id)visitsWithDwellTimeBetweenDateRange:(id)arg1 start:(id)arg2 end:(id)arg3 ;
+(id)extractDailyStatsFromVisits:(id)arg1 ;
+(id)extractWeeklyStatsFromDailyStats:(id)arg1 ;
+(double)extractTopMedianDwellTimeFromVisits:(id)arg1 ;
-(id)description;
-(void)log;
-(RTLearnedPlace *)place;
-(void)setPlace:(RTLearnedPlace *)arg1 ;
-(RTLearnedPlaceTypeInferenceStats *)stats;
-(unsigned long long)visitsCount;
-(id)initWithPlace:(id)arg1 visits:(id)arg2 ;
-(void)setVisitsCount:(unsigned long long)arg1 ;
@end

