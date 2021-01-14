/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKAxisLabelDimensionScalar.h>

@class HKDisplayTypeValueFormatter, HKDisplayType, HKUnitPreferenceController;

@interface HKAxisLabelDimensionDisplayType : HKAxisLabelDimensionScalar {

	HKDisplayTypeValueFormatter* _valueFormatter;
	HKDisplayType* _displayType;
	HKUnitPreferenceController* _unitController;

}

@property (nonatomic,retain) HKDisplayTypeValueFormatter * valueFormatter;              //@synthesize valueFormatter=_valueFormatter - In the implementation block
@property (nonatomic,retain) HKDisplayType * displayType;                               //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,retain) HKUnitPreferenceController * unitController;               //@synthesize unitController=_unitController - In the implementation block
-(HKUnitPreferenceController *)unitController;
-(HKDisplayType *)displayType;
-(void)setDisplayType:(HKDisplayType *)arg1 ;
-(HKDisplayTypeValueFormatter *)valueFormatter;
-(void)setValueFormatter:(HKDisplayTypeValueFormatter *)arg1 ;
-(void)setUnitController:(HKUnitPreferenceController *)arg1 ;
-(id)stringForLocation:(id)arg1 ;
-(id)initWithDisplayType:(id)arg1 unitPreferencesController:(id)arg2 ;
@end

