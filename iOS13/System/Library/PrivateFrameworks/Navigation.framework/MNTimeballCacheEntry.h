/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNJSONOutput.h>

@class MNRouteUpdate, MNPlannedDestination, NSDate, NSString;

@interface MNTimeballCacheEntry : NSObject <MNJSONOutput> {

	MNRouteUpdate* _routeUpdate;
	MNPlannedDestination* _destination;
	NSDate* _lastUpdate;
	NSDate* _nextUpdate;

}

@property (nonatomic,retain) MNRouteUpdate * routeUpdate;                     //@synthesize routeUpdate=_routeUpdate - In the implementation block
@property (nonatomic,retain) MNPlannedDestination * destination;              //@synthesize destination=_destination - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdate;                             //@synthesize lastUpdate=_lastUpdate - In the implementation block
@property (nonatomic,retain) NSDate * nextUpdate;                             //@synthesize nextUpdate=_nextUpdate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(MNPlannedDestination *)destination;
-(void)setDestination:(MNPlannedDestination *)arg1 ;
-(NSDate *)lastUpdate;
-(id)jsonDictionary;
-(MNRouteUpdate *)routeUpdate;
-(void)setRouteUpdate:(MNRouteUpdate *)arg1 ;
-(void)setLastUpdate:(NSDate *)arg1 ;
-(NSDate *)nextUpdate;
-(void)setNextUpdate:(NSDate *)arg1 ;
@end

