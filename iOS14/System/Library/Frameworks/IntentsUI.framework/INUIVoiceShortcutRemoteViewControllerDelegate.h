/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

