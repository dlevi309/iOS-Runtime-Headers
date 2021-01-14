/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, INIntentSlotDescription;

@interface WFSystemIntentEnumerationParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	INIntentSlotDescription* _slotDescription;

}

@property (nonatomic,readonly) INIntentSlotDescription * slotDescription;              //@synthesize slotDescription=_slotDescription - In the implementation block
-(INIntentSlotDescription *)slotDescription;
-(id)possibleStates;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(BOOL)alwaysShowsButton;
@end

