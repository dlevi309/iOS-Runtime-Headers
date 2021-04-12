/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@interface EKTravelEngineUtilities : NSObject
+(id)geoTrafficDensityAsString:(unsigned long long)arg1 ;
+(BOOL)date:(id)arg1 representsApproachingDepartureDateForHypothesis:(id)arg2 ;
+(BOOL)date:(id)arg1 representsLatenessForHypothesis:(id)arg2 ;
+(BOOL)travelStateIndicatesTravelingTowardDestination:(long long)arg1 ;
+(id)formattedLocationCoordinates:(id)arg1 ;
+(long long)geoRouteHypothesisTravelStateForString:(id)arg1 ;
+(id)geoTransportTypeAsString:(int)arg1 ;
+(int)geoTransportTypeForString:(id)arg1 ;
+(unsigned long long)geoTrafficDensityForString:(id)arg1 ;
+(id)authorizationStatusAsString:(int)arg1 ;
+(int)geoTransportTypeForCalLocationRoutingMode:(long long)arg1 ;
+(BOOL)date:(id)arg1 representsImmediateDepartureForHypothesis:(id)arg2 ;
+(double)maximumAllowableTravelTime;
+(double)minimumAllowableTravelTime;
+(id)cadRouteHypothesisForEKTravelEngineHypothesis:(id)arg1 ;
@end

