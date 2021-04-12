/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

@class WFVariableString;


@protocol WFTextTokenField <WFTextField>
@property (nonatomic,copy) WFVariableString * variableString; 
@property (assign,nonatomic) NSRange selectedRange; 
@required
-(NSRange)selectedRange;
-(void)setSelectedRange:(NSRange)arg1;
-(WFVariableString *)variableString;
-(void)setVariableString:(id)arg1;
-(void)beginEditingWithContext:(id)arg1;
-(void)defaultCut:(id)arg1;
-(void)defaultCopy:(id)arg1;
-(void)defaultPaste:(id)arg1;

@end

