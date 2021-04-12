/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <libobjc.A.dylib/WFModuleParameterStateWriter.h>

@protocol WFModuleParameterStateWriter, WFVariableProvider, WFVariableUIDelegate, WFModuleDelegate;
@class NSString, UIImage, NSAttributedString, WFModuleAppearance, NSError, NSArray, NSDictionary, WFAction;

@interface WFModuleModel : NSObject <WFModuleParameterStateWriter> {

	BOOL _isMissing;
	BOOL _isDiscontinued;
	BOOL _isDraggingIntoWorkflow;
	BOOL _isDimmed;
	BOOL _showHandoffRequired;
	BOOL _showSettings;
	BOOL _isEditable;
	BOOL _isRemovable;
	BOOL _isProcessing;
	BOOL _isWorkflowRunning;
	BOOL _isSelectingParameter;
	BOOL _isPlaceholder;
	BOOL _showResourceErrors;
	NSString* _localizedTitle;
	NSString* _localizedName;
	NSString* _localizedSubtitle;
	UIImage* _icon;
	UIImage* _keyImage;
	NSString* _localizedParameterSummaryFormatString;
	NSAttributedString* _localizedFooter;
	WFModuleAppearance* _appearance;
	unsigned long long _headerTextStyle;
	unsigned long long _indentationLevel;
	NSError* _resourceError;
	NSArray* _allParameters;
	NSArray* _parametersInListing;
	NSDictionary* _parameterStates;
	unsigned long long _parameterCollapsingBehavior;
	Class _customConfigurationClass;
	NSArray* _processingParameters;
	NSString* _firstResponderParameterKey;
	unsigned long long _runningActionIndex;
	NSArray* _parametersExcludedFromSelection;
	id<WFModuleParameterStateWriter> _parameterStateWriter;
	id<WFVariableProvider> _variableProvider;
	id<WFVariableUIDelegate> _variableUIDelegate;
	NSArray* _workflowTypes;
	WFAction* _action;
	id<WFModuleDelegate> _delegate;
	CKTypedComponentAction<> _processingCancelAction;
	CKTypedComponentAction<> _processingDoneAction;
	CKTypedComponentAction<WFAction *, WFParameter *> _parameterSelectionAction;

}

