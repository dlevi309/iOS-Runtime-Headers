/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


#import <Navigation/Navigation-Structs.h>
@class NSDate, GEOComposedWaypoint;

@interface _MNOffRouteInfo : NSObject {

	NSDate* _date;
	NSDate* _lastUpddate;
	GEOComposedWaypoint* _destination;
	double _originalDistanceFromDestination;
	double _distancePenalty;
	double _throttledReroutesPenalty;
	double _penalty;

}

@property (nonatomic,readonly) double penalty;              //@synthesize penalty=_penalty - In the implementation block
-(id)description;
-(double)penalty;
-(SCD_Struct_MN8)_coordinateFromWaypoint:(id)arg1 ;
-(id)initWithCurrentDate:(id)arg1 location:(id)arg2 destination:(id)arg3 ;
-(void)updateWithCurrentDate:(id)arg1 location:(id)arg2 isMostRecentReroute:(BOOL)arg3 throttledReroutesCount:(unsigned long long)arg4 ;
@end

