/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>

@class NSArray, WFAction, NSString;

@interface WFSlackChannelPickerParameter : WFEnumerationParameter <WFActionEventObserver> {

	NSArray* _possibleStates;
	WFAction* _action;

}

@property (nonatomic,readonly) NSString * accountParameterKey; 
@property (nonatomic,readonly) NSArray * possibleStates;                    //@synthesize possibleStates=_possibleStates - In the implementation block
@property (assign,nonatomic,__weak) WFAction * action;                      //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFAction *)action;
-(BOOL)isHidden;
-(id)account;
-(void)setAction:(WFAction *)arg1 ;
-(NSArray *)possibleStates;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(void)possibleStatesDidChange;
-(void)wasAddedToWorkflow;
-(id)defaultSerializedRepresentation;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(NSString *)accountParameterKey;
-(void)updateSlackChannels;
-(id)identifierForChannelWithName:(id)arg1 ;
@end

