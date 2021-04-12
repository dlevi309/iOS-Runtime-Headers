/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ComponentKit/CKStatefulViewComponent.h>

@protocol WFVariableProvider, WFVariableUIDelegate, WFComponentNavigationContext;
@class NSArray, NSSet;

@interface WFArrayEditorComponent : CKStatefulViewComponent {

	BOOL _standaloneVariablesAsContentItems;
	BOOL _variablesDisabled;
	BOOL _editable;
	NSArray* _items;
	id<WFVariableProvider> _variableProvider;
	id<WFVariableUIDelegate> _variableUIDelegate;
	id<WFComponentNavigationContext> _navigationContext;
	NSSet* _allowedValueTypes;
	NSSet* _allowedVariableTypes;
	/*^block*/id _updateBlock;
	CKTypedComponentAction<WFListEditorDeletionConfirmation *> _confirmationAction;

}

@property (nonatomic,readonly) NSArray * items;                                                                            //@synthesize items=_items - In the implementation block
@property (nonatomic,__weak,readonly) id<WFVariableProvider> variableProvider;                                             //@synthesize variableProvider=_variableProvider - In the implementation block
@property (nonatomic,__weak,readonly) id<WFVariableUIDelegate> variableUIDelegate;                                         //@synthesize variableUIDelegate=_variableUIDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<WFComponentNavigationContext> navigationContext;                                  //@synthesize navigationContext=_navigationContext - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allowedValueTypes;                                                             //@synthesize allowedValueTypes=_allowedValueTypes - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allowedVariableTypes;                                                          //@synthesize allowedVariableTypes=_allowedVariableTypes - In the implementation block
@property (nonatomic,readonly) BOOL standaloneVariablesAsContentItems;                                                     //@synthesize standaloneVariablesAsContentItems=_standaloneVariablesAsContentItems - In the implementation block
@property (nonatomic,readonly) BOOL variablesDisabled;                                                                     //@synthesize variablesDisabled=_variablesDisabled - In the implementation block
@property (nonatomic,readonly) BOOL editable;                                                                              //@synthesize editable=_editable - In the implementation block
@property (nonatomic,readonly) id updateBlock;                                                                             //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<WFListEditorDeletionConfirmation *> confirmationAction;              //@synthesize confirmationAction=_confirmationAction - In the implementation block
+(id)newWithItems:(id)arg1 editable:(BOOL)arg2 variableProvider:(id)arg3 variableUIDelegate:(id)arg4 navigationContext:(id)arg5 variablesDisabled:(BOOL)arg6 allowedValueTypes:(id)arg7 allowedVariableTypes:(id)arg8 standaloneVariablesAsContentItems:(BOOL)arg9 updateBlock:(/*^block*/id)arg10 confirmationAction:(CKTypedComponentAction<WFListEditorDeletionConfirmation *>)arg11 size:(const CKComponentSize*)arg12 ;
-(NSArray *)items;
-(id)updateBlock;
-(BOOL)editable;
-(CKTypedComponentAction<WFListEditorDeletionConfirmation *>)confirmationAction;
-(NSSet *)allowedValueTypes;
-(id<WFVariableProvider>)variableProvider;
-(BOOL)variablesDisabled;
-(id<WFComponentNavigationContext>)navigationContext;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(NSSet *)allowedVariableTypes;
-(BOOL)standaloneVariablesAsContentItems;
@end

