/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOComposedRouteTraffic, NSMutableDictionary;

@interface GEOComposedRouteMutableData : NSObject <NSSecureCoding> {

	GEOComposedRouteTraffic* _traffic;
	NSMutableDictionary* _stepsIDToEVInfos;
	NSMutableDictionary* _legIndexToChargingStationInfos;

}

@property (nonatomic,retain) GEOComposedRouteTraffic * traffic;              //@synthesize traffic=_traffic - In the implementation block
+(BOOL)supportsSecureCoding;
-(GEOComposedRouteTraffic *)traffic;
-(void)updateForRoute:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)chargingStationInfoForLegIndex:(unsigned long long)arg1 ;
-(void)setTraffic:(GEOComposedRouteTraffic *)arg1 ;
-(void)updateForRoute:(id)arg1 etaRoute:(id)arg2 ;
-(id)evInfoForStepID:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

