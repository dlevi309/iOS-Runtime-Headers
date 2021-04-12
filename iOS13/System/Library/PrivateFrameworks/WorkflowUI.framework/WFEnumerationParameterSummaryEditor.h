/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFModuleSummaryEditor.h>

@class WFEnumerationTextTokenChooser;

@interface WFEnumerationParameterSummaryEditor : WFModuleSummaryEditor {

	WFEnumerationTextTokenChooser* _chooser;

}

@property (nonatomic,retain) WFEnumerationTextTokenChooser * chooser;              //@synthesize chooser=_chooser - In the implementation block
+(unsigned long long)variableResultTypeForParameter:(id)arg1 ;
-(WFEnumerationTextTokenChooser *)chooser;
-(void)setChooser:(WFEnumerationTextTokenChooser *)arg1 ;
-(void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 ;
-(void)cancelEditingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)completeEditing;
-(void)loadDynamicEnumerationValuesWithCompletionHandler:(/*^block*/id)arg1 ;
@end

