/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFQuantityFieldParameter.h>

@interface WFDurationQuantityFieldParameter : WFQuantityFieldParameter

@property (assign,nonatomic) unsigned long long possibleCalendarUnits; 
+(unsigned long long)calendarUnitFromUnitString:(id)arg1 ;
+(BOOL)unitStringIsDurationUnit:(id)arg1 ;
-(id)initWithDefinition:(id)arg1 ;
-(void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)parameterStateIsValid:(id)arg1 ;
-(id)defaultSerializedRepresentation;
-(id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3 ;
-(unsigned long long)possibleCalendarUnits;
-(void)setPossibleCalendarUnits:(unsigned long long)arg1 ;
-(id)stateForDuration:(double)arg1 ;
@end

