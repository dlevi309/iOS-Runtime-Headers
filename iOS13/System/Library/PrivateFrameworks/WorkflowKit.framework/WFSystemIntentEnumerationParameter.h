/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, INIntentSlotDescription;

@interface WFSystemIntentEnumerationParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	INIntentSlotDescription* _slotDescription;

}

@property (nonatomic,readonly) INIntentSlotDescription * slotDescription;              //@synthesize slotDescription=_slotDescription - In the implementation block
-(id)initWithDefinition:(id)arg1 ;
-(id)possibleStates;
-(INIntentSlotDescription *)slotDescription;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(BOOL)alwaysShowsButton;
@end

