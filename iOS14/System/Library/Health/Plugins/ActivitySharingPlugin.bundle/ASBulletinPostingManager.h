/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/


@protocol ASBulletinPostingManager <ASActivitySharingManagerReadyObserver>
@property (assign,nonatomic,__weak) id<ASBulletinPostingManagerDelegate> delegate; 
@required
-(void)postNotificationRequest:(id)arg1;
-(void)handleNotificationResponse:(id)arg1 completion:(/*^block*/id)arg2;
-(id<ASBulletinPostingManagerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)removeNotificationWithIdentifier:(id)arg1;
-(void)enqueueBulletins:(id)arg1 withPostingSyle:(long long)arg2;
-(void)removeCompetitionNotificationsForFriendUUID:(id)arg1;
-(void)registerNotificationCategories:(id)arg1;
-(void)postFakeBulletins:(id)arg1;

@end

