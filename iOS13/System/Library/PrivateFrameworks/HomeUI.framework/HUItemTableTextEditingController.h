/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HUItemTableTextEditingController <NSObject>
@required
-(id)textFieldForVisibleItem:(id)arg1;
-(BOOL)shouldManageTextFieldForItem:(id)arg1;
-(id)placeholderTextForTextField:(id)arg1 item:(id)arg2;
-(id)currentTextForTextField:(id)arg1 item:(id)arg2;
-(void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3;
-(void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;
-(id)defaultTextForTextField:(id)arg1 item:(id)arg2;
-(void)textFieldDidBeginEditing:(id)arg1 item:(id)arg2;

@end

