/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
*/


@protocol INUIVoiceShortcutRemoteViewControllerDelegate <NSObject>
@optional
-(void)remoteViewControllerDidCreateVoiceShortcut:(id)arg1 error:(id)arg2;
-(void)remoteViewControllerDidUpdateVoiceShortcut:(id)arg1 error:(id)arg2;
-(void)remoteViewControllerDidDeleteVoiceShortcutWithIdentifier:(id)arg1;

@required
-(void)remoteViewControllerDidCancel;

@end

