/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <UIKitCore/UIView.h>

@interface CSBatteryFillView : UIView {

	long long _chargePercentage;
	long long _lowBatteryLevel;
	BOOL _isBatterySaverModeActive;
	BOOL _isInternalBattery;

}
-(void)drawRect:(CGRect)arg1 ;
-(void)setBatterySaverModeActive:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 isInternalBattery:(BOOL)arg2 lowBatteryLevel:(long long)arg3 ;
-(void)setChargePercentage:(long long)arg1 ;
@end

