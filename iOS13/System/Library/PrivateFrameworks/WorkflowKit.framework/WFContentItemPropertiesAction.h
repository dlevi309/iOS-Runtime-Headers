/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFContentItemAction.h>

@interface WFContentItemPropertiesAction : WFContentItemAction
+(BOOL)outputIsExemptFromTaintTrackingInheritance;
-(id)name;
-(id)keywords;
-(id)properties;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)outputContentClasses;
-(id)outputMeasurementUnitType;
-(id)localizedDefaultOutputName;
-(BOOL)inputRequired;
-(id)parameterSummary;
-(id)inputParameterKey;
-(id)parameterDefinitions;
-(id)descriptionSummary;
-(id)allPossibleDescriptionResults;
-(id)descriptionResult;
-(id)selectedProperty;
-(void)finishWithItems:(id)arg1 property:(id)arg2 coercionPerformed:(BOOL)arg3 ;
@end

