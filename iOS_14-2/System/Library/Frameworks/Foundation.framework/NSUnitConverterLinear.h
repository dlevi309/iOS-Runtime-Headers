/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSUnitConverter.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSUnitConverterLinear : NSUnitConverter <NSSecureCoding> {

	double _coefficient;
	double _constant;

}

@property (readonly) double coefficient;              //@synthesize coefficient=_coefficient - In the implementation block
@property (readonly) double constant;                 //@synthesize constant=_constant - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)constant;
-(double)coefficient;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoefficient:(double)arg1 constant:(double)arg2 ;
-(id)initWithCoefficient:(double)arg1 ;
-(id)description;
-(double)baseUnitValueFromValue:(double)arg1 ;
-(double)valueFromBaseUnitValue:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

