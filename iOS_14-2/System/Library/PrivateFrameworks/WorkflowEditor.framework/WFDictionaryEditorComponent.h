/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKStatefulViewComponent.h>

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
	double _additionalBottomMargin;

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
@property (nonatomic,readonly) double additionalBottomMargin;                                          //@synthesize additionalBottomMargin=_additionalBottomMargin - In the implementation block
+(id)newWithKeyValuePairs:(id)arg1 variableProvider:(id)arg2 variableUIDelegate:(id)arg3 navigationContext:(id)arg4 localizedNewItemTypeName:(id)arg5 variablesDisabled:(BOOL)arg6 allowedValueTypes:(id)arg7 allowedVariableTypes:(id)arg8 editable:(BOOL)arg9 updateBlock:(/*^block*/id)arg10 additionalBottomMargin:(double)arg11 size:(const CKComponentSize*)arg12 ;
-(BOOL)editable;
-(NSArray *)keyValuePairs;
-(id)updateBlock;
-(NSString *)localizedNewItemTypeName;
-(NSSet *)allowedValueTypes;
-(id<WFVariableProvider>)variableProvider;
-(BOOL)variablesDisabled;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
-(id<WFComponentNavigationContext>)navigationContext;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(NSSet *)allowedVariableTypes;
-(double)additionalBottomMargin;
@end

