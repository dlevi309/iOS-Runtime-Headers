/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@protocol WFParameterState;
@class WFParameter, NSError, WFGradient, NSString;

@interface WFParameterEditorModel : NSObject {

	WFParameter* _parameter;
	id<WFParameterState> _state;
	NSError* _resourceError;
	WFGradient* _buttonGradient;
	NSString* _widgetSizeClass;

}

@property (nonatomic,readonly) WFParameter * parameter;                  //@synthesize parameter=_parameter - In the implementation block
@property (nonatomic,readonly) id<WFParameterState> state;               //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSError * resourceError;                  //@synthesize resourceError=_resourceError - In the implementation block
@property (nonatomic,readonly) WFGradient * buttonGradient;              //@synthesize buttonGradient=_buttonGradient - In the implementation block
@property (nonatomic,readonly) NSString * widgetSizeClass;               //@synthesize widgetSizeClass=_widgetSizeClass - In the implementation block
-(WFParameter *)parameter;
-(id<WFParameterState>)state;
-(NSString *)widgetSizeClass;
-(id)initWithParameter:(id)arg1 state:(id)arg2 ;
-(id)initWithParameter:(id)arg1 state:(id)arg2 widgetSizeClass:(id)arg3 ;
-(id)initWithResourceError:(id)arg1 buttonGradient:(id)arg2 ;
-(NSError *)resourceError;
-(WFGradient *)buttonGradient;
@end

