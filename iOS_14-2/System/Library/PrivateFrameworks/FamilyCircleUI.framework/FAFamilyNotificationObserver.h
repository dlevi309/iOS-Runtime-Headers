/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/


@interface FAFamilyNotificationObserver : NSObject {

	BOOL _observing;
	/*^block*/id _notificationHandler;

}
+(void)initialize;
+(id)familyNotificationObserverWithNotificationHandler:(/*^block*/id)arg1 ;
-(void)stopObserving;
-(id)init;
-(void)_startObserving;
-(void)dealloc;
-(id)_initWithNotificationHandler:(/*^block*/id)arg1 ;
-(void)_didReceiveNotification;
@end

