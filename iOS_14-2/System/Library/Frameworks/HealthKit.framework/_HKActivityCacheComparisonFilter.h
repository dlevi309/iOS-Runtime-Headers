/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/_HKComparisonFilter.h>

@interface _HKActivityCacheComparisonFilter : _HKComparisonFilter {

	long long _cacheIndex;

}

@property (nonatomic,readonly) long long cacheIndex;              //@synthesize cacheIndex=_cacheIndex - In the implementation block
+(id)allowedDataTypeClassesForKeyPath:(id)arg1 ;
+(BOOL)areValidTypes:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
+(BOOL)isValidValue:(id)arg1 forKeyPath:(id)arg2 operatorType:(unsigned long long)arg3 dataTypes:(id)arg4 error:(id*)arg5 ;
+(id)filterWithOperatorType:(unsigned long long)arg1 cacheIndex:(long long)arg2 ;
+(id)allowedValueClassesForKeyPath:(id)arg1 ;
+(BOOL)isSupportedKeyPath:(id)arg1 ;
-(long long)cacheIndex;
-(void)configureInMemoryFilter;
-(BOOL)acceptsDataObject:(id)arg1 ;
@end

