/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol OS_dispatch_queue;
#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSMapTable, NSObject;

@interface ICUserNotificationManager : NSObject {

	NSMapTable* _contextForUserNotification;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}
+(id)sharedManager;
-(id)init;
-(void)displayUserNotification:(CFUserNotificationRef)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_handleCallbackForUserNotification:(CFUserNotificationRef)arg1 responseFlags:(unsigned long long)arg2 ;
@end

