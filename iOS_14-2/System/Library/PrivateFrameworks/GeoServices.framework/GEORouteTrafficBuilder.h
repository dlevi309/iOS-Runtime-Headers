/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMutableData;

@interface GEORouteTrafficBuilder : NSObject {

	NSMutableData* _trafficColors;
	NSMutableData* _trafficOffsets;
	unsigned _trafficDistance;

}
-(id)init;
-(id)trafficColors;
-(void)addTrafficFromRoute:(id)arg1 withStepRange:(NSRange)arg2 ;
-(void)copyTrafficToRoute:(id)arg1 ;
-(void)buildTrafficForRoute:(id)arg1 ;
-(id)trafficOffsets;
-(void)buildTrafficForRoute:(id)arg1 etaRoute:(id)arg2 ;
-(void)_buildTrafficForRoute:(id)arg1 toDistance:(unsigned)arg2 ;
-(void)_buildTrafficForRoute:(id)arg1 etaRoute:(id)arg2 ;
-(void)_buildTrafficForRouteWithGeoRoute:(id)arg1 toDistance:(unsigned)arg2 ;
-(void)_buildTrafficForOldRoute:(id)arg1 etaRoute:(id)arg2 ;
-(void)addTrafficFromETARoute:(id)arg1 ;
-(void)addTrafficFromRoute:(id)arg1 from:(unsigned)arg2 to:(unsigned)arg3 ;
-(void)_removeDuplicateTraffic;
@end

