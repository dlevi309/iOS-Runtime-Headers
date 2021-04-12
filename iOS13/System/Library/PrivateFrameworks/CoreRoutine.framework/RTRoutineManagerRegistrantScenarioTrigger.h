/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <CoreRoutine/RTRoutineManagerRegistrant.h>

@class NSMutableDictionary, NSDictionary;

@interface RTRoutineManagerRegistrantScenarioTrigger : RTRoutineManagerRegistrant {

	NSMutableDictionary* __scenarioTriggerHandlers;
	BOOL _registered;
	unsigned long long _monitoredScenarioTriggerTypes;

}

@property (nonatomic,readonly) unsigned long long monitoredScenarioTriggerTypes;              //@synthesize monitoredScenarioTriggerTypes=_monitoredScenarioTriggerTypes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * scenarioTriggerHandlers;                   //@synthesize _scenarioTriggerHandlers=__scenarioTriggerHandlers - In the implementation block
@property (nonatomic,readonly) BOOL registered;                                               //@synthesize registered=_registered - In the implementation block
-(id)init;
-(BOOL)registered;
-(NSDictionary *)scenarioTriggerHandlers;
-(id)startMonitoringForScenarioTriggerTypes:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)stopMonitoringForScenarioTriggerTypes:(unsigned long long)arg1 ;
-(void)onScenarioTriggers:(id)arg1 error:(id)arg2 ;
-(unsigned long long)monitoredScenarioTriggerTypes;
@end

