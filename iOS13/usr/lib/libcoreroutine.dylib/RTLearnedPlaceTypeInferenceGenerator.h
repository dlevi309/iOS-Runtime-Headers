/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSMutableArray, RTLearnedVisit;

@interface RTLearnedPlaceTypeInferenceGenerator : NSObject {

	NSMutableArray* _placeStats;
	RTLearnedVisit* _firstVisit;
	RTLearnedVisit* _lastVisit;

}

@property (nonatomic,retain) NSMutableArray * placeStats;              //@synthesize placeStats=_placeStats - In the implementation block
@property (nonatomic,retain) RTLearnedVisit * firstVisit;              //@synthesize firstVisit=_firstVisit - In the implementation block
@property (nonatomic,retain) RTLearnedVisit * lastVisit;               //@synthesize lastVisit=_lastVisit - In the implementation block
-(id)init;
-(void)log;
-(RTLearnedVisit *)lastVisit;
-(void)submitVisits:(id)arg1 place:(id)arg2 ;
-(id)inferPlaceTypes;
-(NSMutableArray *)placeStats;
-(RTLearnedVisit *)firstVisit;
-(void)setFirstVisit:(RTLearnedVisit *)arg1 ;
-(void)setLastVisit:(RTLearnedVisit *)arg1 ;
-(id)inferPlaceTypesFromDailyPatterns;
-(id)inferPlaceTypesFromTopMedianDwellTime;
-(void)setPlaceStats:(NSMutableArray *)arg1 ;
@end

