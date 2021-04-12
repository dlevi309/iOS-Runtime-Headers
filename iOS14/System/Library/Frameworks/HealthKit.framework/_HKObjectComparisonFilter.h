/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/_HKComparisonFilter.h>

@class NSString;

@interface _HKObjectComparisonFilter : _HKComparisonFilter {

	BOOL _compareForLocalDevice;
	NSString* _devicePropertyName;
	NSString* _metadataKey;

}
+(id)allowedDataTypeClassesForKeyPath:(id)arg1 ;
+(BOOL)isSupportedDevicePropertyKey:(id)arg1 ;
+(BOOL)allowsEmptyContainerValuesForKeyPath:(id)arg1 ;
+(long long)enumRepresentationForKeyPath:(id)arg1 ;
+(BOOL)isValidValue:(id)arg1 forKeyPath:(id)arg2 operatorType:(unsigned long long)arg3 dataTypes:(id)arg4 error:(id*)arg5 ;
+(BOOL)allowsEmptyDataTypesSetForKeyPath:(id)arg1 ;
+(id)allowedValueClassesForKeyPath:(id)arg1 ;
+(BOOL)isAllowedPredicateOperatorType:(unsigned long long)arg1 forKeyPath:(id)arg2 ;
+(BOOL)isSupportedKeyPath:(id)arg1 ;
-(void)_configureForKeyPathSource;
-(void)_configureForKeyPathDeviceProperty;
-(void)_configureForMetdataKeyPath;
-(BOOL)_acceptsDataObjectWithValue:(id)arg1 ;
-(BOOL)_acceptsDataObjectWithSource:(id)arg1 ;
-(BOOL)_acceptsDataObjectWithAppleWatchSource:(id)arg1 ;
-(BOOL)_acceptsDataObjectWithContributor:(id)arg1 ;
-(BOOL)_acceptsDataObjectWithCreationTime:(double)arg1 ;
-(BOOL)_acceptsDataObjectComparingDeviceProperty:(id)arg1 ;
-(BOOL)_acceptsDataObjectWithMetadata:(id)arg1 ;
-(void)configureInMemoryFilter;
-(BOOL)acceptsDataObject:(id)arg1 ;
@end

