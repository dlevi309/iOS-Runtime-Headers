/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedTransitBaseRouteSegment.h>

@interface GEOComposedTransitStationRouteSegment : GEOComposedTransitBaseRouteSegment
-(BOOL)isTransfer;
-(BOOL)hasEnterStationManeuver;
-(id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 stepRange:(NSRange)arg3 transitStepRange:(NSRange)arg4 pointRange:(NSRange)arg5 ;
-(BOOL)hasExitStationManeuver;
@end

