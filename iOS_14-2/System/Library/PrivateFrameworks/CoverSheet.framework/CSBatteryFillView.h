/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBatterySaverModeActive:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 isInternalBattery:(BOOL)arg2 lowBatteryLevel:(long long)arg3 ;
-(void)setChargePercentage:(long long)arg1 ;
@end

