/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/


@protocol CPNavigationSessionManaging;
@class NSArray, CPTrip, CPMapTemplate;

@interface CPNavigationSession : NSObject {

	NSArray* _upcomingManeuvers;
	CPTrip* _trip;
	id<CPNavigationSessionManaging> _manager;
	CPMapTemplate* _mapTemplate;

}

@property (nonatomic,retain) CPTrip * trip;                                        //@synthesize trip=_trip - In the implementation block
@property (nonatomic,retain) id<CPNavigationSessionManaging> manager;              //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic,__weak) CPMapTemplate * mapTemplate;                   //@synthesize mapTemplate=_mapTemplate - In the implementation block
@property (nonatomic,copy) NSArray * upcomingManeuvers;                            //@synthesize upcomingManeuvers=_upcomingManeuvers - In the implementation block
-(CPTrip *)trip;
-(void)setManager:(id<CPNavigationSessionManaging>)arg1 ;
-(id<CPNavigationSessionManaging>)manager;
-(void)pauseTripForReason:(unsigned long long)arg1 description:(id)arg2 ;
-(void)finishTrip;
-(void)cancelTrip;
-(CPMapTemplate *)mapTemplate;
-(void)updateTravelEstimates:(id)arg1 forManeuver:(id)arg2 ;
-(id)initWithTrip:(id)arg1 manager:(id)arg2 mapTemplate:(id)arg3 ;
-(id)_currentTripId;
-(void)setUpcomingManeuvers:(NSArray *)arg1 ;
-(NSArray *)upcomingManeuvers;
-(void)setTrip:(CPTrip *)arg1 ;
-(void)setMapTemplate:(CPMapTemplate *)arg1 ;
@end

