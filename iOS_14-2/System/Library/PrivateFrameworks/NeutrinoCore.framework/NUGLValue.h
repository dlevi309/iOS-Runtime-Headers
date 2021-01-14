/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@interface NUGLValue : NSObject {

	SCD_Union_NU44 _value;
	unsigned _type;

}

@property (readonly) unsigned type;                          //@synthesize type=_type - In the implementation block
@property (readonly) int intValue; 
@property (readonly) float floatValue; 
@property (readonly) SCD_Struct_NU41 vec2Value; 
@property (readonly) SCD_Struct_NU12 vec4Value; 
@property (readonly) SCD_Struct_NU42 mat3Value; 
@property (readonly) SCD_Struct_NU43 mat4Value; 
+(id)valueWithFloat:(float)arg1 ;
+(id)valueWithInt:(int)arg1 ;
+(id)valueWithVec2:(SCD_Struct_NU41)arg1 ;
+(id)valueWithVec4:(SCD_Struct_NU12)arg1 ;
+(id)valueWithMat3:(SCD_Struct_NU42)arg1 ;
+(id)valueWithMat4:(SCD_Struct_NU43)arg1 ;
-(float)floatValue;
-(id)init;
-(id)description;
-(unsigned)type;
-(int)intValue;
-(id)initWithBytes:(const void*)arg1 type:(unsigned)arg2 ;
-(SCD_Struct_NU41)vec2Value;
-(SCD_Struct_NU12)vec4Value;
-(SCD_Struct_NU42)mat3Value;
-(SCD_Struct_NU43)mat4Value;
@end

