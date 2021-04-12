/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)routeIncidentType;
-(int)routeIncidentSignificance;
-(id)initWithIncidentType:(int)arg1 incidentSignificance:(int)arg2 ;
@end

