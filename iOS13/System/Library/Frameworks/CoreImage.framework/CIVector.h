/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CIVector : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _count;
	SCD_Union_CI84* _u;

}

@property (readonly) double* _values; 
@property (readonly) unsigned long long count; 
@property (readonly) double X; 
@property (readonly) double Y; 
@property (readonly) double Z; 
@property (readonly) double W; 
@property (readonly) CGPoint CGPointValue; 
@property (readonly) CGRect CGRectValue; 
@property (readonly) CGAffineTransform CGAffineTransformValue; 
@property (readonly) NSString * stringRepresentation; 
+(BOOL)supportsSecureCoding;
+(id)vectorWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 W:(double)arg4 ;
+(id)vectorWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 ;
+(id)vectorWithCGPoint:(CGPoint)arg1 ;
+(id)vectorWithX:(double)arg1 Y:(double)arg2 ;
+(id)vectorWithCGRect:(CGRect)arg1 ;
+(id)vectorWithX:(double)arg1 ;
+(id)vectorWithValues:(const double*)arg1 count:(unsigned long long)arg2 ;
+(id)vectorWithString:(id)arg1 ;
+(id)vectorWithCGAffineTransform:(CGAffineTransform)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double*)_values;
-(id)initWithString:(id)arg1 ;
-(double)X;
-(double)Y;
-(double)Z;
-(double)W;
-(CGRect)CGRectValue;
-(NSString *)stringRepresentation;
-(double)valueAtIndex:(unsigned long long)arg1 ;
-(CGPoint)CGPointValue;
-(float)_norm;
-(float)_dot:(id)arg1 ;
-(id)_orthonormalizeTo:(id)arg1 ;
-(CGAffineTransform)CGAffineTransformValue;
-(id)initWithValues:(const double*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithX:(double)arg1 ;
-(id)initWithX:(double)arg1 Y:(double)arg2 ;
-(id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 ;
-(id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 W:(double)arg4 ;
-(id)initWithCGPoint:(CGPoint)arg1 ;
-(id)initWithCGRect:(CGRect)arg1 ;
-(id)initWithCGAffineTransform:(CGAffineTransform)arg1 ;
@end

