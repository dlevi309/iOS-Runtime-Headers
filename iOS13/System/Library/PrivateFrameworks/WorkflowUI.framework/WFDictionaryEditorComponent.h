/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ComponentKit/CKStatefulViewComponent.h>

@protocol WFVariableProvider, WFVariableUIDelegate, WFComponentNavigationContext;
@class NSArray, NSString, NSSet;

@interface WFDictionaryEditorComponent : CKStatefulViewComponent {

	BOOL _variablesDisabled;
	BOOL _editable;
	NSArray* _keyValuePairs;
	id<WFVariableProvider> _variableProvider;
	id<WFVariableUIDelegate> _variableUIDelegate;
	id<WFComponentNavigationContext> _navigationContext;
	NSString* _localizedNewItemTypeName;
	NSSet* _allowedValueTypes;
	NSSet* _allowedVariableTypes;
	/*^block*/id _updateBlock;

}

@property (nonatomic,readonly) NSArray * keyValuePairs;                                                //@synthesize keyValuePairs=_keyValuePairs - In the implementation block
@property (nonatomic,__weak,readonly) id<WFVariableProvider> variableProvider;                         //@synthesize variableProvider=_variableProvider - In the implementation block
@property (nonatomic,__weak,readonly) id<WFVariableUIDelegate> variableUIDelegate;                     //@synthesize variableUIDelegate=_variableUIDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<WFComponentNavigationContext> navigationContext;              //@synthesize navigationContext=_navigationContext - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedNewItemTypeName;                               //@synthesize localizedNewItemTypeName=_localizedNewItemTypeName - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allowedValueTypes;                                         //@synthesize allowedValueTypes=_allowedValueTypes - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allowedVariableTypes;                                      //@synthesize allowedVariableTypes=_allowedVariableTypes - In the implementation block
@property (nonatomic,readonly) BOOL variablesDisabled;                                                 //@synthesize variablesDisabled=_variablesDisabled - In the implementation block
@property (nonatomic,readonly) BOOL editable;                                                          //@synthesize editable=_editable - In the implementation block
@property (nonatomic,readonly) id updateBlock;                                                         //@synthesize updateBlock=_updateBlock - In the implementation block
+(id)newWithKeyValuePairs:(id)arg1 variableProvider:(id)arg2 variableUIDelegate:(id)arg3 navigationContext:(id)arg4 localizedNewItemTypeName:(id)arg5 variablesDisabled:(BOOL)arg6 allowedValueTypes:(id)arg7 allowedVariableTypes:(id)arg8 editable:(BOOL)arg9 updateBlock:(/*^block*/id)arg10 size:(const CKComponentSize*)arg11 ;
-(id)updateBlock;
-(BOOL)editable;
-(NSArray *)keyValuePairs;
-(NSString *)localizedNewItemTypeName;
-(NSSet *)allowedValueTypes;
-(id<WFVariableProvider>)variableProvider;
-(BOOL)variablesDisabled;
-(id<WFComponentNavigationContext>)navigationContext;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(NSSet *)allowedVariableTypes;
@end

