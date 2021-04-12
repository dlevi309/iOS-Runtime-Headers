/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTCameraManager.h>

@class RTDarwinNotificationHelper;

@interface RTCameraManager_Embedded : RTCameraManager {

	RTDarwinNotificationHelper* _notificationHelper;

}

@property (nonatomic,readonly) RTDarwinNotificationHelper * notificationHelper;              //@synthesize notificationHelper=_notificationHelper - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_shutdown;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(RTDarwinNotificationHelper *)notificationHelper;
-(void)handleCameraPowerNotification:(id)arg1 ;
-(void)_handleCameraPowerNotification:(id)arg1 ;
@end

