/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/Routine.assistantBundle/Routine
*/

#import <SAObjects/SALocalSearchVehicleEventDelete.h>

@class RTRoutineManager;

@interface RTAssistantVehicleEventDelete : SALocalSearchVehicleEventDelete {

	RTRoutineManager* _routineManager;

}

@property (nonatomic,retain) RTRoutineManager * routineManager;              //@synthesize routineManager=_routineManager - In the implementation block
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(RTRoutineManager *)routineManager;
-(void)setRoutineManager:(RTRoutineManager *)arg1 ;
@end

