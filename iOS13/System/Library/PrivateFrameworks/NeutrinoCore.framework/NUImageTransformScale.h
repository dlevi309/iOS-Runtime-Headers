/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithAffineTransform:(CGAffineTransform)arg1 ;
@end

