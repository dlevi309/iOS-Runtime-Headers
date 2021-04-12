/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSAffineTransform : NSObject <NSCopying, NSSecureCoding> {

	SCD_Struct_NS8 _transformStruct;

}

@property (assign) SCD_Struct_NS8 transformStruct; 
+(BOOL)supportsSecureCoding;
+(id)transform;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)invert;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_NS8)transformStruct;
-(void)setTransformStruct:(SCD_Struct_NS8)arg1 ;
-(id)initWithTransform:(id)arg1 ;
-(void)translateXBy:(double)arg1 yBy:(double)arg2 ;
-(void)rotateByDegrees:(double)arg1 ;
-(void)rotateByRadians:(double)arg1 ;
-(void)scaleBy:(double)arg1 ;
-(void)scaleXBy:(double)arg1 yBy:(double)arg2 ;
-(void)appendTransform:(id)arg1 ;
-(void)prependTransform:(id)arg1 ;
-(CGPoint)transformPoint:(CGPoint)arg1 ;
-(CGSize)transformSize:(CGSize)arg1 ;
@end

