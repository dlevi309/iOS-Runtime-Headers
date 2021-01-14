/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

@class NSArray;


@protocol WFVariableProvider <NSObject>
@property (nonatomic,readonly) NSArray * availableVariableNames; 
@property (nonatomic,readonly) NSArray * availableOutputActions; 
@property (nonatomic,readonly) NSArray * workflowInputClasses; 
@required
-(BOOL)hasAvailableVariables;
-(BOOL)isVariableWithNameAvailable:(id)arg1;
-(id)possibleContentClassesForVariableNamed:(id)arg1 context:(id)arg2;
-(BOOL)hasAvailableActionOutputVariables;
-(BOOL)isVariableWithOutputUUIDAvailable:(id)arg1;
-(id)actionProvidingVariableWithOutputUUID:(id)arg1;
-(id)actionsProvidingVariableName:(id)arg1;
-(void)addVariableObserver:(id)arg1;
-(void)removeVariableObserver:(id)arg1;
-(NSArray *)availableVariableNames;
-(NSArray *)availableOutputActions;
-(NSArray *)workflowInputClasses;

@end

