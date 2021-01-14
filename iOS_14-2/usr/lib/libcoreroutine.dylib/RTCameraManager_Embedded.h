/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTCameraManager.h>

@class RTDarwinNotificationHelper;

@interface RTCameraManager_Embedded : RTCameraManager {

	RTDarwinNotificationHelper* _notificationHelper;

}

@property (nonatomic,readonly) RTDarwinNotificationHelper * notificationHelper;              //@synthesize notificationHelper=_notificationHelper - In the implementation block
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)_shutdown;
-(id)init;
-(void)handleCameraPowerNotification:(id)arg1 ;
-(void)_handleCameraPowerNotification:(id)arg1 ;
-(RTDarwinNotificationHelper *)notificationHelper;
-(void)dealloc;
@end

