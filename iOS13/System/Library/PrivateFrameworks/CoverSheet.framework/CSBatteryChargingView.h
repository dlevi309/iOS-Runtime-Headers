/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSCoverSheetViewBase.h>

@class _UILegibilitySettings;

@interface CSBatteryChargingView : CSCoverSheetViewBase {

	_UILegibilitySettings* _legibilitySettings;
	double _alignmentPercent;

}

@property (assign,nonatomic) BOOL batteryVisible; 
@property (nonatomic,readonly) long long batteryCount; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) double desiredVisibilityDuration; 
@property (assign,nonatomic) double alignmentPercent;                                 //@synthesize alignmentPercent=_alignmentPercent - In the implementation block
+(id)batteryChargingViewWithSingleBattery;
+(id)batteryChargingViewWithDoubleBattery;
+(id)maskImageNameForChargingBattery;
+(id)maskImageNameForInternalChargingBattery;
+(id)maskImageNameForExternalChargingBattery;
-(id)initWithFrame:(CGRect)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setAlignmentPercent:(double)arg1 ;
-(double)alignmentPercent;
-(id)_chargePercentFont;
-(void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2 ;
-(void)setSecondaryBatteryText:(id)arg1 forBattery:(id)arg2 ;
-(BOOL)batteryVisible;
-(long long)batteryCount;
-(double)desiredVisibilityDuration;
-(void)setBatteryVisible:(BOOL)arg1 ;
-(id)_updateChargeString:(id)arg1 oldLabel:(id)arg2 ;
-(double)_batteryOriginYForBatteryHeight:(double)arg1 ;
@end

