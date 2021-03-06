/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSAffineTransform : NSObject <NSCopying, NSSecureCoding> {

	SCD_Struct_NS2 _transformStruct;

}

@property (assign) SCD_Struct_NS2 transformStruct; 
+(BOOL)supportsSecureCoding;
+(id)transformWithXTranslation:(double)arg1 yTranslation:(double)arg2 ;
+(id)transformWithRotationInDegrees:(double)arg1 ;
+(id)transformWithRotationInRadians:(double)arg1 ;
+(id)transformWithTransformStruct:(SCD_Struct_NS2)arg1 ;
+(id)transformWithFlipUsingHeight:(double)arg1 ;
+(id)transformWithXScale:(double)arg1 yScale:(double)arg2 ;
+(id)transform;
+(id)transformWithScale:(double)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)scaleBy:(double)arg1 ;
-(void)scaleXBy:(double)arg1 yBy:(double)arg2 ;
-(CGSize)transformSize:(CGSize)arg1 ;
-(void)translateXBy:(double)arg1 yBy:(double)arg2 ;
-(SCD_Struct_NS2)transformStruct;
-(void)prependTransform:(id)arg1 ;
-(CGPoint)transformPoint:(CGPoint)arg1 ;
-(void)invert;
-(void)rotateByDegrees:(double)arg1 ;
-(void)rotateByRadians:(double)arg1 ;
-(void)appendTransform:(id)arg1 ;
-(id)initWithTransform:(id)arg1 ;
-(void)setTransformStruct:(SCD_Struct_NS2)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

