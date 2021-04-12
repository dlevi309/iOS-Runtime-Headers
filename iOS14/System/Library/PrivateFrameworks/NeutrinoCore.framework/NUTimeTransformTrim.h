/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUGeometryTransform.h>

@interface NUTimeTransformTrim : NUGeometryTransform {

	SCD_Struct_NU6 _beginTime;

}

@property (readonly) SCD_Struct_NU6 beginTime;              //@synthesize beginTime=_beginTime - In the implementation block
-(SCD_Struct_NU6)beginTime;
-(id)init;
-(id)description;
-(unsigned long long)hash;
-(id)inverseTransform;
-(BOOL)isEqual:(id)arg1 ;
-(SCD_Struct_NU6)transformTime:(SCD_Struct_NU6)arg1 ;
-(id)initWithTrimBeginTime:(SCD_Struct_NU6)arg1 ;
@end

