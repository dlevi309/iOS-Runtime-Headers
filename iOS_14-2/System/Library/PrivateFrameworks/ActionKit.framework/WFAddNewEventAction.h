/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>

@interface WFAddNewEventAction : WFAction
+(id)userInterfaceProtocol;
+(id)userInterfaceXPCInterface;
+(id)calendarFromDescriptor:(id)arg1 ;
+(id)eventFromParameters:(id)arg1 requiringFullySpecifiedEvent:(BOOL)arg2 error:(id*)arg3 ;
+(double)relativeOffsetFromTimeString:(id)arg1 ;
+(id)endDateByCorrectingDate:(id)arg1 withStartDate:(id)arg2 ;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(void)wasAddedToWorkflow:(id)arg1 ;
-(void)wasRemovedFromWorkflow:(id)arg1 ;
-(id)targetContentAttribution;
-(void)updateCalendars;
-(void)runWithoutUI;
-(id)currentSelectedCalendar;
-(void)updateForcesAllDayFlags;
@end

