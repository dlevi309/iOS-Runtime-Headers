/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSUnitConverter.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSUnitConverterReciprocal : NSUnitConverter <NSSecureCoding> {

	double _reciprocalValue;

}

@property (readonly) double reciprocalValue;              //@synthesize reciprocalValue=_reciprocalValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(double)reciprocalValue;
-(id)initWithReciprocalValue:(double)arg1 ;
-(id)description;
-(double)baseUnitValueFromValue:(double)arg1 ;
-(double)valueFromBaseUnitValue:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

