/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>

@class NSArray, WFAction, NSString;

@interface WFTrelloListPickerParameter : WFEnumerationParameter <WFActionEventObserver> {

	NSArray* _possibleStates;
	WFAction* _action;
	id _observer;

}

@property (nonatomic,retain) id observer;                             //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) NSArray * possibleStates;              //@synthesize possibleStates=_possibleStates - In the implementation block
@property (assign,nonatomic,__weak) WFAction * action;                //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)observer;
-(void)setObserver:(id)arg1 ;
-(WFAction *)action;
-(void)setAction:(WFAction *)arg1 ;
-(NSArray *)possibleStates;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(void)possibleStatesDidChange;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;
-(id)defaultSerializedRepresentation;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(void)updateLists;
@end

