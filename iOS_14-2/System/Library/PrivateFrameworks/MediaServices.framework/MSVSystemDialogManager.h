/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)registerSystemDialog:(id)arg1 forUserNotification:(CFUserNotificationRef)arg2 ;
-(id)systemDialogForUserNotification:(CFUserNotificationRef)arg1 ;
-(void)unregisterSystemDialogWithUserNotification:(CFUserNotificationRef)arg1 ;
-(void)dealloc;
@end

