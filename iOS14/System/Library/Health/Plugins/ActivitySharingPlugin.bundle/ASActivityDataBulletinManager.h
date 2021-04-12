/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <libobjc.A.dylib/ASActivitySharingManagerReadyObserver.h>

@protocol ASBulletinPostingManager;
@class NSString;

@interface ASActivityDataBulletinManager : NSObject <ASActivitySharingManagerReadyObserver> {

	id<ASBulletinPostingManager> _notificationPostingManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)activitySharingManagerReady:(id)arg1 ;
-(void)showActivityNotifications:(id)arg1 withPostingStyle:(long long)arg2 ;
@end

