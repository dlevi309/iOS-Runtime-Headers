/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(RTLearnedPlace *)place;
-(void)log;
-(id)description;
-(RTLearnedPlaceTypeInferenceStats *)stats;
-(void)setPlace:(RTLearnedPlace *)arg1 ;
-(unsigned long long)visitsCount;
-(id)initWithPlace:(id)arg1 visits:(id)arg2 ;
-(void)setVisitsCount:(unsigned long long)arg1 ;
@end

