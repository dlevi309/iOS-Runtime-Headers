/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedRouteSegment.h>

@interface GEOComposedTransitBaseRouteSegment : GEOComposedRouteSegment {

	NSRange _transitStepRange;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithComposedRoute:(id)arg1 routeSegmentType:(long long)arg2 stepRange:(NSRange)arg3 transitStepRange:(NSRange)arg4 pointRange:(NSRange)arg5 ;
-(id)startingTransitStop;
-(id)endingTransitStop;
-(NSRange)transitStepRange;
-(id)initWithCoder:(id)arg1 ;
@end

