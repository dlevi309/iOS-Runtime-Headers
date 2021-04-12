/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUImageTransform.h>

@interface NUImageTransform3D : NUImageTransform {

	SCD_Struct_NU28 _transformInv;
	SCD_Struct_NU28 _transform;

}

@property (readonly) SCD_Struct_NU28 transform;              //@synthesize transform=_transform - In the implementation block
-(id)init;
-(CGPoint)transformPoint:(CGPoint)arg1 ;
-(SCD_Struct_NU28)transform;
-(id)description;
-(unsigned long long)hash;
-(id)inverseTransform;
-(BOOL)isEqual:(id)arg1 ;
-(void)nu_updateDigest:(id)arg1 ;
-(id)transformByScaleX:(double)arg1 scaleY:(double)arg2 ;
-(id)transformByTranslateX:(double)arg1 translateY:(double)arg2 ;
-(id)transformByRotateZ:(double)arg1 ;
-(id)transformByRotateX:(double)arg1 y:(double)arg2 z:(double)arg3 ;
-(SCD_Struct_NU28)transformMatrix:(SCD_Struct_NU28)arg1 ;
-(BOOL)isIdentityImageTransform;
-(id)initWithAffineTransform:(CGAffineTransform)arg1 ;
-(id)initWithTransform3D:(SCD_Struct_NU28)arg1 ;
-(BOOL)isEqualToGeometryTransform3D:(id)arg1 ;
@end

