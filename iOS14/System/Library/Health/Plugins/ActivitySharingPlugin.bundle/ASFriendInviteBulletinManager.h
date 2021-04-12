/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <libobjc.A.dylib/ASBulletinPostingManagerDelegate.h>
#import <libobjc.A.dylib/ASActivitySharingManagerReadyObserver.h>

@protocol ASBulletinPostingManager, OS_dispatch_queue, ASFriendInviteBulletinManagerDelegate;
@class NSObject, NSMutableDictionary, NSString;

@interface ASFriendInviteBulletinManager : NSObject <ASBulletinPostingManagerDelegate, ASActivitySharingManagerReadyObserver> {

	id<ASBulletinPostingManager> _bulletinPostingManager;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSMutableDictionary* _postedFriendInviteIdentifiersForContactUUID;
	id<ASFriendInviteBulletinManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ASFriendInviteBulletinManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<ASFriendInviteBulletinManagerDelegate>)delegate;
-(void)setDelegate:(id<ASFriendInviteBulletinManagerDelegate>)arg1 ;
-(void)activitySharingManagerReady:(id)arg1 ;
-(void)withdrawInviteNotificationsForContact:(id)arg1 ;
-(void)showInviteAttemptNeedToUpgradeFrom:(id)arg1 ;
-(void)showVersionTooLowForIncomingInviteFrom:(id)arg1 ;
-(void)showInviteRequestFromContact:(id)arg1 withPostingStyle:(long long)arg2 ;
-(void)showInviteAttemptNeedToSignInFrom:(id)arg1 ;
-(void)showVersionTooLowForOutgoingInviteTo:(id)arg1 ;
-(void)showVersionTooHighForOutgoingInviteTo:(id)arg1 ;
-(void)showInviteAcceptResponseFrom:(id)arg1 ;
-(void)showMaxNumberOfFriendsError;
-(void)showErrorAcceptingInviteFrom:(id)arg1 ;
-(void)showInviteAttemptNeedsSetupFromContact:(id)arg1 ;
-(void)bulletinPostingManager:(id)arg1 didReceiveNotificationResponse:(id)arg2 ;
-(id)_inviteNotificationCategories;
-(BOOL)_isSharingSetup;
-(id)_notificationRequestForInvitationFromContact:(id)arg1 requestIdentifier:(id)arg2 ;
-(void)_submitNotificationRequest:(id)arg1 forContact:(id)arg2 ;
-(id)_notificationRequestForInvitationFromContact:(id)arg1 categoryIdentifier:(id)arg2 requestIdentifier:(id)arg3 title:(id)arg4 formatString:(id)arg5 ;
-(void)_showIncompatibleVersionForContact:(id)arg1 title:(id)arg2 formatString:(id)arg3 ;
-(id)_userInfoForInvitationResponseFromContact:(id)arg1 notificationContent:(id)arg2 message:(id)arg3 ;
-(id)_notificationRequestForInvitationFromContactUUID:(id)arg1 categoryIdentifier:(id)arg2 requestIdentifier:(id)arg3 title:(id)arg4 message:(id)arg5 ;
-(void)_newPrepopulatedNotificationContentForNotificationContent:(id)arg1 title:(id)arg2 message:(id)arg3 ;
-(id)_newPrepolulatedUserInfoForInvitationFromContactUUID:(id)arg1 categoryIdentifier:(id)arg2 notificationContent:(id)arg3 title:(id)arg4 message:(id)arg5 ;
@end

