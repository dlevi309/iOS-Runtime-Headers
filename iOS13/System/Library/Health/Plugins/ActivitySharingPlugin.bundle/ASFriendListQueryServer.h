/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <HealthDaemon/HDQueryServer.h>
#import <libobjc.A.dylib/ASFriendListObserver.h>

@class ASActivitySharingManager, NSString;

@interface ASFriendListQueryServer : HDQueryServer <ASFriendListObserver> {

	ASActivitySharingManager* _activitySharingManager;

}

@property (assign,nonatomic,__weak) ASActivitySharingManager * activitySharingManager;              //@synthesize activitySharingManager=_activitySharingManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)queryClass;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(void)_queue_stop;
-(BOOL)_shouldListenForUpdates;
-(BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
-(ASActivitySharingManager *)activitySharingManager;
-(void)setActivitySharingManager:(ASActivitySharingManager *)arg1 ;
-(void)friendListDidUpdate:(id)arg1 ;
-(void)friendListDidLoadCompetitions;
@end

