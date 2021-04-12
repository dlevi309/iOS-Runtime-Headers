/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUGeometryTransform.h>

@class NSArray;

@interface NUCompoundTransform : NUGeometryTransform {

	NSArray* _transforms;

}
-(id)description;
-(CGPoint)transformPoint:(CGPoint)arg1 ;
-(id)inverseTransform;
-(id)initWithTransforms:(id)arg1 ;
-(SCD_Struct_NU6)transformTime:(SCD_Struct_NU6)arg1 ;
-(SCD_Struct_NU27)transformMatrix:(SCD_Struct_NU27)arg1 ;
-(id)initWithSrcTransforms:(id)arg1 dstTransforms:(id)arg2 ;
@end

