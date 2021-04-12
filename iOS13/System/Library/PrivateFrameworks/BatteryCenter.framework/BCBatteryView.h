/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BatteryCenter.framework/BatteryCenter
*/

#import <UIKitCore/_UIStaticBatteryView.h>

@interface BCBatteryView : _UIStaticBatteryView {

	BOOL _lowBattery;

}

@property (assign,getter=isLowBattery,nonatomic) BOOL lowBattery; 
-(id)init;
-(BOOL)isLowBattery;
-(id)initWithSizeCategory:(long long)arg1 ;
-(void)setLowBattery:(BOOL)arg1 ;
@end

