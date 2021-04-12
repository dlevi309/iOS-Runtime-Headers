/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface GEORouteRestrictionZoneInfo : NSObject <NSSecureCoding> {

	NSArray* _zoneIDs;
	int _restrictionZoneImpact;

}

@property (nonatomic,readonly) NSArray * zoneIDs;                      //@synthesize zoneIDs=_zoneIDs - In the implementation block
@property (nonatomic,readonly) int restrictionZoneImpact;              //@synthesize restrictionZoneImpact=_restrictionZoneImpact - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)zoneIDs;
-(id)init;
-(int)restrictionZoneImpact;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithGeoRoute:(id)arg1 ;
-(id)initWithGeoWaypointRoute:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

