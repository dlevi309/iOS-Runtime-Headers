/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@class NSString;

@interface _HKProductTypeObjectFilter : _HKFilter {

	NSString* _productType;
	unsigned long long _operatorType;

}

@property (nonatomic,readonly) NSString * productType;                       //@synthesize productType=_productType - In the implementation block
@property (nonatomic,readonly) unsigned long long operatorType;              //@synthesize operatorType=_operatorType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 ;
+(BOOL)_supportsOperatorType:(unsigned long long)arg1 ;
+(id)_filterMatchingProductType:(id)arg1 operator:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)operatorType;
-(NSString *)productType;
-(BOOL)acceptsDataObject:(id)arg1 ;
@end

