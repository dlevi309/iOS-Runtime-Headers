/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>

@class WFActionParameterSummary, NSDateFormatter;

@interface WFAddNewReminderAction : WFAction {

	WFActionParameterSummary* _parameterSummary;
	NSDateFormatter* _dateFormatter;

}

@property (nonatomic,readonly) NSDateFormatter * dateFormatter;              //@synthesize dateFormatter=_dateFormatter - In the implementation block
-(NSDateFormatter *)dateFormatter;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(void)wasAddedToWorkflow:(id)arg1 ;
-(void)wasRemovedFromWorkflow:(id)arg1 ;
-(void)getTargetContentAttributionWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)parameterSummary;
-(void)updateLists;
-(void)addAlertToReminderChange:(id)arg1 forAccount:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addImagesToReminderChange:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)finishAddingReminderWithSaveRequest:(id)arg1 reminderChange:(id)arg2 reminderStore:(id)arg3 ;
-(void)getSelectedListOrParentReminder:(/*^block*/id)arg1 ;
-(id)selectedList;
-(id)selectedListIfDeterministic;
-(void)updateHiddenParameters;
-(id)parameterKeysToHideWhenAttachmentsAreUnavailable;
@end

