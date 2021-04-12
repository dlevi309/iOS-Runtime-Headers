/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PVMatrix44Double : NSObject <NSSecureCoding, NSCopying> {

	SCD_Struct_PV24 _SIMDDouble4x4;

}

@property (assign,nonatomic) SCD_Struct_PV24 SIMDFloat4x4; 
@property (assign,setter=IMDDouble4x4,nonatomic) SCD_Struct_PV24 SIMDDouble4x4;              //@synthesize SIMDDouble4x4=_SIMDDouble4x4 - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)matrix;
+(id)matrixWithSIMDDouble4x4:(SCD_Struct_PV24)arg1 ;
+(id)matrixWithSIMDFloat4x4:(SCD_Struct_PV24)arg1 ;
+(id)matrixWithPCMatrix44Double:(id)arg1 ;
+(id)matrixWithPCMatrix44d:(const void*)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isIdentity;
-(id)extendedDescription;
-(id)compactDescription;
-(void)transpose;
-(void)makeIdentity;
-(id)initWithSIMDFloat4x4:(SCD_Struct_PV24)arg1 ;
-(id)initWithSIMDDouble4x4:(SCD_Struct_PV24)arg1 ;
-(void)setSIMDFloat4x4:(SCD_Struct_PV24)arg1 ;
-(SCD_Struct_PV24)SIMDDouble4x4;
-(PVTransformInfo)getTransformInfo:(id*)arg1 ;
-(SCD_Struct_PV24)SIMDFloat4x4;
-(double)valueAtCol:(unsigned long long)arg1 row:(unsigned long long)arg2 ;
-(void)setValue:(double)arg1 col:(unsigned long long)arg2 row:(unsigned long long)arg3 ;
-(void)setSIMDDouble4x4:(SCD_Struct_PV24)arg1 ;
-(id)initWithPCMatrix44Double:(id)arg1 ;
-(id)initWithPCMatrix44d:(const void*)arg1 ;
-(void)setPCMatrix44d:(const void*)arg1 ;
-(id)pcMatrix44Double;
-(void)setPCMatrix44Double:(id)arg1 ;
-(void)getPCMatrix44d:(void*)arg1 ;
@end

