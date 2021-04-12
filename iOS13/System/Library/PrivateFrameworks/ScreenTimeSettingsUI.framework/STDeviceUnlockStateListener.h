/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/


@interface STDeviceUnlockStateListener : NSObject {

	int _notifyToken;
	/*^block*/id _lockStateChangeHandler;

}

@property (nonatomic,copy) id lockStateChangeHandler;              //@synthesize lockStateChangeHandler=_lockStateChangeHandler - In the implementation block
@property (nonatomic,readonly) BOOL deviceIsLocked; 
-(id)init;
-(void)dealloc;
-(BOOL)deviceIsLocked;
-(id)lockStateChangeHandler;
-(void)setLockStateChangeHandler:(id)arg1 ;
@end

