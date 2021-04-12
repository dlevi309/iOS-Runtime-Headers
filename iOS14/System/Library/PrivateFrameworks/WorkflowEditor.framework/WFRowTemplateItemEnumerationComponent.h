/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKCompositeComponent.h>

@protocol NSCopying, WFVariableProvider, WFVariableUIDelegate, WFComponentNavigationContext;
@class NSArray, NSObject, WFVariable, NSDictionary, NSString, NSSet;

@interface WFRowTemplateItemEnumerationComponent : CKCompositeComponent {

	/*^block*/id _updateBlock;
	NSArray* _possibleValues;
	NSObject*<NSCopying> _selectedValue;
	WFVariable* _variable;
	NSDictionary* _labelMapping;
	NSString* _prompt;
	NSSet* _allowedVariableTypes;
	BOOL _variablesDisabled;
	id<WFVariableProvider> _variableProvider;
	id<WFVariableUIDelegate> _variableUIDelegate;
	id<WFComponentNavigationContext> _navigationContext;

}
+(id)newWithPossibleValues:(id)arg1 labels:(id)arg2 selectedValue:(id)arg3 prompt:(id)arg4 identifier:(id)arg5 updateBlock:(/*^block*/id)arg6 options:(WFRowTemplateItemEnumerationComponentOptions)arg7 size:(const CKComponentSize*)arg8 variableProvider:(id)arg9 variableUIDelegate:(id)arg10 navigationContext:(id)arg11 ;
-(void)buttonTapped:(id)arg1 ;
@end

