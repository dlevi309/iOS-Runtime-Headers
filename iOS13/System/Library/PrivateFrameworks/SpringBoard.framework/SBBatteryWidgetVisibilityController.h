/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@interface SBBatteryWidgetVisibilityController : NSObject
+(id)sharedInstance;
-(id)init;
-(BOOL)_isVisible;
-(void)_connectedDevicesDidChange;
-(BOOL)_isAlwaysVisible;
-(BOOL)_containsExternalBattery;
-(void)_setVisibleIfNecessary:(BOOL)arg1 ;
-(void)_makeVisible;
@end

