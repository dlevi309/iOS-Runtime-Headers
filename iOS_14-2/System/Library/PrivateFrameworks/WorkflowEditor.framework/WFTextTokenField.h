/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

@class WFVariableString;


@protocol WFTextTokenField <WFTextField>
@property (nonatomic,copy) WFVariableString * variableString; 
@property (assign,nonatomic) NSRange selectedRange; 
@required
-(void)setSelectedRange:(NSRange)arg1;
-(NSRange)selectedRange;
-(WFVariableString *)variableString;
-(void)beginEditingWithContext:(id)arg1;
-(void)setVariableString:(id)arg1;

@end

