/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUImageTransformAffine.h>

@interface NUImageTransformScale : NUImageTransformAffine {

	SCD_Struct_NU7 _scale;

}

@property (readonly) SCD_Struct_NU7 scale;              //@synthesize scale=_scale - In the implementation block
-(SCD_Struct_NU7)scale;
-(id)initWithScale:(SCD_Struct_NU7)arg1 ;
-(id)inverseTransform;
-(BOOL)isIdentityImageTransform;
-(id)initWithAffineTransform:(CGAffineTransform)arg1 ;
@end

