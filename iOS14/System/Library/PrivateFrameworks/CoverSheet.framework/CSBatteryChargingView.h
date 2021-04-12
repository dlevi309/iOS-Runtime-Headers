/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                       //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) double desiredVisibilityDuration; 
@property (nonatomic,readonly) double horizontalGapBetweenBatteryAndPercentLabel; 
@property (assign,nonatomic) double alignmentPercent;                                          //@synthesize alignmentPercent=_alignmentPercent - In the implementation block
+(id)batteryChargingViewWithSingleBattery;
+(id)batteryChargingViewWithDoubleBattery;
+(id)horizontalBatteryChargingViewForBatterySize:(CGSize)arg1 includeBoltImage:(BOOL)arg2 ;
+(id)batteryChargingRingViewWithConfiguration:(id)arg1 ;
+(id)maskImageNameForChargingBattery;
+(id)maskImageNameForInternalChargingBattery;
+(id)maskImageNameForExternalChargingBattery;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setAlignmentPercent:(double)arg1 ;
-(double)alignmentPercent;
-(_UILegibilitySettings *)legibilitySettings;
-(BOOL)batteryVisible;
-(void)setBatteryVisible:(BOOL)arg1 ;
-(double)desiredVisibilityDuration;
-(void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2 ;
-(void)setSecondaryBatteryText:(id)arg1 forBattery:(id)arg2 ;
-(void)performAnimation:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(double)horizontalGapBetweenBatteryAndPercentLabel;
-(id)_updateChargeString:(id)arg1 oldLabel:(id)arg2 ;
-(id)_chargePercentFont;
-(long long)batteryCount;
-(double)_batteryOriginYForBatteryHeight:(double)arg1 ;
@end

