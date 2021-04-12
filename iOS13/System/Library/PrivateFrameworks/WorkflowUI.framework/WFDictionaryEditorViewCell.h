/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFListEditorViewCell.h>

@class UIView, WFTextTokenEditorView;

@interface WFDictionaryEditorViewCell : WFListEditorViewCell {

	UIView* _separatorView;
	WFTextTokenEditorView* _keyEditor;

}

@property (nonatomic,__weak,readonly) UIView * separatorView;                         //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,__weak,readonly) WFTextTokenEditorView * keyEditor;              //@synthesize keyEditor=_keyEditor - In the implementation block
-(void)setValue:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)becomeFirstResponder;
-(UIView *)separatorView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setVariableProvider:(id)arg1 ;
-(void)setVariablesDisabled:(BOOL)arg1 ;
-(void)setAllowedVariableTypes:(id)arg1 ;
-(void)beginEditingWithContext:(id)arg1 ;
-(id)valueEditorValue;
-(void)updateWithValueState:(id)arg1 ;
-(id)valueTitle;
-(void)updateEditorBlocks;
-(void)configureEditorViewController:(id)arg1 ;
-(WFTextTokenEditorView *)keyEditor;
@end

