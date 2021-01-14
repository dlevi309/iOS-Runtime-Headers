/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(ASActivitySharingManager *)activitySharingManager;
-(void)setActivitySharingManager:(ASActivitySharingManager *)arg1 ;
-(BOOL)_shouldListenForUpdates;
-(BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(void)_queue_stop;
-(void)friendListDidUpdate:(id)arg1 ;
-(void)friendListDidLoadCompetitions;
@end

