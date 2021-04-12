/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUGeometryTransform.h>

@interface NUTimeTransformTrim : NUGeometryTransform {

	SCD_Struct_NU6 _beginTime;

}

@property (readonly) SCD_Struct_NU6 beginTime;              //@synthesize beginTime=_beginTime - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(SCD_Struct_NU6)beginTime;
-(id)inverseTransform;
-(SCD_Struct_NU6)transformTime:(SCD_Struct_NU6)arg1 ;
-(id)initWithTrimBeginTime:(SCD_Struct_NU6)arg1 ;
@end

