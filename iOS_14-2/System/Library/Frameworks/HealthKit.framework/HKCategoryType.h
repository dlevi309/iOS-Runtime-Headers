/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKSampleType.h>

@interface HKCategoryType : HKSampleType
+(id)_categoryTypeWithCode:(long long)arg1 ;
-(BOOL)_validateMetadata:(id)arg1 sample:(id)arg2 error:(id*)arg3 ;
-(id)_predicateForSDKVersion:(unsigned)arg1 ;
-(long long)_categoryValueForValue:(long long)arg1 ;
-(BOOL)_acceptsValue:(long long)arg1 ;
-(long long)_defaultValue;
@end

