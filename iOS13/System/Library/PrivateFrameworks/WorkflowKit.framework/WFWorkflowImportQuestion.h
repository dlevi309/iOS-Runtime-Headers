/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol WFParameterState;
@class WFAction, WFParameter, NSString;

@interface WFWorkflowImportQuestion : NSObject {

	WFAction* _action;
	WFParameter* _parameter;
	NSString* _question;
	id<WFParameterState> _defaultState;

}

@property (nonatomic,__weak,readonly) WFAction * action;                       //@synthesize action=_action - In the implementation block
@property (nonatomic,__weak,readonly) WFParameter * parameter;                 //@synthesize parameter=_parameter - In the implementation block
@property (nonatomic,copy,readonly) NSString * question;                       //@synthesize question=_question - In the implementation block
@property (nonatomic,readonly) id<WFParameterState> defaultState;              //@synthesize defaultState=_defaultState - In the implementation block
-(WFAction *)action;
-(WFParameter *)parameter;
-(NSString *)question;
-(id)serializedRepresentationWithWorkflowActions:(id)arg1 ;
-(id)initWithSerializedRepresentation:(id)arg1 workflowActions:(id)arg2 ;
-(id<WFParameterState>)defaultState;
-(id)initWithAction:(id)arg1 parameter:(id)arg2 question:(id)arg3 defaultState:(id)arg4 ;
@end

