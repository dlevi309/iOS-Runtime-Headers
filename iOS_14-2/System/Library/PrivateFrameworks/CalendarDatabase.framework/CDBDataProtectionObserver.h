/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CalDeviceLockObserver *)deviceLockObserver;
-(void)setStateChangedCallback:(id)arg1 ;
-(id)stateChangedCallback;
-(BOOL)dataIsAccessible;
-(void)setDeviceLockObserver:(CalDeviceLockObserver *)arg1 ;
-(void)_deviceLockStateChanged;
@end

