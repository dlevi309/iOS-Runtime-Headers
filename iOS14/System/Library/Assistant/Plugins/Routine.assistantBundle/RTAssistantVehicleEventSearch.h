/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(GEOLocationShifter *)locationShifter;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(RTRoutineManager *)routineManager;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setRoutineManager:(RTRoutineManager *)arg1 ;
-(void)setLocationShifter:(GEOLocationShifter *)arg1 ;
@end

