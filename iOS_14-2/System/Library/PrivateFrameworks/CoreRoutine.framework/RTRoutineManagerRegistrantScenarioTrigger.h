/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)registered;
-(id)init;
-(unsigned long long)monitoredScenarioTriggerTypes;
-(id)startMonitoringForScenarioTriggerTypes:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)stopMonitoringForScenarioTriggerTypes:(unsigned long long)arg1 ;
-(void)onScenarioTriggers:(id)arg1 error:(id)arg2 ;
-(NSDictionary *)scenarioTriggerHandlers;
@end

