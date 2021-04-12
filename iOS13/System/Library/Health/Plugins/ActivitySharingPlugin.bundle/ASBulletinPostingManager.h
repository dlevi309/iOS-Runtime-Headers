/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/


@protocol ASBulletinPostingManager <ASActivitySharingManagerReadyObserver>
@property (assign,nonatomic,__weak) id<ASBulletinPostingManagerDelegate> delegate; 
@required
-(id<ASBulletinPostingManagerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)postNotificationRequest:(id)arg1;
-(void)removeNotificationWithIdentifier:(id)arg1;
-(void)enqueueBulletins:(id)arg1 withPostingSyle:(long long)arg2;
-(void)removeCompetitionNotificationsForFriendUUID:(id)arg1;
-(void)registerNotificationCategories:(id)arg1;
-(void)postFakeBulletins:(id)arg1;

@end

