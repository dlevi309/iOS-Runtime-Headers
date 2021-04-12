/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKConcept, NSArray, HKInspectableValue;

@interface HKCodedValue : NSObject <NSSecureCoding, NSCopying> {

	HKConcept* _concept;
	NSArray* _codings;
	HKInspectableValue* _value;
	NSArray* _referenceRanges;

}

@property (nonatomic,copy,readonly) NSArray * codings;                       //@synthesize codings=_codings - In the implementation block
@property (nonatomic,copy,readonly) HKConcept * concept; 
@property (nonatomic,copy,readonly) HKInspectableValue * value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,copy,readonly) NSArray * referenceRanges;               //@synthesize referenceRanges=_referenceRanges - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)codedValueWithCodings:(id)arg1 value:(id)arg2 referenceRanges:(id)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKInspectableValue *)value;
-(id)initWithCodings:(id)arg1 value:(id)arg2 referenceRanges:(id)arg3 ;
-(id)chartableCodedQuantityWithError:(id*)arg1 ;
-(void)_setConcept:(id)arg1 ;
-(HKConcept *)concept;
-(id)chartableCodedQuantitySetWithDate:(id)arg1 error:(id*)arg2 ;
-(NSArray *)codings;
-(NSArray *)referenceRanges;
@end

