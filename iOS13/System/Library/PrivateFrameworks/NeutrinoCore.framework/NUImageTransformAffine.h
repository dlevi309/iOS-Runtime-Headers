/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUImageTransform.h>

@interface NUImageTransformAffine : NUImageTransform {

	CGAffineTransform _transformInv;
	CGAffineTransform _transform;

}

@property (readonly) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CGAffineTransform)transform;
-(CGPoint)transformPoint:(CGPoint)arg1 ;
-(id)inverseTransform;
-(id)initWithAffineTransform:(CGAffineTransform)arg1 ;
-(void)nu_updateDigest:(id)arg1 ;
-(id)transformByScaleX:(double)arg1 scaleY:(double)arg2 ;
-(id)transformByTranslateX:(double)arg1 translateY:(double)arg2 ;
-(id)transformByRotateZ:(double)arg1 ;
-(SCD_Struct_NU27)transformMatrix:(SCD_Struct_NU27)arg1 ;
-(BOOL)isEqualToGeometryTransformAffine:(id)arg1 ;
@end

