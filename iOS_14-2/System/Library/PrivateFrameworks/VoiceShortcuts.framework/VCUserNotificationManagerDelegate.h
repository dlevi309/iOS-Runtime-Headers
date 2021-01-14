/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/


@protocol VCUserNotificationManagerDelegate <NSObject>
@required
-(void)notificationManager:(id)arg1 didFailToPostNotificationPromptWithTriggerIdentifier:(id)arg2 pendingTriggerEventIDs:(id)arg3;
-(void)notificationManager:(id)arg1 receivedConfirmationToRunTriggerWithIdentifier:(id)arg2 pendingTriggerEventIDs:(id)arg3;
-(void)notificationManager:(id)arg1 didDismissTriggerWithIdentifier:(id)arg2 pendingTriggerEventIDs:(id)arg3;

@end

