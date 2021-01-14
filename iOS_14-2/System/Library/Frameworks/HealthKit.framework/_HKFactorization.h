/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMapTable;

@interface _HKFactorization : NSObject <NSCopying, NSSecureCoding> {

	NSMapTable* _factors;

}
+(BOOL)supportsSecureCoding;
+(id)factorization;
+(id)factorizationFromString:(id)arg1 factorGrammar:(id)arg2 ;
+(id)factorizationWithFactor:(id)arg1 exponent:(long long)arg2 ;
+(id)factorizationWithFactorsAndExponents:(id)arg1 ;
-(id)factorizationByRaisingToExponent:(long long)arg1 ;
-(id)factorizationByMultiplying:(id)arg1 ;
-(id)unitString;
-(id)init;
-(id)anyFactor;
-(id)factorizationByDividing:(id)arg1 ;
-(void)_raiseToExponent:(long long)arg1 ;
-(void)enumerateFactorsWithHandler:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)reciprocal;
-(void)_multiplyByFactor:(id)arg1 exponent:(long long)arg2 ;
-(id)description;
-(unsigned long long)factorCount;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)exponentForFactor:(id)arg1 ;
-(void)_multiplyByFactorization:(id)arg1 ;
-(long long)_exponentForFactor:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)_enumerateFactorsWithHandler:(/*^block*/id)arg1 ;
@end

