/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

