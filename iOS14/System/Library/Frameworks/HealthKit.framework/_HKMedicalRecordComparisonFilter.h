/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/_HKComparisonFilter.h>

@interface _HKMedicalRecordComparisonFilter : _HKComparisonFilter
+(id)allowedDataTypeClassesForKeyPath:(id)arg1 ;
+(long long)enumRepresentationForKeyPath:(id)arg1 ;
+(id)allowedValueClassesForKeyPath:(id)arg1 ;
+(BOOL)isAllowedPredicateOperatorType:(unsigned long long)arg1 forKeyPath:(id)arg2 ;
+(BOOL)isSupportedKeyPath:(id)arg1 ;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(BOOL)_acceptsRecordWithDate:(id)arg1 ;
-(BOOL)_acceptsRecordWithState:(unsigned long long)arg1 ;
@end

