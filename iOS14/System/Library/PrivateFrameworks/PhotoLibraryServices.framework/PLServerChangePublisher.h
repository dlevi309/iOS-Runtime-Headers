/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)publishChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 transaction:(id)arg3 ;
-(void)unpauseLaunchEventNotifications;
-(void)_postChangeHubNotification;
-(void)pauseLaunchEventNotifications;
-(void)_postWatchUpdateNotification;
-(void)_postWatchUpdateNotificationIfPending;
-(void)distributeChangeEvent:(id)arg1 transaction:(id)arg2 ;
-(void)_postWatchUpdateNotificationIfNotPaused;
-(void)dealloc;
@end

