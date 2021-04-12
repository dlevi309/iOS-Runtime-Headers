/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ComponentKit/CKStatefulViewComponent.h>

@protocol WFModuleParameterStateWriter, WFVariableProvider, WFVariableUIDelegate, WFComponentNavigationContext;
@class NSString, NSSet, NSDictionary, WFModuleAppearance, WFAction;

@interface WFModuleSummaryComponent : CKStatefulViewComponent {

	BOOL _processing;
	BOOL _extendSlotBackgroundOffEdges;
	BOOL _preparingToRun;
	NSString* _summaryFormatString;
	NSSet* _parameters;
	NSSet* _editableParameters;
	NSDictionary* _parameterStates;
	NSDictionary* _stagedParameterStates;
	WFModuleAppearance* _appearance;
	id<WFModuleParameterStateWriter> _stateWriter;
	id<WFVariableProvider> _variableProvider;
	id<WFVariableUIDelegate> _variableUIDelegate;
	id<WFComponentNavigationContext> _navigationContext;
	NSString* _firstResponderParameterKey;
	double _horizontalPadding;
	long long _textAlignment;
	WFAction* _actionForRunningMonitoring;

}

@property (nonatomic,copy,readonly) NSString * summaryFormatString;                                    //@synthesize summaryFormatString=_summaryFormatString - In the implementation block
@property (nonatomic,copy,readonly) NSSet * parameters;                                                //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,copy,readonly) NSSet * editableParameters;                                        //@synthesize editableParameters=_editableParameters - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * parameterStates;                                    //@synthesize parameterStates=_parameterStates - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * stagedParameterStates;                              //@synthesize stagedParameterStates=_stagedParameterStates - In the implementation block
@property (nonatomic,readonly) BOOL processing;                                                        //@synthesize processing=_processing - In the implementation block
@property (nonatomic,readonly) WFModuleAppearance * appearance;                                        //@synthesize appearance=_appearance - In the implementation block
@property (nonatomic,__weak,readonly) id<WFModuleParameterStateWriter> stateWriter;                    //@synthesize stateWriter=_stateWriter - In the implementation block
@property (nonatomic,__weak,readonly) id<WFVariableProvider> variableProvider;                         //@synthesize variableProvider=_variableProvider - In the implementation block
@property (nonatomic,__weak,readonly) id<WFVariableUIDelegate> variableUIDelegate;                     //@synthesize variableUIDelegate=_variableUIDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<WFComponentNavigationContext> navigationContext;              //@synthesize navigationContext=_navigationContext - In the implementation block
@property (nonatomic,readonly) NSString * firstResponderParameterKey;                                  //@synthesize firstResponderParameterKey=_firstResponderParameterKey - In the implementation block
@property (nonatomic,readonly) double horizontalPadding;                                               //@synthesize horizontalPadding=_horizontalPadding - In the implementation block
@property (nonatomic,readonly) long long textAlignment;                                                //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,readonly) BOOL extendSlotBackgroundOffEdges;                                      //@synthesize extendSlotBackgroundOffEdges=_extendSlotBackgroundOffEdges - In the implementation block
@property (nonatomic,__weak,readonly) WFAction * actionForRunningMonitoring;                           //@synthesize actionForRunningMonitoring=_actionForRunningMonitoring - In the implementation block
@property (nonatomic,readonly) BOOL preparingToRun;                                                    //@synthesize preparingToRun=_preparingToRun - In the implementation block
+(id)newWithSummaryFormatString:(id)arg1 parameters:(id)arg2 editableParameters:(id)arg3 parameterStates:(id)arg4 processing:(BOOL)arg5 appearance:(id)arg6 stateWriter:(id)arg7 variableProvider:(id)arg8 variableUIDelegate:(id)arg9 navigationContext:(id)arg10 firstResponderParameterKey:(id)arg11 horizontalPadding:(double)arg12 textAlignment:(long long)arg13 extendSlotBackgroundOffEdges:(BOOL)arg14 actionForRunningMonitoring:(id)arg15 preparingToRun:(BOOL)arg16 ;
-(NSSet *)parameters;
-(WFModuleAppearance *)appearance;
-(long long)textAlignment;
-(double)horizontalPadding;
-(id<WFVariableProvider>)variableProvider;
-(BOOL)extendSlotBackgroundOffEdges;
-(id<WFComponentNavigationContext>)navigationContext;
-(BOOL)processing;
-(id<WFModuleParameterStateWriter>)stateWriter;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(NSDictionary *)parameterStates;
-(NSString *)firstResponderParameterKey;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
-(void)reflowWithStagedParameterStates:(id)arg1 ;
-(NSString *)summaryFormatString;
-(NSSet *)editableParameters;
-(NSDictionary *)stagedParameterStates;
-(WFAction *)actionForRunningMonitoring;
-(BOOL)preparingToRun;
@end

