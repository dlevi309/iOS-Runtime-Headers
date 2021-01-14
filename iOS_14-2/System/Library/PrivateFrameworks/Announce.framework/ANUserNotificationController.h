/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/


@protocol ANUserNotificationControllerDelegate;
@class UNUserNotificationCenter;

@interface ANUserNotificationController : NSObject {

	BOOL _suspendNotificationExpiration;
	id<ANUserNotificationControllerDelegate> _delegate;
	UNUserNotificationCenter* _notificationCenter;

}

@property (nonatomic,readonly) UNUserNotificationCenter * notificationCenter;                       //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (assign,nonatomic) BOOL suspendNotificationExpiration;                                    //@synthesize suspendNotificationExpiration=_suspendNotificationExpiration - In the implementation block
@property (assign,nonatomic,__weak) id<ANUserNotificationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedController;
+(id)_createNotificationContent:(id)arg1 homeName:(id)arg2 withSilence:(BOOL)arg3 userInfo:(id)arg4 actionUrl:(id)arg5 expirationDate:(id)arg6 andThreadIdentifier:(id)arg7 ;
+(void)_bestDeviceToAlert:(/*^block*/id)arg1 ;
-(id)init;
-(UNUserNotificationCenter *)notificationCenter;
-(id<ANUserNotificationControllerDelegate>)delegate;
-(void)setDelegate:(id<ANUserNotificationControllerDelegate>)arg1 ;
-(void)postSendFailureNotificationForAnnouncement:(id)arg1 ;
-(BOOL)suspendNotificationExpiration;
-(void)_replaceContentForRequestWithGroupID:(id)arg1 replacementContent:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_postNotificationWithContent:(id)arg1 withGroupID:(id)arg2 ;
-(void)_contentForAnnouncements:(id)arg1 inHome:(id)arg2 withGroupID:(id)arg3 replacement:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)setSuspendNotificationExpiration:(BOOL)arg1 ;
-(void)_setContentExpirationDate:(id)arg1 forNotificationsWithGroupIDs:(id)arg2 ;
-(id)_contentForSendFailureForAnnouncement:(id)arg1 ;
-(id)_contentBodyForAnnouncements:(id)arg1 inHome:(id)arg2 ;
-(id)_userInfoForAnnouncements:(id)arg1 ;
-(id)_userInfoForFailedDeliveryForAnnouncement:(id)arg1 ;
-(void)postNotificationForAnnouncements:(id)arg1 inHome:(id)arg2 withGroupID:(id)arg3 ;
-(void)updateNotificationForAnnouncements:(id)arg1 inHome:(id)arg2 withGroupID:(id)arg3 ;
-(void)removeNotificationWithGroupID:(id)arg1 ;
-(void)pauseExpirationForNotificationsWithGroupIDs:(id)arg1 ;
-(void)resumeExpirationForNotificationsWithGroupIDs:(id)arg1 ;
-(BOOL)hasDeliveredNotificationsWithGroupID:(id)arg1 ;
@end

