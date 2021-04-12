/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTCameraManagerNotificationCameraPowerChanged : RTNotification {

	long long _powerState;
	long long _cameraType;

}

@property (nonatomic,readonly) long long powerState;              //@synthesize powerState=_powerState - In the implementation block
@property (nonatomic,readonly) long long cameraType;              //@synthesize cameraType=_cameraType - In the implementation block
-(long long)cameraType;
-(long long)powerState;
-(id)initWithCameraType:(long long)arg1 powerState:(long long)arg2 ;
@end

