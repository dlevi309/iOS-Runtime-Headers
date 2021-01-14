/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/


@interface STDeviceUnlockStateListener : NSObject {

	int _notifyToken;
	/*^block*/id _lockStateChangeHandler;

}

@property (nonatomic,copy) id lockStateChangeHandler;              //@synthesize lockStateChangeHandler=_lockStateChangeHandler - In the implementation block
@property (nonatomic,readonly) BOOL deviceIsLocked; 
-(id)init;
-(BOOL)deviceIsLocked;
-(void)dealloc;
-(id)lockStateChangeHandler;
-(void)setLockStateChangeHandler:(id)arg1 ;
@end

