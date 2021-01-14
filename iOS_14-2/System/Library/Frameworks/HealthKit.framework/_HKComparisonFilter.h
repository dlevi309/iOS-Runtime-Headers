/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>
#import <libobjc.A.dylib/HKComparisonFilter.h>

@class NSString, NSSet;

@interface _HKComparisonFilter : _HKFilter <HKComparisonFilter> {

	atomic_flag _hasBeenConfiguredFlag;
	unsigned _applicationSDKVersion;
	NSString* _keyPath;
	unsigned long long _operatorType;
	id _value;
	NSSet* _dataTypes;
	long long _keyPathIntegerValue;

}

@property (nonatomic,copy,readonly) NSString * keyPath;                      //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) unsigned long long operatorType;              //@synthesize operatorType=_operatorType - In the implementation block
@property (nonatomic,copy,readonly) id value;                                //@synthesize value=_value - In the implementation block
@property (nonatomic,copy,readonly) NSSet * dataTypes;                       //@synthesize dataTypes=_dataTypes - In the implementation block
@property (nonatomic,readonly) unsigned applicationSDKVersion;               //@synthesize applicationSDKVersion=_applicationSDKVersion - In the implementation block
@property (nonatomic,readonly) long long keyPathIntegerValue;                //@synthesize keyPathIntegerValue=_keyPathIntegerValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)allowedDataTypeClassesForKeyPath:(id)arg1 ;
+(BOOL)areValidTypes:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
+(id)_filterForKeyPath:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 applicationSDKVersion:(unsigned)arg5 ;
+(BOOL)allowsEmptyContainerValuesForKeyPath:(id)arg1 ;
+(BOOL)_isValidValue:(id)arg1 forKeyPath:(id)arg2 allowedClases:(id)arg3 error:(id*)arg4 ;
+(long long)enumRepresentationForKeyPath:(id)arg1 ;
+(BOOL)isValidValue:(id)arg1 forKeyPath:(id)arg2 operatorType:(unsigned long long)arg3 dataTypes:(id)arg4 error:(id*)arg5 ;
+(BOOL)allowsEmptyDataTypesSetForKeyPath:(id)arg1 ;
+(id)filterForKeyPath:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 ;
+(id)allowedValueClassesForKeyPath:(id)arg1 ;
+(BOOL)isAllowedPredicateOperatorType:(unsigned long long)arg1 forKeyPath:(id)arg2 ;
+(BOOL)isSupportedKeyPath:(id)arg1 ;
+(BOOL)supportsKeyPath:(id)arg1 forTypes:(id)arg2 ;
-(unsigned)applicationSDKVersion;
-(id)_initWithKeyPath:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 applicationSDKVersion:(unsigned)arg5 ;
-(unsigned long long)operatorType;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)configureInMemoryFilter;
-(NSString *)keyPath;
-(NSSet *)dataTypes;
-(long long)keyPathIntegerValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)value;
-(BOOL)isEqual:(id)arg1 ;
@end

