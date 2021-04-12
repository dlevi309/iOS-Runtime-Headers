/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(HKDisplayType *)displayType;
-(HKUnitPreferenceController *)unitController;
-(id)stringForLocation:(id)arg1 ;
-(double)niceStepSizeLargerThan:(double)arg1 ;
-(double)ticksPerStepSize:(double)arg1 ;
-(void)setStepSizeForLabels:(double)arg1 ;
-(HKStepSizeTableEntryDefn*)_findStepSize:(double)arg1 allowEqual:(BOOL)arg2 ;
-(id)initWithStepSizeTable:(HKStepSizeTableEntryDefn*)arg1 stepSizeTableSize:(long long)arg2 displayType:(id)arg3 unitController:(id)arg4 ;
-(HKStepSizeTableEntryDefn*)stepSizeTable;
-(long long)stepSizeTableSize;
@end

