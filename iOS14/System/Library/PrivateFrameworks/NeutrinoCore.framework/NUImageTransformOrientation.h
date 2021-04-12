/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUImageTransform.h>

@interface NUImageTransformOrientation : NUImageTransform {

	SCD_Struct_NU7 _inputImageSize;
	SCD_Struct_NU7 _inputImageOrigin;
	long long _orientation;

}

@property (readonly) long long orientation;              //@synthesize orientation=_orientation - In the implementation block
-(id)init;
-(CGPoint)transformPoint:(CGPoint)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(long long)orientation;
-(id)inverseTransform;
-(BOOL)isEqual:(id)arg1 ;
-(void)nu_updateDigest:(id)arg1 ;
-(SCD_Struct_NU28)transformMatrix:(SCD_Struct_NU28)arg1 ;
-(BOOL)isIdentityImageTransform;
-(id)initWithOrientation:(long long)arg1 imageSize:(SCD_Struct_NU7)arg2 ;
-(id)initWithOrientation:(long long)arg1 imageSize:(SCD_Struct_NU7)arg2 imageOrigin:(SCD_Struct_NU7)arg3 ;
-(BOOL)isEqualToGeometryTransformOrientation:(id)arg1 ;
@end

