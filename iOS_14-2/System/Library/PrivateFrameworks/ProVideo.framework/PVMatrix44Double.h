/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PVMatrix44Double : NSObject <NSSecureCoding, NSCopying> {

	SCD_Struct_PV26 _SIMDDouble4x4;

}

@property (assign,nonatomic) SCD_Struct_PV26 SIMDFloat4x4; 
@property (assign,setter=IMDDouble4x4,nonatomic) SCD_Struct_PV26 SIMDDouble4x4;              //@synthesize SIMDDouble4x4=_SIMDDouble4x4 - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)matrix;
+(BOOL)isMatrix:(id)arg1 equivalentTo:(id)arg2 ;
+(id)matrixWithSIMDDouble4x4:(SCD_Struct_PV26)arg1 ;
+(id)matrixWithSIMDFloat4x4:(SCD_Struct_PV26)arg1 ;
+(id)matrixWithPCMatrix44Double:(id)arg1 ;
+(id)matrixWithPCMatrix44d:(const void*)arg1 ;
-(id)compactDescription;
-(id)init;
-(BOOL)isIdentity;
-(void)transpose;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isFinite;
-(id)extendedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(SCD_Struct_PV26)SIMDDouble4x4;
-(SCD_Struct_PV26)SIMDFloat4x4;
-(void)makeIdentity;
-(void)setSIMDDouble4x4:(SCD_Struct_PV26)arg1 ;
-(id)initWithSIMDFloat4x4:(SCD_Struct_PV26)arg1 ;
-(id)initWithSIMDDouble4x4:(SCD_Struct_PV26)arg1 ;
-(void)setSIMDFloat4x4:(SCD_Struct_PV26)arg1 ;
-(id)initWithPCMatrix44Double:(id)arg1 ;
-(PVTransformInfo)getTransformInfo:(id*)arg1 ;
-(double)valueAtCol:(unsigned long long)arg1 row:(unsigned long long)arg2 ;
-(void)setValue:(double)arg1 col:(unsigned long long)arg2 row:(unsigned long long)arg3 ;
-(id)initWithPCMatrix44d:(const void*)arg1 ;
-(void)setPCMatrix44d:(const void*)arg1 ;
-(id)pcMatrix44Double;
-(void)setPCMatrix44Double:(id)arg1 ;
-(void)getPCMatrix44d:(void*)arg1 ;
@end

