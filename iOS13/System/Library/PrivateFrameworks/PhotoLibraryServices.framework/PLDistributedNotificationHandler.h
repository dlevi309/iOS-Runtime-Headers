/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
@class NSObject, PLPhotoLibraryBundleController;

@interface PLDistributedNotificationHandler : NSObject {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	PLPhotoLibraryBundleController* _libraryBundleController;

}
-(id)initWithLibraryBundleController:(id)arg1 ;
-(void)registerForNotifications;
-(void)_handleNotification:(id)arg1 ;
-(void)_handleCloudPhotoNotification;
-(void)_openSystemPhotoLibrary;
@end

