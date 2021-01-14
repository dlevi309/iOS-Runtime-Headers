/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
*/


@class MKGeodesicPolyline, FUFlightLeg;

@interface FUFLightTrack : NSObject {

	MKGeodesicPolyline* _polyline;
	FUFlightLeg* _leg;

}

@property (retain) MKGeodesicPolyline * polyline;              //@synthesize polyline=_polyline - In the implementation block
@property (retain) FUFlightLeg * leg;                          //@synthesize leg=_leg - In the implementation block
-(FUFlightLeg *)leg;
-(MKGeodesicPolyline *)polyline;
-(void)setLeg:(FUFlightLeg *)arg1 ;
-(void)setPolyline:(MKGeodesicPolyline *)arg1 ;
@end

