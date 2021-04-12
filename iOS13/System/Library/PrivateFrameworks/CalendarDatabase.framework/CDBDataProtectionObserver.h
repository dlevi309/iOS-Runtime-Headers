/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
*/


@class CalDeviceLockObserver;

@interface CDBDataProtectionObserver : NSObject {

	/*^block*/id _stateChangedCallback;
	CalDeviceLockObserver* _deviceLockObserver;

}

@property (nonatomic,retain) CalDeviceLockObserver * deviceLockObserver;              //@synthesize deviceLockObserver=_deviceLockObserver - In the implementation block
@property (nonatomic,copy) id stateChangedCallback;                                   //@synthesize stateChangedCallback=_stateChangedCallback - In the implementation block
@property (nonatomic,readonly) BOOL dataIsAccessible; 
+(id)stateChangedNotificationName;
-(id)init;
-(void)setStateChangedCallback:(id)arg1 ;
-(id)stateChangedCallback;
-(BOOL)dataIsAccessible;
-(void)_deviceLockStateChanged;
-(void)setDeviceLockObserver:(CalDeviceLockObserver *)arg1 ;
-(CalDeviceLockObserver *)deviceLockObserver;
@end

