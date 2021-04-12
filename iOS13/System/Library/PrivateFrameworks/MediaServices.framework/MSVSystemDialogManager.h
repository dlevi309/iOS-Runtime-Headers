/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/


@protocol OS_dispatch_queue;
#import <MediaServices/MediaServices-Structs.h>
@class NSObject;

@interface MSVSystemDialogManager : NSObject {

	CFDictionaryRef _registeredSystemDialogs;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)registerSystemDialog:(id)arg1 forUserNotification:(CFUserNotificationRef)arg2 ;
-(id)systemDialogForUserNotification:(CFUserNotificationRef)arg1 ;
-(void)unregisterSystemDialogWithUserNotification:(CFUserNotificationRef)arg1 ;
@end