@property (nonatomic,readonly) BOOL showResourceErrors;                                                   //@synthesize showResourceErrors=_showResourceErrors - In the implementation block
@property (nonatomic,readonly) NSArray * workflowTypes;                                                   //@synthesize workflowTypes=_workflowTypes - In the implementation block
@property (nonatomic,__weak,readonly) WFAction * action;                                                  //@synthesize action=_action - In the implementation block
@property (nonatomic,__weak,readonly) id<WFModuleDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;                                            //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedName;                                             //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedSubtitle;                                         //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (nonatomic,readonly) UIImage * icon;                                                            //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) UIImage * keyImage;                                                        //@synthesize keyImage=_keyImage - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedParameterSummaryFormatString;                     //@synthesize localizedParameterSummaryFormatString=_localizedParameterSummaryFormatString - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * localizedFooter;                                 //@synthesize localizedFooter=_localizedFooter - In the implementation block
@property (nonatomic,readonly) BOOL isMissing;                                                            //@synthesize isMissing=_isMissing - In the implementation block
@property (nonatomic,readonly) BOOL isDiscontinued;                                                       //@synthesize isDiscontinued=_isDiscontinued - In the implementation block
@property (nonatomic,readonly) WFModuleAppearance * appearance;                                           //@synthesize appearance=_appearance - In the implementation block
@property (nonatomic,readonly) BOOL isDraggingIntoWorkflow;                                               //@synthesize isDraggingIntoWorkflow=_isDraggingIntoWorkflow - In the implementation block
@property (nonatomic,readonly) unsigned long long headerTextStyle;                                        //@synthesize headerTextStyle=_headerTextStyle - In the implementation block
@property (nonatomic,readonly) BOOL isDimmed;                                                             //@synthesize isDimmed=_isDimmed - In the implementation block
@property (nonatomic,readonly) BOOL showHandoffRequired;                                                  //@synthesize showHandoffRequired=_showHandoffRequired - In the implementation block
@property (nonatomic,readonly) BOOL showSettings;                                                         //@synthesize showSettings=_showSettings - In the implementation block
@property (nonatomic,readonly) unsigned long long indentationLevel;                                       //@synthesize indentationLevel=_indentationLevel - In the implementation block
@property (nonatomic,readonly) NSError * resourceError;                                                   //@synthesize resourceError=_resourceError - In the implementation block
@property (nonatomic,readonly) NSArray * allParameters;                                                   //@synthesize allParameters=_allParameters - In the implementation block
@property (nonatomic,readonly) NSArray * parametersInListing;                                             //@synthesize parametersInListing=_parametersInListing - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameterStates;                                            //@synthesize parameterStates=_parameterStates - In the implementation block
@property (nonatomic,readonly) unsigned long long parameterCollapsingBehavior;                            //@synthesize parameterCollapsingBehavior=_parameterCollapsingBehavior - In the implementation block
@property (nonatomic,readonly) Class customConfigurationClass;                                            //@synthesize customConfigurationClass=_customConfigurationClass - In the implementation block
@property (nonatomic,readonly) BOOL isEditable;                                                           //@synthesize isEditable=_isEditable - In the implementation block
@property (nonatomic,readonly) BOOL isRemovable;                                                          //@synthesize isRemovable=_isRemovable - In the implementation block
@property (nonatomic,readonly) BOOL isProcessing;                                                         //@synthesize isProcessing=_isProcessing - In the implementation block
@property (nonatomic,readonly) NSArray * processingParameters;                                            //@synthesize processingParameters=_processingParameters - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstResponderParameterKey;                                //@synthesize firstResponderParameterKey=_firstResponderParameterKey - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> processingCancelAction;                           //@synthesize processingCancelAction=_processingCancelAction - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> processingDoneAction;                             //@synthesize processingDoneAction=_processingDoneAction - In the implementation block
@property (nonatomic,readonly) BOOL isWorkflowRunning;                                                    //@synthesize isWorkflowRunning=_isWorkflowRunning - In the implementation block
@property (nonatomic,readonly) unsigned long long runningActionIndex;                                     //@synthesize runningActionIndex=_runningActionIndex - In the implementation block
@property (nonatomic,readonly) BOOL isSelectingParameter;                                                 //@synthesize isSelectingParameter=_isSelectingParameter - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<WFAction * parameterSelectionAction;                //@synthesize parameterSelectionAction=_parameterSelectionAction - In the implementation block
@property (nonatomic,readonly) NSArray * parametersExcludedFromSelection;                                 //@synthesize parametersExcludedFromSelection=_parametersExcludedFromSelection - In the implementation block
@property (nonatomic,__weak,readonly) id<WFModuleParameterStateWriter> parameterStateWriter;              //@synthesize parameterStateWriter=_parameterStateWriter - In the implementation block
@property (nonatomic,__weak,readonly) id<WFVariableProvider> variableProvider;                            //@synthesize variableProvider=_variableProvider - In the implementation block
@property (nonatomic,__weak,readonly) id<WFVariableUIDelegate> variableUIDelegate;                        //@synthesize variableUIDelegate=_variableUIDelegate - In the implementation block
@property (nonatomic,readonly) BOOL isPlaceholder;                                                        //@synthesize isPlaceholder=_isPlaceholder - In the implementation block
+(id)modelForViewingAction:(id)arg1 whileWorkflowRunning:(BOOL)arg2 withWorkflowTypes:(id)arg3 appearance:(id)arg4 showResourceErrors:(BOOL)arg5 dimmed:(BOOL)arg6 customConfigurationClass:(Class)arg7 delegate:(id)arg8 ;
+(id)modelForEditingAction:(id)arg1 withWorkflowTypes:(id)arg2 draggingIntoWorkflow:(BOOL)arg3 customConfigurationClass:(Class)arg4 variableUIDelegate:(id)arg5 delegate:(id)arg6 ;
+(id)modelForProcessingAction:(id)arg1 withParameters:(id)arg2 cancelAction:(CKTypedComponentAction<>)arg3 doneAction:(CKTypedComponentAction<>)arg4 ;
+(id)modelForSelectingParameterOfAction:(id)arg1 excludingParameters:(id)arg2 selectionAction:(CKTypedComponentAction<WFAction *, WFParameter *>)arg3 delegate:(id)arg4 ;
+(id)modelForPlaceholder;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id<WFModuleDelegate>)delegate;
-(NSString *)localizedName;
-(WFAction *)action;
-(BOOL)isPlaceholder;
-(UIImage *)keyImage;
-(BOOL)isRemovable;
-(NSString *)localizedTitle;
-(WFModuleAppearance *)appearance;
-(UIImage *)icon;
-(NSString *)localizedSubtitle;
-(unsigned long long)indentationLevel;
-(BOOL)isEditable;
-(NSArray *)allParameters;
-(BOOL)isDimmed;
-(BOOL)isProcessing;
-(BOOL)showSettings;
-(BOOL)isDiscontinued;
-(NSArray *)workflowTypes;
-(id<WFVariableProvider>)variableProvider;
-(NSAttributedString *)localizedFooter;
-(BOOL)isMissing;
-(unsigned long long)parameterCollapsingBehavior;
-(BOOL)setState:(id)arg1 ofParameter:(id)arg2 ;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(id)initWithAction:(id)arg1 processingParameters:(id)arg2 workflowTypes:(id)arg3 editable:(BOOL)arg4 processing:(BOOL)arg5 workflowRunning:(BOOL)arg6 appearance:(id)arg7 dimmed:(BOOL)arg8 draggingIntoWorkflow:(BOOL)arg9 customConfigurationClass:(Class)arg10 showResourceErrors:(BOOL)arg11 variableUIDelegate:(id)arg12 delegate:(id)arg13 cancelAction:(CKTypedComponentAction<>)arg14 doneAction:(CKTypedComponentAction<>)arg15 parameterSelectionAction:(CKTypedComponentAction<WFAction *, WFParameter *>)arg16 parameterSelectionExclusions:(id)arg17 placeholder:(BOOL)arg18 ;
-(id)updatedModel;
-(NSString *)localizedParameterSummaryFormatString;
-(BOOL)isDraggingIntoWorkflow;
-(unsigned long long)headerTextStyle;
-(BOOL)showHandoffRequired;
-(NSError *)resourceError;
-(NSArray *)parametersInListing;
-(NSDictionary *)parameterStates;
-(Class)customConfigurationClass;
-(NSArray *)processingParameters;
-(NSString *)firstResponderParameterKey;
-(CKTypedComponentAction<>)processingCancelAction;
-(CKTypedComponentAction<>)processingDoneAction;
-(BOOL)isWorkflowRunning;
-(unsigned long long)runningActionIndex;
-(BOOL)isSelectingParameter;
-(CKTypedComponentAction<WFAction *)parameterSelectionAction;
-(NSArray *)parametersExcludedFromSelection;
-(id<WFModuleParameterStateWriter>)parameterStateWriter;
-(BOOL)showResourceErrors;
@end

