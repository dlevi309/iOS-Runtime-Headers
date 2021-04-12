/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GEORouteHypothesisIncident : NSObject <NSSecureCoding> {

	int _routeIncidentType;
	int _routeIncidentSignificance;

}

@property (nonatomic,readonly) int routeIncidentType;                      //@synthesize routeIncidentType=_routeIncidentType - In the implementation block
@property (nonatomic,readonly) int routeIncidentSignificance;              //@synthesize routeIncidentSignificance=_routeIncidentSignificance - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(int)routeIncidentType;
-(int)routeIncidentSignificance;
-(id)initWithIncidentType:(int)arg1 incidentSignificance:(int)arg2 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

