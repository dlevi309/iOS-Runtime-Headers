/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBAlertItem.h>

@interface SBLowPowerAlertItem : SBAlertItem {

	unsigned _talkLevel;

}
+(void)initialize;
+(void)setBatteryLevel:(unsigned)arg1 ;
+(BOOL)_shouldIgnoreChangeToBatteryLevel:(unsigned)arg1 ;
+(unsigned)_thresholdForLevel:(unsigned)arg1 ;
-(id)init;
-(id)initWithLevel:(unsigned)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)shouldShowInLockScreen;
-(BOOL)shouldShowInEmergencyCall;
-(BOOL)wakeDisplay;
-(void)_enableLowPowerMode;
@end

