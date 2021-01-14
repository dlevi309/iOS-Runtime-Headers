/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKObjectType.h>

@interface HKCharacteristicType : HKObjectType
-(BOOL)_validateWheelchairUse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateActivityMoveMode:(id)arg1 error:(id*)arg2 ;
-(id)_relatedSampleForInsertionWithCharacteristicValue:(id)arg1 ;
-(BOOL)_validateCharacteristic:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateBiologicalSex:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateCardioFitnessMedicationsUse:(id)arg1 error:(id*)arg2 ;
-(id)_relatedCategoryType;
-(BOOL)_validateFitzpatrickSkinType:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateQuantity:(id)arg1 withCompatibleUnit:(id)arg2 error:(id*)arg3 ;
-(BOOL)_validateBloodType:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateDateOfBirth:(id)arg1 error:(id*)arg2 ;
-(id)_canoncialUnit;
-(id)_relatedQuantityType;
@end

