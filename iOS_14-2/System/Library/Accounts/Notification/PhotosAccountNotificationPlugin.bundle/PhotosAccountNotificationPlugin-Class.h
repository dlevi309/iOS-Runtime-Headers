/*
* Generated on Thursday, January 14, 2021 at 2:29:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Accounts/Notification/PhotosAccountNotificationPlugin.bundle/PhotosAccountNotificationPlugin
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface PhotosAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {

	NSObject*<OS_dispatch_queue> _unboostingQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)libraryBundle;
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)_setPhotoStreamEnabled:(BOOL)arg1 ;
-(BOOL)_isCloudPhotoAutoEnableForAccount:(id)arg1 ;
-(void)_setiCPLEnabled:(BOOL)arg1 ;
-(void)_setSharedAlbumEnabled:(BOOL)arg1 ;
@end

