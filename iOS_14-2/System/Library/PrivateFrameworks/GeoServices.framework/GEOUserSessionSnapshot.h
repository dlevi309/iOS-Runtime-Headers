/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOUserSessionEntity;

@interface GEOUserSessionSnapshot : NSObject {

	GEOUserSessionEntity* _shortSessionEntity;
	GEOUserSessionEntity* _longSessionEntity;
	GEOUserSessionEntity* _navSessionEntity;
	GEOUserSessionEntity* _cohortSessionEntity;
	GEOUserSessionEntity* _fifteenMonthSessionEntity;
	double _usageEventTime;

}

@property (nonatomic,retain) GEOUserSessionEntity * shortSessionEntity;                     //@synthesize shortSessionEntity=_shortSessionEntity - In the implementation block
@property (nonatomic,retain) GEOUserSessionEntity * longSessionEntity;                      //@synthesize longSessionEntity=_longSessionEntity - In the implementation block
@property (nonatomic,retain) GEOUserSessionEntity * navSessionEntity;                       //@synthesize navSessionEntity=_navSessionEntity - In the implementation block
@property (nonatomic,retain) GEOUserSessionEntity * cohortSessionEntity;                    //@synthesize cohortSessionEntity=_cohortSessionEntity - In the implementation block
@property (nonatomic,retain) GEOUserSessionEntity * fifteenMonthSessionEntity;              //@synthesize fifteenMonthSessionEntity=_fifteenMonthSessionEntity - In the implementation block
@property (assign,nonatomic) double usageEventTime;                                         //@synthesize usageEventTime=_usageEventTime - In the implementation block
-(GEOUserSessionEntity *)cohortSessionEntity;
-(void)setFifteenMonthSessionEntity:(GEOUserSessionEntity *)arg1 ;
-(void)setShortSessionEntity:(GEOUserSessionEntity *)arg1 ;
-(void)setLongSessionEntity:(GEOUserSessionEntity *)arg1 ;
-(GEOUserSessionEntity *)navSessionEntity;
-(GEOUserSessionEntity *)fifteenMonthSessionEntity;
-(double)usageEventTime;
-(void)setNavSessionEntity:(GEOUserSessionEntity *)arg1 ;
-(void)setCohortSessionEntity:(GEOUserSessionEntity *)arg1 ;
-(void)setUsageEventTime:(double)arg1 ;
-(GEOUserSessionEntity *)shortSessionEntity;
-(GEOUserSessionEntity *)longSessionEntity;
-(id)initWithShortSessionEntity:(id)arg1 longSessionEntity:(id)arg2 navSessionEntity:(id)arg3 cohortSessionEntity:(id)arg4 fifteenMonthSessionEntity:(id)arg5 ;
@end

