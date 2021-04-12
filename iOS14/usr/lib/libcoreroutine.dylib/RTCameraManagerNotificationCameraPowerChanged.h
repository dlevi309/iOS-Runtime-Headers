/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTCameraManagerNotificationCameraPowerChanged : RTNotification {

	long long _powerState;
	long long _cameraType;

}

@property (nonatomic,readonly) long long powerState;              //@synthesize powerState=_powerState - In the implementation block
@property (nonatomic,readonly) long long cameraType;              //@synthesize cameraType=_cameraType - In the implementation block
-(long long)powerState;
-(long long)cameraType;
-(id)initWithCameraType:(long long)arg1 powerState:(long long)arg2 ;
@end

