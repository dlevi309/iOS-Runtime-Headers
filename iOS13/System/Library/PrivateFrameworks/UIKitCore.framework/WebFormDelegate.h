/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol WebFormDelegate <NSObject>
@required
-(void)textFieldDidBeginEditing:(id)arg1 inFrame:(id)arg2;
-(void)textFieldDidEndEditing:(id)arg1 inFrame:(id)arg2;
-(void)textDidChangeInTextField:(id)arg1 inFrame:(id)arg2;
-(void)textDidChangeInTextArea:(id)arg1 inFrame:(id)arg2;
-(void)didFocusTextField:(id)arg1 inFrame:(id)arg2;
-(BOOL)textField:(id)arg1 doCommandBySelector:(SEL)arg2 inFrame:(id)arg3;
-(void)frame:(id)arg1 sourceFrame:(id)arg2 willSubmitForm:(id)arg3 withValues:(id)arg4 submissionListener:(id)arg5;
-(void)willSendSubmitEventToForm:(id)arg1 inFrame:(id)arg2 withValues:(id)arg3;

@end

