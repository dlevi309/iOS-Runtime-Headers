/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)baseUnitValueFromValue:(double)arg1 ;
-(double)valueFromBaseUnitValue:(double)arg1 ;
-(double)reciprocalValue;
-(id)initWithReciprocalValue:(double)arg1 ;
@end

