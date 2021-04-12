/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic,__weak) HKDisplayType * displayType;                       //@synthesize displayType=_displayType - In the implementation block
-(HKUnitPreferenceController *)unitController;
-(HKDisplayType *)displayType;
-(void)setDisplayType:(HKDisplayType *)arg1 ;
-(id)attributedStringForValue:(id)arg1 ;
-(id)_unitNameFromUnit:(id)arg1 number:(id)arg2 ;
-(void)setUnitController:(HKUnitPreferenceController *)arg1 ;
-(UIFont *)minorFont;
-(id)formattedStringWithValue:(double)arg1 unitString:(id)arg2 showUnit:(BOOL)arg3 ;
-(id)_formattedStringForValue:(id)arg1 ;
-(UIFont *)majorFont;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2 ;
-(id)formattedUnitStringForChartData:(id)arg1 ;
-(id)formattedValueStringForChartData:(id)arg1 options:(long long)arg2 ;
-(id)_formattedStringWithValue:(double)arg1 unit:(id)arg2 showUnit:(BOOL)arg3 ;
-(void)setMajorFont:(UIFont *)arg1 ;
-(void)setMinorFont:(UIFont *)arg1 ;
@end

