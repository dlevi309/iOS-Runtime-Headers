/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@interface ICShareNotifier : NSObject
+(BOOL)shouldShowNotificationForNote:(id)arg1 ;
+(id)replicaIDsThatEditedTimestamp:(id)arg1 sinceTimestamp:(id)arg2 ;
+(id)participantsWithReplicaIDs:(id)arg1 inNote:(id)arg2 ;
+(void)showNotificationForNote:(id)arg1 editors:(id)arg2 ;
+(BOOL)shouldPreventNotificationsForRecordID:(id)arg1 ;
+(id)notificationTitleForEditors:(id)arg1 ;
+(void)showNotificationWithTitle:(id)arg1 message:(id)arg2 userInfo:(id)arg3 ;
+(id)defaultsKeyForPreventingNotificationsForIdentifier:(id)arg1 ;
+(void)clearNotificationForRecordID:(id)arg1 ;
+(void)showNotificationIfNecessaryForCloudObject:(id)arg1 accountID:(id)arg2 ;
+(void)setShouldPreventNotifications:(BOOL)arg1 forRecordID:(id)arg2 ;
@end

