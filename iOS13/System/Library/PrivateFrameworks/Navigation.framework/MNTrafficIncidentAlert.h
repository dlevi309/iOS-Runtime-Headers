/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, GEOETARoute, GEOComposedRoute, GEOComposedRouteTraffic, NSDate, NSArray, GEORouteIncident;

@interface MNTrafficIncidentAlert : NSObject <NSSecureCoding> {

	NSData* _alertID;
	NSData* _etaResponseID;
	unsigned long long _alertType;
	GEOETARoute* _oldETARoute;
	GEOComposedRoute* _originalRoute;
	GEOComposedRouteTraffic* _originalRouteTraffic;
	GEOComposedRoute* _alternateRoute;
	GEOComposedRouteTraffic* _alternateRouteTraffic;
	PolylineCoordinate _startValidCoordinateRange;
	PolylineCoordinate _endValidCoordinateRange;
	PolylineCoordinate _incidentCoordinate;
	PolylineCoordinate _alternateEndValidCoordinateRange;
	NSDate* _alertDate;
	double _distanceToIncident;
	NSDate* _eta;
	BOOL _isAutomaticReroute;

}

@property (nonatomic,readonly) NSData * alertID;                                                 //@synthesize alertID=_alertID - In the implementation block
@property (nonatomic,readonly) NSData * etaResponseID;                                           //@synthesize etaResponseID=_etaResponseID - In the implementation block
@property (nonatomic,readonly) unsigned long long alertType;                                     //@synthesize alertType=_alertType - In the implementation block
@property (assign,nonatomic) double distanceToIncident;                                          //@synthesize distanceToIncident=_distanceToIncident - In the implementation block
@property (nonatomic,retain) NSDate * eta;                                                       //@synthesize eta=_eta - In the implementation block
@property (nonatomic,readonly) NSArray * alertTitles; 
@property (nonatomic,readonly) NSArray * alertDescriptions; 
@property (nonatomic,readonly) NSArray * spokenTexts; 
@property (nonatomic,readonly) GEOETARoute * oldETARoute;                                        //@synthesize oldETARoute=_oldETARoute - In the implementation block
@property (nonatomic,readonly) GEORouteIncident * oldETARouteIncident; 
@property (nonatomic,readonly) GEOComposedRoute * originalRoute;                                 //@synthesize originalRoute=_originalRoute - In the implementation block
@property (nonatomic,readonly) GEOComposedRouteTraffic * originalRouteTraffic;                   //@synthesize originalRouteTraffic=_originalRouteTraffic - In the implementation block
@property (nonatomic,readonly) GEOComposedRoute * alternateRoute;                                //@synthesize alternateRoute=_alternateRoute - In the implementation block
@property (nonatomic,readonly) GEOComposedRouteTraffic * alternateRouteTraffic;                  //@synthesize alternateRouteTraffic=_alternateRouteTraffic - In the implementation block
@property (nonatomic,readonly) double oldEstimatedTime; 
@property (nonatomic,readonly) double newEstimatedTime; 
@property (nonatomic,readonly) PolylineCoordinate startValidCoordinateRange;                     //@synthesize startValidCoordinateRange=_startValidCoordinateRange - In the implementation block
@property (nonatomic,readonly) PolylineCoordinate endValidCoordinateRange;                       //@synthesize endValidCoordinateRange=_endValidCoordinateRange - In the implementation block
@property (nonatomic,readonly) PolylineCoordinate incidentCoordinate;                            //@synthesize incidentCoordinate=_incidentCoordinate - In the implementation block
@property (nonatomic,readonly) PolylineCoordinate alternateEndValidCoordinateRange;              //@synthesize alternateEndValidCoordinateRange=_alternateEndValidCoordinateRange - In the implementation block
@property (nonatomic,readonly) NSDate * alertDate;                                               //@synthesize alertDate=_alertDate - In the implementation block
@property (nonatomic,readonly) double alertDisplayDuration; 
@property (nonatomic,readonly) BOOL isAutomaticReroute;                                          //@synthesize isAutomaticReroute=_isAutomaticReroute - In the implementation block
@property (nonatomic,readonly) unsigned long long secondsSaved; 
+(BOOL)supportsSecureCoding;
+(id)trafficIncidentAlertForDetails:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(GEOComposedRoute *)originalRoute;
-(unsigned long long)secondsSaved;
-(unsigned long long)alertType;
-(NSDate *)eta;
-(void)setEta:(NSDate *)arg1 ;
-(BOOL)isSimilarTo:(id)arg1 ;
-(SCD_Struct_MN8)_divergenceCoordinate;
-(void)updateLocation:(id)arg1 ;
-(void)setDistanceToIncident:(double)arg1 ;
-(NSData *)alertID;
-(NSData *)etaResponseID;
-(GEOComposedRoute *)alternateRoute;
-(PolylineCoordinate)startValidCoordinateRange;
-(PolylineCoordinate)endValidCoordinateRange;
-(PolylineCoordinate)incidentCoordinate;
-(double)distanceToIncident;
-(BOOL)isAutomaticReroute;
-(id)initWithRoute:(id)arg1 traffic:(id)arg2 etaRoute:(id)arg3 etaResponse:(id)arg4 ;
-(GEOComposedRouteTraffic *)originalRouteTraffic;
-(GEOETARoute *)oldETARoute;
-(GEOComposedRouteTraffic *)alternateRouteTraffic;
-(PolylineCoordinate)alternateEndValidCoordinateRange;
-(void)updateAlertIDWithAlert:(id)arg1 ;
-(id)initWithTrafficIncidentAlertDetails:(id)arg1 ;
-(NSDate *)alertDate;
-(NSArray *)spokenTexts;
-(void)_findRouteDivergence;
-(id)_dynamicStringValues;
-(PolylineCoordinate)_routeCoordinateAtDuration:(double)arg1 beforeRouteCoordinate:(PolylineCoordinate)arg2 ;
-(NSArray *)alertTitles;
-(NSArray *)alertDescriptions;
-(GEORouteIncident *)oldETARouteIncident;
-(double)oldEstimatedTime;
-(double)newEstimatedTime;
-(double)alertDisplayDuration;
@end

