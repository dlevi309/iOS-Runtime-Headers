/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/_HKComparisonFilter.h>

@class NSRegularExpression;

@interface _HKCDADocumentSampleComparisonFilter : _HKComparisonFilter {

	NSRegularExpression* _comparisonExpression;

}
+(id)allowedDataTypeClassesForKeyPath:(id)arg1 ;
+(BOOL)areValidTypes:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
+(id)allowedValueClassesForKeyPath:(id)arg1 ;
+(BOOL)isAllowedPredicateOperatorType:(unsigned long long)arg1 forKeyPath:(id)arg2 ;
+(BOOL)isSupportedKeyPath:(id)arg1 ;
-(void)configureInMemoryFilter;
-(BOOL)acceptsDataObject:(id)arg1 ;
@end

