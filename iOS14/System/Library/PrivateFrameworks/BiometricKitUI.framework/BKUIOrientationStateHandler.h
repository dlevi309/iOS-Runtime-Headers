/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/


@interface BKUIOrientationStateHandler : NSObject {

	int _rawOrientationToken;
	int _orientationLockToken;
	int _rotationLockNotificationToken;
	int _orientationNotificationToken;
	long long _lastKownOrientation;

}

@property (assign,nonatomic) int rawOrientationToken;                        //@synthesize rawOrientationToken=_rawOrientationToken - In the implementation block
@property (assign,nonatomic) int orientationLockToken;                       //@synthesize orientationLockToken=_orientationLockToken - In the implementation block
@property (assign,nonatomic) int rotationLockNotificationToken;              //@synthesize rotationLockNotificationToken=_rotationLockNotificationToken - In the implementation block
@property (assign,nonatomic) int orientationNotificationToken;               //@synthesize orientationNotificationToken=_orientationNotificationToken - In the implementation block
@property (assign,nonatomic) long long lastKownOrientation;                  //@synthesize lastKownOrientation=_lastKownOrientation - In the implementation block
+(unsigned long long)bkui_getState:(int)arg1 ;
-(id)init;
-(long long)rawDeviceOrientationIgnoringOrientationLocks;
-(void)dealloc;
-(void)_invalidateTokenIfNeeded:(int)arg1 ;
-(BOOL)rotationLockStatusIsLocked;
-(void)registerRotationObserver:(/*^block*/id)arg1 ;
-(void)registerRotationLockObserver:(/*^block*/id)arg1 ;
-(int)rawOrientationToken;
-(void)setRawOrientationToken:(int)arg1 ;
-(int)orientationLockToken;
-(void)setOrientationLockToken:(int)arg1 ;
-(int)rotationLockNotificationToken;
-(void)setRotationLockNotificationToken:(int)arg1 ;
-(int)orientationNotificationToken;
-(void)setOrientationNotificationToken:(int)arg1 ;
-(long long)lastKownOrientation;
-(void)setLastKownOrientation:(long long)arg1 ;
@end

