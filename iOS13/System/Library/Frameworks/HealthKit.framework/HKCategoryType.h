/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKSampleType.h>

@interface HKCategoryType : HKSampleType
+(id)_categoryTypeWithCode:(long long)arg1 ;
-(long long)_defaultValue;
-(id)_predicateForSDKVersion:(unsigned)arg1 ;
-(BOOL)_validateMetadata:(id)arg1 sample:(id)arg2 error:(id*)arg3 ;
-(BOOL)_acceptsValue:(long long)arg1 ;
-(long long)_categoryValueForValue:(long long)arg1 ;
@end

