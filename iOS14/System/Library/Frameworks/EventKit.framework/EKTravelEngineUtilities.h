/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@interface EKTravelEngineUtilities : NSObject
+(id)geoTrafficDensityAsString:(unsigned long long)arg1 ;
+(id)cadRouteHypothesisForEKTravelEngineHypothesis:(id)arg1 ;
+(int)geoTransportTypeForString:(id)arg1 ;
+(id)geoTransportTypeAsString:(int)arg1 ;
+(double)minimumAllowableTravelTime;
+(BOOL)date:(id)arg1 representsLatenessForHypothesis:(id)arg2 ;
+(double)maximumAllowableTravelTime;
+(BOOL)date:(id)arg1 representsApproachingDepartureDateForHypothesis:(id)arg2 ;
+(id)authorizationStatusAsString:(int)arg1 ;
+(long long)geoRouteHypothesisTravelStateForString:(id)arg1 ;
+(int)geoTransportTypeForCalLocationRoutingMode:(long long)arg1 ;
+(BOOL)date:(id)arg1 representsImmediateDepartureForHypothesis:(id)arg2 ;
+(unsigned long long)geoTrafficDensityForString:(id)arg1 ;
+(BOOL)travelStateIndicatesTravelingTowardDestination:(long long)arg1 ;
+(id)formattedLocationCoordinates:(id)arg1 ;
@end

