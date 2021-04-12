/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFTextTokenChooser.h>
#import <libobjc.A.dylib/WFParameterEventObserver.h>

@class WFVariableSubstitutableParameterState, WFEnumerationParameter, NSArray, NSString;

@interface WFEnumerationTextTokenChooser : WFTextTokenChooser <WFParameterEventObserver> {

	WFVariableSubstitutableParameterState* _currentState;
	WFEnumerationParameter* _parameter;
	NSArray* _parameterStates;
	/*^block*/id _selectionHandler;

}

@property (nonatomic,retain) WFEnumerationParameter * parameter;                                //@synthesize parameter=_parameter - In the implementation block
@property (nonatomic,copy) NSArray * parameterStates;                                           //@synthesize parameterStates=_parameterStates - In the implementation block
@property (nonatomic,copy) id selectionHandler;                                                 //@synthesize selectionHandler=_selectionHandler - In the implementation block
@property (nonatomic,retain) WFVariableSubstitutableParameterState * currentState;              //@synthesize currentState=_currentState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)presentWithParameter:(id)arg1 state:(id)arg2 variableProvider:(id)arg3 variableUIDelegate:(id)arg4 processing:(BOOL)arg5 sourceView:(id)arg6 sourceRect:(CGRect)arg7 viewController:(id)arg8 selectionHandler:(/*^block*/id)arg9 ;
-(void)dealloc;
-(WFVariableSubstitutableParameterState *)currentState;
-(void)setCurrentState:(WFVariableSubstitutableParameterState *)arg1 ;
-(WFEnumerationParameter *)parameter;
-(void)setSelectionHandler:(id)arg1 ;
-(id)selectionHandler;
-(void)setParameter:(WFEnumerationParameter *)arg1 ;
-(void)parameterAttributesDidChange:(id)arg1 ;
-(void)updatePossibleStates;
-(void)updateCurrentState;
-(NSArray *)parameterStates;
-(void)updateAdditionalButtons;
-(void)setParameterStates:(NSArray *)arg1 ;
@end

