/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURegion.h>

@interface NUMutableRegion : NURegion
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clear;
-(void)addRegion:(id)arg1 ;
-(void)setRegion:(id)arg1 ;
-(void)clipToRect:(SCD_Struct_NU8)arg1 ;
-(void)addRect:(SCD_Struct_NU8)arg1 ;
-(void)translateBy:(SCD_Struct_NU7)arg1 ;
-(void)removeRect:(SCD_Struct_NU8)arg1 ;
-(void)removeRegion:(id)arg1 ;
-(void)clipToRegion:(id)arg1 ;
-(void)diffWithRect:(SCD_Struct_NU8)arg1 ;
-(void)diffWithRegion:(id)arg1 ;
-(void)flipInRect:(SCD_Struct_NU8)arg1 ;
-(void)growBy:(SCD_Struct_NU7)arg1 ;
-(void)growBy:(SCD_Struct_NU7)arg1 inRect:(SCD_Struct_NU8)arg2 ;
-(void)shrinkBy:(SCD_Struct_NU7)arg1 ;
-(void)shrinkBy:(SCD_Struct_NU7)arg1 inRect:(SCD_Struct_NU8)arg2 ;
-(void)applyOrientation:(long long)arg1 imageSize:(SCD_Struct_NU7)arg2 ;
-(void)scaleBy:(CGPoint)arg1 withRounding:(long long)arg2 ;
-(void)applyAffineTransform:(CGAffineTransform)arg1 roundPolicy:(long long)arg2 ;
@end

