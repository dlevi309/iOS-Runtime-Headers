/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/


@interface FAFamilyNotificationObserver : NSObject {

	BOOL _observing;
	/*^block*/id _notificationHandler;

}
+(void)initialize;
+(id)familyNotificationObserverWithNotificationHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)stopObserving;
-(void)_startObserving;
-(id)_initWithNotificationHandler:(/*^block*/id)arg1 ;
-(void)_didReceiveNotification;
@end

