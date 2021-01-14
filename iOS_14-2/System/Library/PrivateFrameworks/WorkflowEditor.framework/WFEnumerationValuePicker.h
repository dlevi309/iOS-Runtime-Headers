/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <libobjc.A.dylib/WFParameterEventObserver.h>
#import <libobjc.A.dylib/WFParameterValuePickerViewControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class WFVariableSubstitutableParameterState, WFEnumerationParameter, NSArray, WFParameterValuePickerViewController, WFTextTokenChooser, NSString;

@interface WFEnumerationValuePicker : NSObject <WFParameterEventObserver, WFParameterValuePickerViewControllerDelegate, UIPopoverPresentationControllerDelegate> {

	WFVariableSubstitutableParameterState* _currentState;
	/*^block*/id _cancelHandler;
	WFEnumerationParameter* _parameter;
	NSArray* _parameterStates;
	/*^block*/id _completionHandler;
	WFParameterValuePickerViewController* _parameterValuePickerViewController;
	WFTextTokenChooser* _textTokenChooser;
	long long _editingSlotArrayIndex;

}

@property (nonatomic,retain) WFEnumerationParameter * parameter;                                                     //@synthesize parameter=_parameter - In the implementation block
@property (nonatomic,copy) NSArray * parameterStates;                                                                //@synthesize parameterStates=_parameterStates - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) WFParameterValuePickerViewController * parameterValuePickerViewController;              //@synthesize parameterValuePickerViewController=_parameterValuePickerViewController - In the implementation block
@property (nonatomic,retain) WFTextTokenChooser * textTokenChooser;                                                  //@synthesize textTokenChooser=_textTokenChooser - In the implementation block
@property (assign,nonatomic) long long editingSlotArrayIndex;                                                        //@synthesize editingSlotArrayIndex=_editingSlotArrayIndex - In the implementation block
@property (nonatomic,retain) WFVariableSubstitutableParameterState * currentState;                                   //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,copy) id cancelHandler;                                                                         //@synthesize cancelHandler=_cancelHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)presentWithParameter:(id)arg1 state:(id)arg2 editingSlotArrayIndex:(long long)arg3 initialCollection:(id)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 processing:(BOOL)arg7 sourceView:(id)arg8 sourceRect:(CGRect)arg9 viewController:(id)arg10 completionHandler:(/*^block*/id)arg11 ;
-(void)setCurrentState:(WFVariableSubstitutableParameterState *)arg1 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)setCompletionHandler:(id)arg1 ;
-(WFVariableSubstitutableParameterState *)currentState;
-(id)cancelHandler;
-(id)completionHandler;
-(WFEnumerationParameter *)parameter;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)setCancelHandler:(id)arg1 ;
-(void)updateCurrentState;
-(void)cancelOperation;
-(void)dealloc;
-(void)setParameter:(WFEnumerationParameter *)arg1 ;
-(void)parameterAttributesDidChange:(id)arg1 ;
-(void)updatePossibleStates;
-(void)dismissWithCompletionHandler:(/*^block*/id)arg1 ;
-(WFTextTokenChooser *)textTokenChooser;
-(void)setTextTokenChooser:(WFTextTokenChooser *)arg1 ;
-(NSArray *)parameterStates;
-(void)parameterValuePickerViewController:(id)arg1 didFinishWithObject:(id)arg2 ;
-(void)parameterValuePickerViewControllerDidCancel:(id)arg1 ;
-(void)parameterValuePickerViewControllerDidRequestRemovingItem:(id)arg1 ;
-(id)initWithParameter:(id)arg1 currentState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateAdditionalButtons;
-(void)setParameterStates:(NSArray *)arg1 ;
-(WFParameterValuePickerViewController *)parameterValuePickerViewController;
-(void)setParameterValuePickerViewController:(WFParameterValuePickerViewController *)arg1 ;
-(long long)editingSlotArrayIndex;
-(void)setEditingSlotArrayIndex:(long long)arg1 ;
@end

