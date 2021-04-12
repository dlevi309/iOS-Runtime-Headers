/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@protocol WFParameterState;
@class WFParameter, NSError, WFGradient;

@interface WFParameterEditorModel : NSObject {

	WFParameter* _parameter;
	id<WFParameterState> _state;
	NSError* _resourceError;
	WFGradient* _buttonGradient;

}

@property (nonatomic,readonly) WFParameter * parameter;                  //@synthesize parameter=_parameter - In the implementation block
@property (nonatomic,readonly) id<WFParameterState> state;               //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSError * resourceError;                  //@synthesize resourceError=_resourceError - In the implementation block
@property (nonatomic,readonly) WFGradient * buttonGradient;              //@synthesize buttonGradient=_buttonGradient - In the implementation block
-(id<WFParameterState>)state;
-(WFParameter *)parameter;
-(NSError *)resourceError;
-(id)initWithParameter:(id)arg1 state:(id)arg2 ;
-(id)initWithResourceError:(id)arg1 buttonGradient:(id)arg2 ;
-(WFGradient *)buttonGradient;
@end

