/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isHidden;
-(id)observer;
-(Class)accountClass;
-(NSArray *)possibleStates;
-(void)dealloc;
-(id)initWithDefinition:(id)arg1 ;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(void)possibleStatesDidChange;
-(void)wasAddedToWorkflow;
-(id)defaultSerializedRepresentation;
-(id)accountWithName:(id)arg1 ;
@end

