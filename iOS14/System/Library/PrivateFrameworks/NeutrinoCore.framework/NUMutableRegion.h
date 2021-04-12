/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURegion.h>

@interface NUMutableRegion : NURegion
-(void)clear;
-(void)setRegion:(id)arg1 ;
-(void)addRegion:(id)arg1 ;
-(void)clipToRect:(SCD_Struct_NU8)arg1 ;
-(void)addRect:(SCD_Struct_NU8)arg1 ;
-(void)growBy:(SCD_Struct_NU7)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeRect:(SCD_Struct_NU8)arg1 ;
-(void)removeRegion:(id)arg1 ;
-(void)clipToRegion:(id)arg1 ;
-(void)diffWithRect:(SCD_Struct_NU8)arg1 ;
-(void)diffWithRegion:(id)arg1 ;
-(void)flipInRect:(SCD_Struct_NU8)arg1 ;
-(void)translateBy:(SCD_Struct_NU7)arg1 ;
-(void)scaleBy:(CGPoint)arg1 withRounding:(long long)arg2 ;
-(void)growBy:(SCD_Struct_NU7)arg1 inRect:(SCD_Struct_NU8)arg2 ;
-(void)shrinkBy:(SCD_Struct_NU7)arg1 ;
-(void)shrinkBy:(SCD_Struct_NU7)arg1 inRect:(SCD_Struct_NU8)arg2 ;
-(void)applyOrientation:(long long)arg1 imageSize:(SCD_Struct_NU7)arg2 ;
-(void)applyAffineTransform:(CGAffineTransform)arg1 roundPolicy:(long long)arg2 ;
@end

