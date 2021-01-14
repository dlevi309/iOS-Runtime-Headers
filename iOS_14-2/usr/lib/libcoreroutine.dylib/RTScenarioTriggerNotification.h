/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class RTScenarioTrigger;

@interface RTScenarioTriggerNotification : RTNotification {

	RTScenarioTrigger* _scenarioTrigger;

}

@property (nonatomic,readonly) RTScenarioTrigger * scenarioTrigger;              //@synthesize scenarioTrigger=_scenarioTrigger - In the implementation block
-(RTScenarioTrigger *)scenarioTrigger;
-(id)initWithScenarioTrigger:(id)arg1 ;
@end

