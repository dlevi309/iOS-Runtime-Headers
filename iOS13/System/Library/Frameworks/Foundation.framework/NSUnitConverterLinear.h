/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)constant;
-(double)baseUnitValueFromValue:(double)arg1 ;
-(double)valueFromBaseUnitValue:(double)arg1 ;
-(id)initWithCoefficient:(double)arg1 constant:(double)arg2 ;
-(double)coefficient;
-(id)initWithCoefficient:(double)arg1 ;
@end

