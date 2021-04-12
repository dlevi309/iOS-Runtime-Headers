/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)factorizationFromString:(id)arg1 factorGrammar:(id)arg2 ;
+(id)factorization;
+(id)factorizationWithFactor:(id)arg1 exponent:(long long)arg2 ;
+(id)factorizationWithFactorsAndExponents:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)unitString;
-(unsigned long long)factorCount;
-(id)anyFactor;
-(long long)exponentForFactor:(id)arg1 ;
-(id)factorizationByRaisingToExponent:(long long)arg1 ;
-(void)enumerateFactorsWithHandler:(/*^block*/id)arg1 ;
-(void)_multiplyByFactor:(id)arg1 exponent:(long long)arg2 ;
-(void)_enumerateFactorsWithHandler:(/*^block*/id)arg1 ;
-(void)_multiplyByFactorization:(id)arg1 ;
-(id)reciprocal;
-(id)factorizationByMultiplying:(id)arg1 ;
-(void)_raiseToExponent:(long long)arg1 ;
-(long long)_exponentForFactor:(id)arg1 ;
-(id)factorizationByDividing:(id)arg1 ;
@end

