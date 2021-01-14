/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <libobjc.A.dylib/ASOnWristMonitorDelegate.h>
#import <libobjc.A.dylib/HDNanoAlertSuppressionObserver.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>
#import <libobjc.A.dylib/ASBulletinPostingManager.h>
#import <libobjc.A.dylib/ASActivitySharingManagerReadyObserver.h>

@protocol OS_dispatch_queue, ASBulletinPostingManagerDelegate;
@class NSObject, ASBulletinStore, NSSet, HDProfile, ASOnWristMonitor, NSMutableDictionary, UNUserNotificationCenter, NSString;

@interface ASGizmoBulletinPostingManager : NSObject <ASOnWristMonitorDelegate, HDNanoAlertSuppressionObserver, HDDatabaseProtectedDataObserver, UNUserNotificationCenterDelegate, ASBulletinPostingManager, ASActivitySharingManagerReadyObserver> {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	ASBulletinStore* _notificationStore;
	NSSet* _notificationRequests;
	HDProfile* _profile;
	ASOnWristMonitor* _onWristMonitor;
	double _deferredBulletinTimestamp;
	NSMutableDictionary* _friendUUIDToCompetitionRequestNotificationRequestRecordMap;
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
-(void)_postNotificationRequest:(id)arg1 ;
-(void)setDelegate:(id<ASBulletinPostingManagerDelegate>)arg1 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)dealloc;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)removeNotificationWithIdentifier:(id)arg1 ;
-(void)activitySharingManagerReady:(id)arg1 ;
-(void)enqueueBulletins:(id)arg1 withPostingSyle:(long long)arg2 ;
-(void)removeCompetitionNotificationsForFriendUUID:(id)arg1 ;
-(void)_withdrawNotificationRequestsWithIdentifiers:(id)arg1 ;
-(void)registerNotificationCategories:(id)arg1 ;
-(void)postFakeBulletins:(id)arg1 ;
-(void)_postQueuedNotificationRequestsIfPossible;
-(id)_batchedNotificationRequestsFromCodableBulletins:(id)arg1 withAdditions:(id)arg2 ;
-(id)_notificationRequestFromCodableBulletin:(id)arg1 withAdditions:(id)arg2 ;
-(id)_expirationDateForBulletinType:(long long)arg1 publishDate:(id)arg2 ;
-(id)_threadIdentifierForBulletinType:(long long)arg1 ;
-(id)recordIDForFriendUUID:(id)arg1 ;
-(void)removeRecordIDForFriendUUID:(id)arg1 ;
-(id)_batchedNotificationRequestsFromCodableBulletins:(id)arg1 ;
-(void)_queue_postNotificationRequests:(id)arg1 ;
-(void)onWristMonitorUpdatedOnWristState;
-(void)alertSuppressionInvalidatedForSuppressionId:(id)arg1 reason:(long long)arg2 ;
-(id)_notificationRequestFromCodableBulletin:(id)arg1 ;
@end

