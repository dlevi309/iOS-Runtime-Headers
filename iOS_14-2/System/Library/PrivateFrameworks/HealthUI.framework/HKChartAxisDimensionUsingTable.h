/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKAxisLabelDimension.h>

@class HKDisplayType, HKUnitPreferenceController;

@interface HKChartAxisDimensionUsingTable : NSObject <HKAxisLabelDimension> {

	HKStepSizeTableEntryDefn* _stepSizeTable;
	long long _stepSizeTableSize;
	HKDisplayType* _displayType;
	HKUnitPreferenceController* _unitController;

}

@property (readonly) HKStepSizeTableEntryDefn* stepSizeTable;                  //@synthesize stepSizeTable=_stepSizeTable - In the implementation block
@property (readonly) long long stepSizeTableSize;                              //@synthesize stepSizeTableSize=_stepSizeTableSize - In the implementation block
@property (readonly) HKDisplayType * displayType;                              //@synthesize displayType=_displayType - In the implementation block
@property (readonly) HKUnitPreferenceController * unitController;              //@synthesize unitController=_unitController - In the implementation block
-(HKUnitPreferenceController *)unitController;
-(HKDisplayType *)displayType;
-(id)stringForLocation:(id)arg1 ;
-(HKStepSizeTableEntryDefn*)_findStepSize:(double)arg1 allowEqual:(BOOL)arg2 ;
-(double)niceStepSizeLargerThan:(double)arg1 ;
-(double)ticksPerStepSize:(double)arg1 ;
-(void)setStepSizeForLabels:(double)arg1 ;
-(id)initWithStepSizeTable:(HKStepSizeTableEntryDefn*)arg1 stepSizeTableSize:(long long)arg2 displayType:(id)arg3 unitController:(id)arg4 ;
-(HKStepSizeTableEntryDefn*)stepSizeTable;
-(long long)stepSizeTableSize;
@end

