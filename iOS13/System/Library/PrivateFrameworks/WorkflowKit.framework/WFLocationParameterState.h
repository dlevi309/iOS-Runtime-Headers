/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@interface WFLocationParameterState : WFVariableSubstitutableParameterState
+(Class)processingValueClass;
+(id)serializedRepresentationFromValue:(id)arg1 ;
+(id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)initWithValue:(id)arg1 ;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(void)getContentCollectionWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getContentItemFromValue:(id)arg1 withContext:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

