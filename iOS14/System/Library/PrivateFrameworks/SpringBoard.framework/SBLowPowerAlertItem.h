/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBAlertItem.h>

@interface SBLowPowerAlertItem : SBAlertItem {

	unsigned _talkLevel;

}
+(void)initialize;
+(BOOL)_shouldIgnoreChangeToBatteryLevel:(unsigned)arg1 ;
+(void)setBatteryLevel:(unsigned)arg1 ;
+(unsigned)_thresholdForLevel:(unsigned)arg1 ;
-(id)init;
-(id)initWithLevel:(unsigned)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)shouldShowInLockScreen;
-(BOOL)wakeDisplay;
-(BOOL)shouldShowInEmergencyCall;
-(void)_enableLowPowerMode;
@end

