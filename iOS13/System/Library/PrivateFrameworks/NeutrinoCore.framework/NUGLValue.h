/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@interface NUGLValue : NSObject {

	SCD_Union_NU43 _value;
	unsigned _type;

}

@property (readonly) unsigned type;                          //@synthesize type=_type - In the implementation block
@property (readonly) int intValue; 
@property (readonly) float floatValue; 
@property (readonly) SCD_Struct_NU40 vec2Value; 
@property (readonly) SCD_Struct_NU11 vec4Value; 
@property (readonly) SCD_Struct_NU41 mat3Value; 
@property (readonly) SCD_Struct_NU42 mat4Value; 
+(id)valueWithFloat:(float)arg1 ;
+(id)valueWithInt:(int)arg1 ;
+(id)valueWithVec2:(SCD_Struct_NU40)arg1 ;
+(id)valueWithVec4:(SCD_Struct_NU11)arg1 ;
+(id)valueWithMat3:(SCD_Struct_NU41)arg1 ;
+(id)valueWithMat4:(SCD_Struct_NU42)arg1 ;
-(float)floatValue;
-(id)init;
-(int)intValue;
-(id)description;
-(unsigned)type;
-(id)initWithBytes:(const void*)arg1 type:(unsigned)arg2 ;
-(SCD_Struct_NU40)vec2Value;
-(SCD_Struct_NU11)vec4Value;
-(SCD_Struct_NU41)mat3Value;
-(SCD_Struct_NU42)mat4Value;
@end

