/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WFListEditorViewCell.h>

@class UIView, WFTextTokenEditorView;

@interface WFDictionaryEditorViewCell : WFListEditorViewCell {

	UIView* _separatorView;
	WFTextTokenEditorView* _keyEditor;

}

@property (nonatomic,__weak,readonly) UIView * separatorView;                         //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,__weak,readonly) WFTextTokenEditorView * keyEditor;              //@synthesize keyEditor=_keyEditor - In the implementation block
-(BOOL)becomeFirstResponder;
-(UIView *)separatorView;
-(void)setValue:(id)arg1 ;
-(void)layoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)valueTitle;
-(void)setVariableProvider:(id)arg1 ;
-(void)setAllowedVariableTypes:(id)arg1 ;
-(id)valueEditorValue;
-(void)updateWithValueState:(id)arg1 ;
-(void)beginEditingWithContext:(id)arg1 ;
-(void)updateEditorBlocks;
-(void)configureEditorViewController:(id)arg1 ;
-(void)setVariablesDisabled:(BOOL)arg1 ;
-(WFTextTokenEditorView *)keyEditor;
@end

