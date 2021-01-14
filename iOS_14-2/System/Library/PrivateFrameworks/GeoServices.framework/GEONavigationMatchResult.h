/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEORouteMatch, GEORoadMatch, GEOLocation, GEONavigationMatchInfo;

@interface GEONavigationMatchResult : NSObject {

	unsigned long long _type;
	GEORouteMatch* _routeMatch;
	GEORoadMatch* _roadMatch;
	GEOLocation* _rawLocation;
	GEONavigationMatchInfo* _detailedMatchInfo;
	BOOL _locationUnreliable;

}

@property (nonatomic,readonly) unsigned long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) GEORouteMatch * routeMatch;                              //@synthesize routeMatch=_routeMatch - In the implementation block
@property (nonatomic,readonly) GEORoadMatch * roadMatch;                                //@synthesize roadMatch=_roadMatch - In the implementation block
@property (nonatomic,readonly) GEOLocation * rawLocation;                               //@synthesize rawLocation=_rawLocation - In the implementation block
@property (nonatomic,readonly) GEONavigationMatchInfo * detailedMatchInfo;              //@synthesize detailedMatchInfo=_detailedMatchInfo - In the implementation block
@property (nonatomic,readonly) BOOL locationUnreliable;                                 //@synthesize locationUnreliable=_locationUnreliable - In the implementation block
+(id)matchResultWithRawLocation:(id)arg1 ;
+(id)matchResultWithRouteMatch:(id)arg1 location:(id)arg2 ;
+(id)matchResultWithRoadMatch:(id)arg1 location:(id)arg2 ;
-(void)setRouteMatch:(GEORouteMatch *)arg1 ;
-(BOOL)locationUnreliable;
-(GEORouteMatch *)routeMatch;
-(GEONavigationMatchInfo *)detailedMatchInfo;
-(void)setLocationUnreliable:(BOOL)arg1 ;
-(void)setDetailedMatchInfo:(GEONavigationMatchInfo *)arg1 ;
-(unsigned long long)type;
-(id)initWithRawLocation:(id)arg1 ;
-(GEOLocation *)rawLocation;
-(GEORoadMatch *)roadMatch;
-(id)initWithRouteMatch:(id)arg1 location:(id)arg2 ;
-(id)initWithRoadMatch:(id)arg1 location:(id)arg2 ;
@end

