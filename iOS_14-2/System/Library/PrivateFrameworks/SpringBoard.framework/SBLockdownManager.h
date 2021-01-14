/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_resetActivationState;
-(void)_setupActivationState;
-(int)lockdownState;
-(BOOL)brickedDevice;
@end

