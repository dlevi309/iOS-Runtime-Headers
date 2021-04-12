/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>

@class NSDateFormatter;

@interface WFAddNewReminderAction : WFAction {

	NSDateFormatter* _dateFormatter;

}

@property (nonatomic,readonly) NSDateFormatter * dateFormatter;              //@synthesize dateFormatter=_dateFormatter - In the implementation block
-(NSDateFormatter *)dateFormatter;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)wasAddedToWorkflow:(id)arg1 ;
-(void)wasRemovedFromWorkflow:(id)arg1 ;
-(id)targetDataInfo;
-(id)currentSelectedCalendar;
-(void)updateLists;
@end

