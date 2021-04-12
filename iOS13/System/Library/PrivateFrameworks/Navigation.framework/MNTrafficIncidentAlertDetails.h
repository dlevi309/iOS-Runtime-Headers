/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, GEORoute, MNRouteCoordinate, GEOETARoute;

@interface MNTrafficIncidentAlertDetails : PBCodable <NSCopying> {

	double _alertTimestamp;
	double _distanceToIncident;
	double _etaTimestamp;
	NSData* _alertID;
	unsigned _alertType;
	GEORoute* _alternateRoute;
	NSData* _alternateRouteTrafficData;
	MNRouteCoordinate* _endValidCoordinateRange;
	NSData* _etaResponseID;
	GEOETARoute* _etaRoute;
	MNRouteCoordinate* _incidentCoordinate;
	GEORoute* _originalRoute;
	NSData* _originalRouteTrafficData;
	MNRouteCoordinate* _startValidCoordinateRange;
	BOOL _isAutomaticReroute;
	SCD_Struct_MN7 _has;

}

@property (nonatomic,readonly) BOOL hasAlertID; 
@property (nonatomic,retain) NSData * alertID;                                           //@synthesize alertID=_alertID - In the implementation block
@property (nonatomic,readonly) BOOL hasEtaResponseID; 
@property (nonatomic,retain) NSData * etaResponseID;                                     //@synthesize etaResponseID=_etaResponseID - In the implementation block
@property (assign,nonatomic) BOOL hasAlertType; 
@property (assign,nonatomic) unsigned alertType;                                         //@synthesize alertType=_alertType - In the implementation block
@property (nonatomic,readonly) BOOL hasEtaRoute; 
@property (nonatomic,retain) GEOETARoute * etaRoute;                                     //@synthesize etaRoute=_etaRoute - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalRoute; 
@property (nonatomic,retain) GEORoute * originalRoute;                                   //@synthesize originalRoute=_originalRoute - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalRouteTrafficData; 
@property (nonatomic,retain) NSData * originalRouteTrafficData;                          //@synthesize originalRouteTrafficData=_originalRouteTrafficData - In the implementation block
@property (nonatomic,readonly) BOOL hasAlternateRoute; 
@property (nonatomic,retain) GEORoute * alternateRoute;                                  //@synthesize alternateRoute=_alternateRoute - In the implementation block
@property (nonatomic,readonly) BOOL hasAlternateRouteTrafficData; 
@property (nonatomic,retain) NSData * alternateRouteTrafficData;                         //@synthesize alternateRouteTrafficData=_alternateRouteTrafficData - In the implementation block
@property (nonatomic,readonly) BOOL hasStartValidCoordinateRange; 
@property (nonatomic,retain) MNRouteCoordinate * startValidCoordinateRange;              //@synthesize startValidCoordinateRange=_startValidCoordinateRange - In the implementation block
@property (nonatomic,readonly) BOOL hasEndValidCoordinateRange; 
@property (nonatomic,retain) MNRouteCoordinate * endValidCoordinateRange;                //@synthesize endValidCoordinateRange=_endValidCoordinateRange - In the implementation block
@property (nonatomic,readonly) BOOL hasIncidentCoordinate; 
@property (nonatomic,retain) MNRouteCoordinate * incidentCoordinate;                     //@synthesize incidentCoordinate=_incidentCoordinate - In the implementation block
@property (assign,nonatomic) BOOL hasAlertTimestamp; 
@property (assign,nonatomic) double alertTimestamp;                                      //@synthesize alertTimestamp=_alertTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEtaTimestamp; 
@property (assign,nonatomic) double etaTimestamp;                                        //@synthesize etaTimestamp=_etaTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceToIncident; 
@property (assign,nonatomic) double distanceToIncident;                                  //@synthesize distanceToIncident=_distanceToIncident - In the implementation block
@property (assign,nonatomic) BOOL hasIsAutomaticReroute; 
@property (assign,nonatomic) BOOL isAutomaticReroute;                                    //@synthesize isAutomaticReroute=_isAutomaticReroute - In the implementation block
+(id)detailsForTrafficIncidentAlert:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEORoute *)originalRoute;
-(void)setOriginalRoute:(GEORoute *)arg1 ;
-(BOOL)hasOriginalRoute;
-(double)etaTimestamp;
-(void)setEtaTimestamp:(double)arg1 ;
-(void)setHasEtaTimestamp:(BOOL)arg1 ;
-(BOOL)hasEtaTimestamp;
-(unsigned)alertType;
-(void)setAlertType:(unsigned)arg1 ;
-(void)setHasAlertType:(BOOL)arg1 ;
-(BOOL)hasAlertType;
-(void)setAlertID:(NSData *)arg1 ;
-(void)setEtaResponseID:(NSData *)arg1 ;
-(void)setEtaRoute:(GEOETARoute *)arg1 ;
-(void)setOriginalRouteTrafficData:(NSData *)arg1 ;
-(void)setAlternateRoute:(GEORoute *)arg1 ;
-(void)setAlternateRouteTrafficData:(NSData *)arg1 ;
-(void)setStartValidCoordinateRange:(MNRouteCoordinate *)arg1 ;
-(void)setEndValidCoordinateRange:(MNRouteCoordinate *)arg1 ;
-(void)setIncidentCoordinate:(MNRouteCoordinate *)arg1 ;
-(BOOL)hasAlertID;
-(BOOL)hasEtaResponseID;
-(BOOL)hasEtaRoute;
-(BOOL)hasOriginalRouteTrafficData;
-(BOOL)hasAlternateRoute;
-(BOOL)hasAlternateRouteTrafficData;
-(BOOL)hasStartValidCoordinateRange;
-(BOOL)hasEndValidCoordinateRange;
-(BOOL)hasIncidentCoordinate;
-(void)setAlertTimestamp:(double)arg1 ;
-(void)setHasAlertTimestamp:(BOOL)arg1 ;
-(BOOL)hasAlertTimestamp;
-(void)setDistanceToIncident:(double)arg1 ;
-(void)setHasDistanceToIncident:(BOOL)arg1 ;
-(BOOL)hasDistanceToIncident;
-(void)setIsAutomaticReroute:(BOOL)arg1 ;
-(void)setHasIsAutomaticReroute:(BOOL)arg1 ;
-(BOOL)hasIsAutomaticReroute;
-(NSData *)alertID;
-(NSData *)etaResponseID;
-(GEOETARoute *)etaRoute;
-(NSData *)originalRouteTrafficData;
-(GEORoute *)alternateRoute;
-(NSData *)alternateRouteTrafficData;
-(MNRouteCoordinate *)startValidCoordinateRange;
-(MNRouteCoordinate *)endValidCoordinateRange;
-(MNRouteCoordinate *)incidentCoordinate;
-(double)alertTimestamp;
-(double)distanceToIncident;
-(BOOL)isAutomaticReroute;
@end

