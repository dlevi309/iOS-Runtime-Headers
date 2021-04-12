/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/


@class WFConfiguredTrigger, WFWorkflowReference, WFDebouncer, NSSet;

@interface VCTriggerNotificationDebouncerItem : NSObject {

	WFConfiguredTrigger* _configuredTrigger;
	WFWorkflowReference* _reference;
	WFDebouncer* _debouncer;
	NSSet* _triggerEventIDs;

}

@property (nonatomic,readonly) WFConfiguredTrigger * configuredTrigger;              //@synthesize configuredTrigger=_configuredTrigger - In the implementation block
@property (nonatomic,readonly) WFWorkflowReference * reference;                      //@synthesize reference=_reference - In the implementation block
@property (nonatomic,readonly) WFDebouncer * debouncer;                              //@synthesize debouncer=_debouncer - In the implementation block
@property (nonatomic,retain) NSSet * triggerEventIDs;                                //@synthesize triggerEventIDs=_triggerEventIDs - In the implementation block
-(WFWorkflowReference *)reference;
-(WFDebouncer *)debouncer;
-(id)description;
-(id)initWithConfiguredTrigger:(id)arg1 reference:(id)arg2 triggerEventIDs:(id)arg3 debouncer:(id)arg4 ;
-(WFConfiguredTrigger *)configuredTrigger;
-(NSSet *)triggerEventIDs;
-(void)setTriggerEventIDs:(NSSet *)arg1 ;
@end

