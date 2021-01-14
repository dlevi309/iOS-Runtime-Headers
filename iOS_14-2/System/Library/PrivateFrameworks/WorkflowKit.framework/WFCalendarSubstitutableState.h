/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@interface WFCalendarSubstitutableState : WFVariableSubstitutableParameterState
+(Class)processingValueClass;
+(id)serializedRepresentationFromValue:(id)arg1 ;
+(id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)initWithRemindersList:(id)arg1 ;
-(id)initWithCalendar:(id)arg1 ;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
@end

