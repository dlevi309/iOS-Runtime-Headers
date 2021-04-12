/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLChangePublisher.h>

@class NSString;

@interface PLServerChangePublisher : NSObject <PLChangePublisher> {

	Aq _postCount;
	AB _hasPendingWatchNotification;
	AB _suppressWatchNotification;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)pauseLaunchEventNotifications;
-(void)unpauseLaunchEventNotifications;
-(id)publishChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 transaction:(id)arg3 ;
-(void)distributeChangeEvent:(id)arg1 transaction:(id)arg2 ;
-(void)_postChangeHubNotification;
-(void)_postWatchUpdateNotificationIfNotPaused;
-(void)_postWatchUpdateNotificationIfPending;
-(void)_postWatchUpdateNotification;
@end

