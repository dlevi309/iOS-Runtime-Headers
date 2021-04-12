/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>

@interface WFMeasurementCreateAction : WFAction
-(id)currentValue;
-(id)currentUnit;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)outputMeasurementUnitType;
-(id)parametersRequiringUserInputAlongsideParameter:(id)arg1 ;
-(id)unitParameter;
-(id)currentUnitTypeState;
@end

