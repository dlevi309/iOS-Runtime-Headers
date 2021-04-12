/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/_HKComparisonFilter.h>

@class HKSampleType;

@interface _HKSampleComparisonFilter : _HKComparisonFilter {

	double _comparisonTime;
	HKSampleType* _anySampleType;

}
+(id)allowedDataTypeClassesForKeyPath:(id)arg1 ;
+(BOOL)areValidTypes:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
+(id)endDateFilterWithOperatorType:(unsigned long long)arg1 date:(id)arg2 dataTypes:(id)arg3 ;
+(long long)enumRepresentationForKeyPath:(id)arg1 ;
+(BOOL)allowsEmptyDataTypesSetForKeyPath:(id)arg1 ;
+(id)allowedValueClassesForKeyPath:(id)arg1 ;
+(id)startDateFilterWithOperatorType:(unsigned long long)arg1 date:(id)arg2 dataTypes:(id)arg3 ;
+(BOOL)isAllowedPredicateOperatorType:(unsigned long long)arg1 forKeyPath:(id)arg2 ;
+(BOOL)isSupportedKeyPath:(id)arg1 ;
-(long long)acceptsDataObjectWithStartTimestamp:(double)arg1 endTimestamp:(double)arg2 valueInCanonicalUnit:(double)arg3 ;
-(void)configureInMemoryFilter;
-(BOOL)acceptsDataObject:(id)arg1 ;
@end

