/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <libobjc.A.dylib/RTFrameworkProtocol.h>

@class RTRoutineManager, NSString;

@interface RTRoutineManagerExportedObject : NSObject <RTFrameworkProtocol> {

	RTRoutineManager* _routineManager;

}

@property (assign,nonatomic,__weak) RTRoutineManager * routineManager;              //@synthesize routineManager=_routineManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onScenarioTrigger:(id)arg1 withError:(id)arg2 ;
-(void)onLeechedVisit:(id)arg1 withError:(id)arg2 ;
-(void)onVehicleEvents:(id)arg1 error:(id)arg2 ;
-(id)initWithRoutineManager:(id)arg1 ;
-(void)onLeechedLowConfidenceVisit:(id)arg1 withError:(id)arg2 ;
-(RTRoutineManager *)routineManager;
-(void)onVisit:(id)arg1 withError:(id)arg2 ;
-(void)setRoutineManager:(RTRoutineManager *)arg1 ;
@end

