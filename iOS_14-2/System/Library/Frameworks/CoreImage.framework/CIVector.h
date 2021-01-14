/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CIVector : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _count;
	SCD_Union_CI68* _u;

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
+(id)vectorWithCGAffineTransform:(CGAffineTransform)arg1 ;
+(id)vectorWithValues:(const double*)arg1 count:(unsigned long long)arg2 ;
+(id)vectorWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 ;
+(id)vectorWithX:(double)arg1 Y:(double)arg2 ;
+(id)vectorWithX:(double)arg1 ;
+(id)vectorWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 W:(double)arg4 ;
+(id)vectorWithString:(id)arg1 ;
+(id)vectorWithCGPoint:(CGPoint)arg1 ;
+(id)vectorWithCGRect:(CGRect)arg1 ;
-(double)Y;
-(double)Z;
-(double)valueAtIndex:(unsigned long long)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSString *)stringRepresentation;
-(void)finalize;
-(double*)_values;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(float)_norm;
-(id)initWithX:(double)arg1 Y:(double)arg2 ;
-(CGRect)CGRectValue;
-(unsigned long long)count;
-(id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 ;
-(id)description;
-(double)W;
-(id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 W:(double)arg4 ;
-(id)initWithCGRect:(CGRect)arg1 ;
-(CGPoint)CGPointValue;
-(id)initWithX:(double)arg1 ;
-(float)_dot:(id)arg1 ;
-(CGAffineTransform)CGAffineTransformValue;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCGPoint:(CGPoint)arg1 ;
-(id)_orthonormalizeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCGAffineTransform:(CGAffineTransform)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithValues:(const double*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(double)X;
@end

