/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>
#import <libobjc.A.dylib/ASBulletinPostingManager.h>
#import <libobjc.A.dylib/ASActivitySharingManagerReadyObserver.h>

@protocol ASBulletinPostingManagerDelegate;
@class UNUserNotificationCenter, NSString;

@interface ASCompanionBulletinPostingManager : NSObject <UNUserNotificationCenterDelegate, ASBulletinPostingManager, ASActivitySharingManagerReadyObserver> {

	UNUserNotificationCenter* _userNotificationCenter;
	id<ASBulletinPostingManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ASBulletinPostingManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<ASBulletinPostingManagerDelegate>)delegate;
-(void)setDelegate:(id<ASBulletinPostingManagerDelegate>)arg1 ;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)postNotificationRequest:(id)arg1 ;
-(void)removeNotificationWithIdentifier:(id)arg1 ;
-(void)activitySharingManagerReady:(id)arg1 ;
-(void)enqueueBulletins:(id)arg1 withPostingSyle:(long long)arg2 ;
-(void)removeCompetitionNotificationsForFriendUUID:(id)arg1 ;
-(void)_withdrawNotificationRequestsWithIdentifiers:(id)arg1 ;
-(void)registerNotificationCategories:(id)arg1 ;
-(void)postFakeBulletins:(id)arg1 ;
@end

