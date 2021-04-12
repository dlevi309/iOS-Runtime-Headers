/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray;

@interface WFAccountPickerParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	Class _accountClass;
	id _observer;

}

@property (nonatomic,readonly) NSArray * possibleStates;              //@synthesize possibleStates=_possibleStates - In the implementation block
@property (nonatomic,readonly) id observer;                           //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) Class accountClass;                    //@synthesize accountClass=_accountClass - In the implementation block
-(void)dealloc;
-(id)observer;
-(BOOL)isHidden;
-(id)initWithDefinition:(id)arg1 ;
-(NSArray *)possibleStates;
-(Class)accountClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(void)possibleStatesDidChange;
-(void)wasAddedToWorkflow;
-(id)defaultSerializedRepresentation;
-(id)accountWithName:(id)arg1 ;
@end

