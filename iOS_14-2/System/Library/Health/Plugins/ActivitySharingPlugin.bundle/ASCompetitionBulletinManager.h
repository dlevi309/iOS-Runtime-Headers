/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <libobjc.A.dylib/ASActivitySharingManagerReadyObserver.h>

@protocol ASBulletinPostingManager;
@class NSString;

@interface ASCompetitionBulletinManager : NSObject <ASActivitySharingManagerReadyObserver> {

	id<ASBulletinPostingManager> _bulletinPostingManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)activitySharingManagerReady:(id)arg1 ;
-(void)showCompetitionRequestNotificationForFriend:(id)arg1 competition:(id)arg2 withPostingStyle:(long long)arg3 ;
-(void)showCompetitionAcceptedNotificationForFriend:(id)arg1 competition:(id)arg2 withPostingStyle:(long long)arg3 ;
-(void)showCompetitionEndedNotificationForFriend:(id)arg1 competition:(id)arg2 withPostingStyle:(long long)arg3 ;
-(void)showCompetitionScoreCapCelebrationForFriends:(id)arg1 withPostingStyle:(long long)arg2 ;
-(void)showGizmoVersionTooLowForCompetitionRequestFrom:(id)arg1 ;
-(void)withdrawCompetitionRequestNotificationForFriendWithUUID:(id)arg1 ;
@end

