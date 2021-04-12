/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@interface WFVariableFieldUtilities : NSObject
+(BOOL)clipboardContainsVariableString;
+(BOOL)pasteboardContainsVariableString:(id)arg1 ;
+(void)copyVariableString:(id)arg1 toPasteboard:(id)arg2 ;
+(id)variableStringFromPasteboard:(id)arg1 withVariableProvider:(id)arg2 ;
+(void)cut:(id)arg1 fromField:(id)arg2 ;
+(void)copy:(id)arg1 fromField:(id)arg2 ;
+(void)paste:(id)arg1 intoField:(id)arg2 ;
@end

