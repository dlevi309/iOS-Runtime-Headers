/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class NSMutableArray, MNGuidanceEventManager, NSArray;

@interface MNAnnouncementPlan : NSObject {

	NSMutableArray* _plannedEvents;
	MNGuidanceEventManager* _manager;
	NSArray* _events;
	double _distance;
	double _speed;

}

@property (assign,nonatomic,__weak) MNGuidanceEventManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSArray * events;                                     //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NSMutableArray * plannedEvents;                       //@synthesize plannedEvents=_plannedEvents - In the implementation block
@property (assign,nonatomic) double distance;                                      //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) double speed;                                         //@synthesize speed=_speed - In the implementation block
+(double)desiredTimeGapBetweenEvent:(id)arg1 andEvent:(id)arg2 ;
-(id)description;
-(MNGuidanceEventManager *)manager;
-(NSArray *)events;
-(void)setEvents:(NSArray *)arg1 ;
-(double)speed;
-(void)setSpeed:(double)arg1 ;
-(void)setManager:(MNGuidanceEventManager *)arg1 ;
-(void)setDistance:(double)arg1 ;
-(double)distance;
-(void)sortEvents;
-(NSMutableArray *)plannedEvents;
-(id)initWithEvents:(id)arg1 distance:(double)arg2 speed:(double)arg3 manager:(id)arg4 ;
-(id)nextConflict;
-(void)setPlannedEvents:(NSMutableArray *)arg1 ;
@end

