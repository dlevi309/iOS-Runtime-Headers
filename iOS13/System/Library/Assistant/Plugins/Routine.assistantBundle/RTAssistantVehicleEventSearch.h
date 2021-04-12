/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Assistant/Plugins/Routine.assistantBundle/Routine
*/

#import <SAObjects/SALocalSearchVehicleEventSearch.h>

@protocol OS_dispatch_queue;
@class NSObject, RTRoutineManager, GEOLocationShifter;

@interface RTAssistantVehicleEventSearch : SALocalSearchVehicleEventSearch {

	NSObject*<OS_dispatch_queue> _queue;
	RTRoutineManager* _routineManager;
	GEOLocationShifter* _locationShifter;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) RTRoutineManager * routineManager;                 //@synthesize routineManager=_routineManager - In the implementation block
@property (nonatomic,retain) GEOLocationShifter * locationShifter;              //@synthesize locationShifter=_locationShifter - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(GEOLocationShifter *)locationShifter;
-(void)setLocationShifter:(GEOLocationShifter *)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(RTRoutineManager *)routineManager;
-(void)setRoutineManager:(RTRoutineManager *)arg1 ;
@end

