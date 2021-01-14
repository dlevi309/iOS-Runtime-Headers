/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
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

