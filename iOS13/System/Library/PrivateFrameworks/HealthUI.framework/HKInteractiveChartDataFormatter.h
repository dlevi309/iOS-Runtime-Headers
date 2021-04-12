/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class UIFont, HKUnitPreferenceController, HKDisplayType;

@interface HKInteractiveChartDataFormatter : NSObject {

	UIFont* _majorFont;
	UIFont* _minorFont;
	HKUnitPreferenceController* _unitController;
	HKDisplayType* _displayType;

}

@property (nonatomic,retain) UIFont * majorFont;                                       //@synthesize majorFont=_majorFont - In the implementation block
@property (nonatomic,retain) UIFont * minorFont;                                       //@synthesize minorFont=_minorFont - In the implementation block
@property (nonatomic,retain) HKUnitPreferenceController * unitController;              //@synthesize unitController=_unitController - In the implementation block
@property (nonatomic,retain) HKDisplayType * displayType;                              //@synthesize displayType=_displayType - In the implementation block
-(HKDisplayType *)displayType;
-(void)setDisplayType:(HKDisplayType *)arg1 ;
-(HKUnitPreferenceController *)unitController;
-(id)_unitNameFromUnit:(id)arg1 number:(id)arg2 ;
-(UIFont *)majorFont;
-(UIFont *)minorFont;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 ;
-(void)setUnitController:(HKUnitPreferenceController *)arg1 ;
-(id)_formattedStringForValue:(id)arg1 ;
-(id)formattedUnitStringForChartData:(id)arg1 ;
-(id)formattedValueStringForChartData:(id)arg1 options:(long long)arg2 ;
-(id)_formattedStringWithValue:(double)arg1 unit:(id)arg2 showUnit:(BOOL)arg3 ;
-(void)setMajorFont:(UIFont *)arg1 ;
-(void)setMinorFont:(UIFont *)arg1 ;
@end

