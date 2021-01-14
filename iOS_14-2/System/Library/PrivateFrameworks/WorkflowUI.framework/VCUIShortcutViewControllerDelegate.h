/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@protocol VCUIShortcutViewControllerDelegate <NSObject>
@optional
-(void)shortcutViewController:(id)arg1 didCreateShortcut:(id)arg2;
-(void)shortcutViewController:(id)arg1 didCreateShortcut:(id)arg2 withTrigger:(id)arg3;
-(void)shortcutViewController:(id)arg1 didSaveShortcut:(id)arg2;
-(void)shortcutViewController:(id)arg1 didDeleteShortcut:(id)arg2;
-(void)shortcutViewController:(id)arg1 didFinishWithName:(id)arg2;

@required
-(void)shortcutViewControllerDidCancel:(id)arg1;

@end

