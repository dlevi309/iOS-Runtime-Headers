/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class NSString, GEOComposedWaypoint;

@interface MNTraceCommuteDestinationRow : NSObject {

	unsigned long long _destinationID;
	NSString* _name;
	GEOComposedWaypoint* _waypoint;

}

@property (assign,nonatomic) unsigned long long destinationID;              //@synthesize destinationID=_destinationID - In the implementation block
@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) GEOComposedWaypoint * waypoint;                //@synthesize waypoint=_waypoint - In the implementation block
-(unsigned long long)destinationID;
-(void)setDestinationID:(unsigned long long)arg1 ;
-(NSString *)name;
-(GEOComposedWaypoint *)waypoint;
-(void)setWaypoint:(GEOComposedWaypoint *)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

