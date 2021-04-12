/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFHandleSystemIntentAction.h>

@interface WFStartWorkoutIntentAction : WFHandleSystemIntentAction
+(id)workoutActivityTypeToWorkoutIdentifier;
+(id)unitStringsToWorkoutGoalUnits;
-(id)location;
-(void)initializeParameters;
-(BOOL)skipsProcessingHiddenParameters;
-(void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)parameterForSlot:(id)arg1 ;
-(BOOL)requiresRemoteExecution;
-(BOOL)allowsContinueInAppWhenRunningRemotely;
-(void)wasAddedToWorkflow:(id)arg1 ;
-(void)wasRemovedFromWorkflow:(id)arg1 ;
-(id)selectedAppNotSupportedError;
-(void)resourceAvailabilityChanged;
-(id)workoutNameForActivityType:(id)arg1 ;
-(id)goalValueFromValue:(id)arg1 ;
-(BOOL)isKmGoal:(id)arg1 ;
-(id)kmGoalConvertedToM:(id)arg1 ;
-(id)goalUnitTypeFromValue:(id)arg1 ;
-(id)workoutGoalUnitTypeNumberForUnitString:(id)arg1 ;
-(id)identifierForActivityType:(unsigned long long)arg1 ;
-(unsigned long long)normalizedWorkoutActivityType:(unsigned long long)arg1 ;
-(id)goalParameter;
-(BOOL)isParameterHidden:(id)arg1 ;
@end

