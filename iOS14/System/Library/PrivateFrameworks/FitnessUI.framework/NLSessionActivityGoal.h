/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKQuantity;

@interface NLSessionActivityGoal : NSObject <NSSecureCoding> {

	double _doubleValue;
	unsigned long long _goalTypeIdentifier;

}

@property (assign,nonatomic) unsigned long long goalTypeIdentifier;              //@synthesize goalTypeIdentifier=_goalTypeIdentifier - In the implementation block
@property (nonatomic,retain) HKQuantity * value; 
+(BOOL)supportsSecureCoding;
+(id)goalWithGoalTypeIdentifier:(unsigned long long)arg1 value:(id)arg2 ;
+(id)goalFromURL:(id)arg1 ;
-(double)doubleValue;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setValue:(HKQuantity *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HKQuantity *)value;
-(BOOL)isEqual:(id)arg1 ;
-(double)_doubleValueForQuantity:(id)arg1 ;
-(id)_quantityForDoubleValue:(double)arg1 ;
-(unsigned long long)goalTypeIdentifier;
-(id)initWithGoalTypeIdentifier:(unsigned long long)arg1 value:(id)arg2 ;
-(BOOL)isEqualToNLSessionActivityGoal:(id)arg1 ;
-(void)setGoalTypeIdentifier:(unsigned long long)arg1 ;
@end

