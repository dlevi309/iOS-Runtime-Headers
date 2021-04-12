/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKObjectType.h>

@interface HKCharacteristicType : HKObjectType
-(BOOL)_validateCharacteristic:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateDateOfBirth:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateBiologicalSex:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateBloodType:(id)arg1 error:(id*)arg2 ;
-(id)_canoncialUnit;
-(BOOL)_validateQuantity:(id)arg1 withCompatibleUnit:(id)arg2 error:(id*)arg3 ;
-(BOOL)_validateFitzpatrickSkinType:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateWheelchairUse:(id)arg1 error:(id*)arg2 ;
-(id)_relatedQuantityType;
-(id)_relatedCategoryType;
-(id)_relatedSampleForInsertionWithCharacteristicValue:(id)arg1 ;
@end

