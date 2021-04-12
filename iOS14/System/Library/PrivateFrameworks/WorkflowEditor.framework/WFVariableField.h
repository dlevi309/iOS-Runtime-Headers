/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/WFTextTokenTextField.h>
#import <UIKit/UITextFieldDelegate.h>

@class UIImageView, NSString;

@interface WFVariableField : WFTextTokenTextField <UITextFieldDelegate> {

	UIImageView* _pillImageView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setText:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)dealloc;
@end

