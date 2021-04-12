/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)unitFromString:(id)arg1 ;
+(id)_uniquedUnitWithPrefix:(id)arg1 rootUnit:(id)arg2 ;
+(id)_uniquedRootUnit:(id)arg1 ;
+(id)_uniquedUnitWithPrefix:(id)arg1 conversionConstant:(id)arg2 rootUnit:(id)arg3 ;
+(id)_uniquedRootUnitFromDefinition:(SCD_Struct_HK22)arg1 ;
+(id)_rootUnitWithDefinition:(SCD_Struct_HK22)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(_HKBaseDimension *)dimension;
-(id)unitString;
-(id)_baseUnits;
-(id)_computeBaseUnitReductionAndProportionalSize:(double*)arg1 withCycleSet:(id)arg2 ;
-(double)proportionalSize;
-(id)_unitByPrefixing:(id)arg1 withConversionConstant:(id)arg2 ;
-(id)_initWithUnitString:(id)arg1 proportionalSize:(double)arg2 scaleOffset:(double)arg3 ;
@end

