/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface GEOComposedRouteTraffic : NSObject <NSSecureCoding> {

	NSArray* _trafficColors;
	NSArray* _incidents;

}

@property (nonatomic,readonly) NSArray * trafficIncidents; 
@property (nonatomic,readonly) NSArray * trafficIncidentOffsets; 
@property (nonatomic,readonly) unsigned* trafficColors; 
@property (nonatomic,readonly) unsigned long long trafficColorsCount; 
@property (nonatomic,readonly) unsigned* trafficColorOffsets; 
@property (nonatomic,readonly) unsigned long long trafficColorOffsetsCount; 
@property (nonatomic,readonly) NSArray * routeTrafficColors;                             //@synthesize trafficColors=_trafficColors - In the implementation block
@property (nonatomic,readonly) NSArray * routeIncidents;                                 //@synthesize incidents=_incidents - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithRoute:(id)arg1 initializerData:(id)arg2 ;
-(id)description;
-(NSArray *)routeIncidents;
-(id)initWithRoute:(id)arg1 etaRoute:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)trafficColorsCount;
-(unsigned long long)trafficColorOffsetsCount;
-(unsigned*)trafficColors;
-(unsigned*)trafficColorOffsets;
-(id)_trafficColorInfosFromTrafficBuilder:(id)arg1 route:(id)arg2 ;
-(id)_incidentsForOldRoute:(id)arg1 etaRoute:(id)arg2 ;
-(void)_buildIncidentsForRoute:(id)arg1 etaRoute:(id)arg2 initializerData:(id)arg3 ;
-(id)_incidentsForOldRoute:(id)arg1 geoIncidentsFromResponse:(id)arg2 ;
-(id)_incidentsForRoute:(id)arg1 ;
-(id)_incidentsForRoute:(id)arg1 etaRoute:(id)arg2 ;
-(NSArray *)routeTrafficColors;
-(NSArray *)trafficIncidents;
-(NSArray *)trafficIncidentOffsets;
@end

