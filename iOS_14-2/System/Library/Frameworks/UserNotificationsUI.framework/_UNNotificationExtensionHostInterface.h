/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotificationsUI.framework/UserNotificationsUI
*/


@protocol _UNNotificationExtensionHostInterface
@required
-(void)_extensionRequestsDismiss;
-(void)_extensionWantsToReceiveActionResponses:(BOOL)arg1;
-(void)_extensionWantsToBecomeFirstResponder:(BOOL)arg1;
-(void)_extensionDidCompleteNotificationResponse:(id)arg1 withOption:(unsigned long long)arg2;
-(void)_extensionSetPlayPauseMediaButtonType:(unsigned long long)arg1;
-(void)_extensionSetPlayPauseMediaButtonFrame:(CGRect)arg1;
-(void)_extensionSetPlayPauseMediaButtonColor:(id)arg1;
-(void)_extensionMediaPlayingStarted;
-(void)_extensionMediaPlayingPaused;
-(void)_extensionDidUpdatePlayPauseMediaButton;
-(void)_extensionRequestsDefaultAction;
-(void)_extensionDidUpdateTitle:(id)arg1;
-(void)_extensionDidUpdateNotificationActions:(id)arg1;

@end

