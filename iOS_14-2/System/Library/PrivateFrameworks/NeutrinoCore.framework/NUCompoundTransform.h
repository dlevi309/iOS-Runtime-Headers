/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUGeometryTransform.h>

@class NSArray;

@interface NUCompoundTransform : NUGeometryTransform {

	NSArray* _transforms;

}
-(CGPoint)transformPoint:(CGPoint)arg1 ;
-(id)description;
-(id)inverseTransform;
-(SCD_Struct_NU6)transformTime:(SCD_Struct_NU6)arg1 ;
-(SCD_Struct_NU28)transformMatrix:(SCD_Struct_NU28)arg1 ;
-(id)initWithSrcTransforms:(id)arg1 dstTransforms:(id)arg2 ;
-(id)initWithTransforms:(id)arg1 ;
@end

