/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)lastUpdate;
-(void)setDestination:(MNPlannedDestination *)arg1 ;
-(void)setLastUpdate:(NSDate *)arg1 ;
-(NSString *)description;
-(id)jsonDictionary;
-(MNPlannedDestination *)destination;
-(MNRouteUpdate *)routeUpdate;
-(void)setRouteUpdate:(MNRouteUpdate *)arg1 ;
-(NSDate *)nextUpdate;
-(void)setNextUpdate:(NSDate *)arg1 ;
@end

