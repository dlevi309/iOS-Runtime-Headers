/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSArray;


@protocol GEOTransitVehicleEntries <NSObject>
@property (nonatomic,readonly) unsigned long long firstTripID; 
@property (nonatomic,readonly) unsigned long long tripIDForNextUpcomingDeparture; 
@property (nonatomic,copy,readonly) NSArray * tripIDs; 
@property (nonatomic,copy,readonly) NSArray * upcomingTripIDs; 
@required
-(NSArray *)tripIDs;
-(unsigned long long)firstTripID;
-(unsigned long long)tripIDForNextUpcomingDeparture;
-(NSArray *)upcomingTripIDs;

@end

