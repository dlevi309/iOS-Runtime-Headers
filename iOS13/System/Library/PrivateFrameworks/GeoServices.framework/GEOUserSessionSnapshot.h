/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOUserSessionEntity;

@interface GEOUserSessionSnapshot : NSObject {

	GEOUserSessionEntity* _shortSessionEntity;
	GEOUserSessionEntity* _longSessionEntity;
	GEOUserSessionEntity* _thirtyDayCountsSessionEntity;
	GEOUserSessionEntity* _navSessionEntity;
	GEOUserSessionEntity* _cohortSessionEntity;
	double _usageEventTime;

}

@property (nonatomic,retain) GEOUserSessionEntity * shortSessionEntity;                        //@synthesize shortSessionEntity=_shortSessionEntity - In the implementation block
@property (nonatomic,retain) GEOUserSessionEntity * longSessionEntity;                         //@synthesize longSessionEntity=_longSessionEntity - In the implementation block
@property (nonatomic,retain) GEOUserSessionEntity * thirtyDayCountsSessionEntity;              //@synthesize thirtyDayCountsSessionEntity=_thirtyDayCountsSessionEntity - In the implementation block
@property (nonatomic,retain) GEOUserSessionEntity * navSessionEntity;                          //@synthesize navSessionEntity=_navSessionEntity - In the implementation block
@property (nonatomic,retain) GEOUserSessionEntity * cohortSessionEntity;                       //@synthesize cohortSessionEntity=_cohortSessionEntity - In the implementation block
@property (assign,nonatomic) double usageEventTime;                                            //@synthesize usageEventTime=_usageEventTime - In the implementation block
-(id)initWithShortSessionEntity:(id)arg1 longSessionEntity:(id)arg2 thirtyDayCountsSessionEntity:(id)arg3 navSessionEntity:(id)arg4 cohortSessionEntity:(id)arg5 ;
-(GEOUserSessionEntity *)shortSessionEntity;
-(void)setShortSessionEntity:(GEOUserSessionEntity *)arg1 ;
-(GEOUserSessionEntity *)longSessionEntity;
-(void)setLongSessionEntity:(GEOUserSessionEntity *)arg1 ;
-(GEOUserSessionEntity *)thirtyDayCountsSessionEntity;
-(void)setThirtyDayCountsSessionEntity:(GEOUserSessionEntity *)arg1 ;
-(GEOUserSessionEntity *)navSessionEntity;
-(void)setNavSessionEntity:(GEOUserSessionEntity *)arg1 ;
-(GEOUserSessionEntity *)cohortSessionEntity;
-(void)setCohortSessionEntity:(GEOUserSessionEntity *)arg1 ;
-(double)usageEventTime;
-(void)setUsageEventTime:(double)arg1 ;
@end

