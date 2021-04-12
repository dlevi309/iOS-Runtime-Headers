/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ComponentKit/CKStatefulViewComponentController.h>
#import <libobjc.A.dylib/WFTextTokenEditorViewDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@class WFVariableEditingContext, NSString;

@interface WFTextInputComponentController : CKStatefulViewComponentController <WFTextTokenEditorViewDelegate, UITextViewDelegate> {

	WFVariableEditingContext* _editingContext;

}

@property (nonatomic,retain) WFVariableEditingContext * editingContext;              //@synthesize editingContext=_editingContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newStatefulView:(id)arg1 ;
+(void)configureStatefulView:(id)arg1 forComponent:(id)arg2 ;
+(id)contextForNewStatefulView:(id)arg1 ;
-(id)field;
-(void)textDidChange;
-(WFVariableEditingContext *)editingContext;
-(void)setEditingContext:(WFVariableEditingContext *)arg1 ;
-(void)didAcquireStatefulView:(id)arg1 ;
-(void)willRelinquishStatefulView:(id)arg1 ;
-(void)textTokenEditorTextDidBeginEditing:(id)arg1 ;
-(void)textTokenEditorTextDidChange:(id)arg1 ;
-(void)textTokenEditorTextDidEndEditing:(id)arg1 ;
-(void)componentTreeWillAppear;
-(void)componentTreeDidDisappear;
-(void)textDidChangeThrottled;
@end

