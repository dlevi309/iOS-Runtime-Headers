/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>

@interface WFAddNewEventAction : WFAction
+(double)relativeOffsetFromTimeString:(id)arg1 ;
-(void)runWithInput:(id)arg1 error:(id*)arg2 ;
-(void)initializeParameters;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(void)wasAddedToWorkflow:(id)arg1 ;
-(void)wasRemovedFromWorkflow:(id)arg1 ;
-(id)targetDataInfo;
-(void)updateCalendars;
-(id)endDateByCorrectingDate:(id)arg1 withStartDate:(id)arg2 ;
-(id)currentSelectedCalendar;
-(void)updateForcesAllDayFlags;
@end

