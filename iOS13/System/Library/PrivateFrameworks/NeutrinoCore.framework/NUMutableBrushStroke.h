/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUBrushStroke.h>

@interface NUMutableBrushStroke : NUBrushStroke

@property (assign,nonatomic) float radius; 
@property (assign,nonatomic) float softness; 
@property (assign,nonatomic) float opacity; 
@property (assign,nonatomic) long long pressureMode; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)appendPoint:(SCD_Struct_NU21)arg1 ;
-(id)points;
-(void)applyTransform:(CGAffineTransform)arg1 ;
-(id)initWithRadius:(float)arg1 softness:(float)arg2 opacity:(float)arg3 pressureMode:(long long)arg4 ;
-(void)appendPoints:(SCD_Struct_NU21*)arg1 pointCount:(long long)arg2 ;
@end

