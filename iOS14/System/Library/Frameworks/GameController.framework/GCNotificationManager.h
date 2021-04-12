/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/


@class UNUserNotificationCenter;

@interface GCNotificationManager : NSObject {

	UNUserNotificationCenter* _userNotificationCenter;
	BOOL _isPermissionGranted;

}
+(id)sharedInstance;
-(id)init;
-(void)requestNotification:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)requestNotificationImpl:(id)arg1 withReply:(/*^block*/id)arg2 ;
@end

