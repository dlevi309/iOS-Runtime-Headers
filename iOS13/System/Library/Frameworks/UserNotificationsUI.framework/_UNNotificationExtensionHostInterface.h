/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/UserNotificationsUI.framework/UserNotificationsUI
*/


@protocol _UNNotificationExtensionHostInterface
@required
-(void)_extensionRequestsDismiss;
-(void)_extensionMediaPlayingStarted;
-(void)_extensionMediaPlayingPaused;
-(void)_extensionRequestsDefaultAction;
-(void)_extensionSetUserNotificationActions:(id)arg1;
-(void)_extensionWantsToReceiveActionResponses:(BOOL)arg1;
-(void)_extensionWantsToBecomeFirstResponder:(BOOL)arg1;
-(void)_extensionDidCompleteNotificationResponse:(id)arg1 withOption:(unsigned long long)arg2;
-(void)_extensionSetPlayPauseMediaButtonType:(unsigned long long)arg1;
-(void)_extensionSetPlayPauseMediaButtonFrame:(CGRect)arg1;
-(void)_extensionSetPlayPauseMediaButtonColor:(id)arg1;
-(void)_extensionDidUpdateControls;
-(void)_extensionSetTitle:(id)arg1;

@end

