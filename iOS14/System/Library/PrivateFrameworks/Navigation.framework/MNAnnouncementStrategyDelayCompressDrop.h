/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNAnnoucementStrategy.h>

@class MNGuidanceEventManager, NSArray, MNAnnouncementPlan;

@interface MNAnnouncementStrategyDelayCompressDrop : NSObject <MNAnnoucementStrategy> {

	MNGuidanceEventManager* _manager;
	NSArray* _events;
	double _distance;
	double _speed;
	MNAnnouncementPlan* _plan;

}

@property (assign,nonatomic,__weak) MNGuidanceEventManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSArray * events;                                     //@synthesize events=_events - In the implementation block
@property (assign,nonatomic) double distance;                                      //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) double speed;                                         //@synthesize speed=_speed - In the implementation block
@property (nonatomic,retain) MNAnnouncementPlan * plan;                            //@synthesize plan=_plan - In the implementation block
-(MNAnnouncementPlan *)plan;
-(id)initWithManager:(id)arg1 ;
-(void)setSpeed:(double)arg1 ;
-(void)setDistance:(double)arg1 ;
-(double)speed;
-(double)distance;
-(void)setEvents:(NSArray *)arg1 ;
-(void)setManager:(MNGuidanceEventManager *)arg1 ;
-(void)setPlan:(MNAnnouncementPlan *)arg1 ;
-(MNGuidanceEventManager *)manager;
-(NSArray *)events;
-(id)nextEvent;
-(double)_canDelayEvent:(id)arg1 ;
-(BOOL)_advanceToResolveConflict:(id)arg1 ;
-(BOOL)_delayToResolveConflict:(id)arg1 ;
-(BOOL)_compressToResolveConflict:(id)arg1 ;
-(void)_dropToResolveConflict:(id)arg1 ;
-(double)_canAdvanceEvent:(id)arg1 ;
-(void)planForEvents:(id)arg1 distance:(double)arg2 speed:(double)arg3 previousEvent:(id)arg4 timeSinceLastEvent:(double)arg5 ;
@end

