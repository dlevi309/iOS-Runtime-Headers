/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKUnit.h>
#import <libobjc.A.dylib/_HKFactor.h>

@class NSString, _HKBaseDimension;

@interface HKBaseUnit : HKUnit <_HKFactor> {

	NSString* _unitString;
	NSString* _prefix;
	NSString* _root;
	BOOL _uniqued;
	double _proportionalSize;

}

@property (nonatomic,readonly) double proportionalSize;                   //@synthesize proportionalSize=_proportionalSize - In the implementation block
@property (nonatomic,readonly) _HKBaseDimension * dimension; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_uniquedRootUnit:(id)arg1 ;
+(id)_uniquedUnitWithPrefix:(id)arg1 rootUnit:(id)arg2 ;
+(id)_uniquedUnitWithPrefix:(id)arg1 conversionConstant:(id)arg2 rootUnit:(id)arg3 ;
+(id)_uniquedRootUnitFromDefinition:(SCD_Struct_HK25)arg1 ;
+(id)_rootUnitWithDefinition:(SCD_Struct_HK25)arg1 ;
+(id)unitFromString:(id)arg1 ;
-(id)unitString;
-(_HKBaseDimension *)dimension;
-(double)proportionalSize;
-(id)_unitByPrefixing:(id)arg1 withConversionConstant:(id)arg2 ;
-(id)_initWithUnitString:(id)arg1 proportionalSize:(double)arg2 scaleOffset:(double)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_baseUnits;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_computeBaseUnitReductionAndProportionalSize:(double*)arg1 withCycleSet:(id)arg2 ;
@end

