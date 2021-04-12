/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)postNotificationRequest:(id)arg1 ;
-(void)handleNotificationResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(id<ASBulletinPostingManagerDelegate>)delegate;
-(void)setDelegate:(id<ASBulletinPostingManagerDelegate>)arg1 ;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)removeNotificationWithIdentifier:(id)arg1 ;
-(void)activitySharingManagerReady:(id)arg1 ;
-(void)enqueueBulletins:(id)arg1 withPostingSyle:(long long)arg2 ;
-(void)removeCompetitionNotificationsForFriendUUID:(id)arg1 ;
-(void)_withdrawNotificationRequestsWithIdentifiers:(id)arg1 ;
-(void)registerNotificationCategories:(id)arg1 ;
-(void)postFakeBulletins:(id)arg1 ;
@end

