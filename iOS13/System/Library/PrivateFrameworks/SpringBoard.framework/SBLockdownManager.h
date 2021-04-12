/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBDismissOnlyAlertItem, NSString;

@interface SBLockdownManager : NSObject {

	int _state;
	BOOL _settingUpActivationState;
	SBDismissOnlyAlertItem* _activatingAlertItem;
	NSString* _unqiueDeviceIdentifier;

}
+(id)sharedInstance;
+(BOOL)_isDeveloperDevice;
-(id)init;
-(void)_setupActivationState;
-(int)lockdownState;
-(void)_resetActivationState;
-(BOOL)brickedDevice;
@end

