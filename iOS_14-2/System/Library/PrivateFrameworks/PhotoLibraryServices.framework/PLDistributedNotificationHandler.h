/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
@class NSObject, PLPhotoLibraryBundleController;

@interface PLDistributedNotificationHandler : NSObject {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	PLPhotoLibraryBundleController* _libraryBundleController;

}
-(void)_handleCloudPhotoNotification;
-(void)registerForNotifications;
-(id)initWithLibraryBundleController:(id)arg1 ;
-(void)_openSystemPhotoLibrary;
-(void)_handleNotification:(id)arg1 ;
@end

