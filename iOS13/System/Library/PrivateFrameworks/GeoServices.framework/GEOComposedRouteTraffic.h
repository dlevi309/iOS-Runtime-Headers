/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSArray, NSData;

@interface GEOComposedRouteTraffic : NSObject <NSSecureCoding> {

	NSUUID* _routeID;
	NSArray* _trafficIncidents;
	NSArray* _trafficIncidentOffsets;
	NSData* _trafficColors;
	NSData* _trafficColorOffsets;
	NSArray* _enrouteNotices;

}

@property (nonatomic,retain) NSArray * trafficIncidents;                                 //@synthesize trafficIncidents=_trafficIncidents - In the implementation block
@property (nonatomic,retain) NSArray * trafficIncidentOffsets;                           //@synthesize trafficIncidentOffsets=_trafficIncidentOffsets - In the implementation block
@property (nonatomic,readonly) NSUUID * routeID;                                         //@synthesize routeID=_routeID - In the implementation block
@property (nonatomic,readonly) unsigned* trafficColors; 
@property (nonatomic,readonly) unsigned long long trafficColorsCount; 
@property (nonatomic,readonly) unsigned* trafficColorOffsets; 
@property (nonatomic,readonly) unsigned long long trafficColorOffsetsCount; 
@property (nonatomic,readonly) NSArray * enrouteNotices;                                 //@synthesize enrouteNotices=_enrouteNotices - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)trafficForGEORoute:(id)arg1 routeInitializerData:(id)arg2 route:(id)arg3 ;
+(id)trafficForNewAlternateRoute:(id)arg1 existingAlternateRoute:(id)arg2 incidents:(id)arg3 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)routeID;
-(unsigned long long)trafficColorsCount;
-(unsigned long long)trafficColorOffsetsCount;
-(unsigned*)trafficColors;
-(unsigned*)trafficColorOffsets;
-(void)setRoute:(id)arg1 ;
-(NSArray *)enrouteNotices;
-(void)setEnrouteNotices:(NSArray *)arg1 ;
-(id)initWithRouteID:(id)arg1 ;
-(void)setTrafficColors:(unsigned*)arg1 ;
-(void)setTrafficColorOffsets:(unsigned*)arg1 ;
-(void)createTrafficIncidentsForRoute:(id)arg1 initializerData:(id)arg2 ;
-(void)setTrafficIncidents:(NSArray *)arg1 ;
-(void)setTrafficIncidentOffsets:(NSArray *)arg1 ;
-(id)_colorStringForIndex:(unsigned long long)arg1 ;
-(id)enrouteNoticeWithIdentifier:(id)arg1 ;
-(NSArray *)trafficIncidents;
-(NSArray *)trafficIncidentOffsets;
@end

