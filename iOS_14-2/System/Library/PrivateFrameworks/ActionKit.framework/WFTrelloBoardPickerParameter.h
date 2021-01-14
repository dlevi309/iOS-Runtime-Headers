/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray;

@interface WFTrelloBoardPickerParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	id _observer;

}

@property (nonatomic,retain) id observer;                             //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) NSArray * possibleStates;              //@synthesize possibleStates=_possibleStates - In the implementation block
-(void)setObserver:(id)arg1 ;
-(id)observer;
-(NSArray *)possibleStates;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(void)possibleStatesDidChange;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;
-(id)defaultSerializedRepresentation;
-(void)updateBoards;
@end

