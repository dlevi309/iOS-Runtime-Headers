/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setPolyline:(MKGeodesicPolyline *)arg1 ;
-(void)setLeg:(FUFlightLeg *)arg1 ;
@end

