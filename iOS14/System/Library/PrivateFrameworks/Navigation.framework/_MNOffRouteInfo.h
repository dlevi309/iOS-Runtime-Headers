/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)penalty;
-(id)description;
-(SCD_Struct_MN6)_coordinateFromWaypoint:(id)arg1 ;
-(id)initWithCurrentDate:(id)arg1 location:(id)arg2 destination:(id)arg3 ;
-(void)updateWithCurrentDate:(id)arg1 location:(id)arg2 isMostRecentReroute:(BOOL)arg3 throttledReroutesCount:(unsigned long long)arg4 ;
@end

