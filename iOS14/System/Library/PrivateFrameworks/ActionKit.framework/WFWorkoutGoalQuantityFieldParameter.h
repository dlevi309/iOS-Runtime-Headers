/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFQuantityFieldParameter.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>

@class NSArray, WFAction, NSString;

@interface WFWorkoutGoalQuantityFieldParameter : WFQuantityFieldParameter <WFActionEventObserver> {

	NSArray* _possibleUnits;
	id _defaultSerializedRepresentation;
	WFAction* _action;

}

@property (assign,nonatomic,__weak) WFAction * action;              //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)unitConversion;
-(WFAction *)action;
-(void)setAction:(WFAction *)arg1 ;
-(unsigned long long)currentWorkoutActivityType;
-(BOOL)parameterStateIsValid:(id)arg1 ;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;
-(id)defaultSerializedRepresentation;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(void)setPossibleUnits:(id)arg1 ;
-(id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3 ;
-(id)possibleUnits;
-(id)defaultState;
-(void)updatePossibleUnits;
-(void)availableUnitsForWorkoutActivityType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateCurrentStateWithNewUnitString:(id)arg1 currentState:(id)arg2 ;
@end

