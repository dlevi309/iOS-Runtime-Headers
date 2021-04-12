/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUBrushStroke.h>

@interface NUMutableBrushStroke : NUBrushStroke

@property (assign,nonatomic) float radius; 
@property (assign,nonatomic) float softness; 
@property (assign,nonatomic) float opacity; 
@property (assign,nonatomic) long long pressureMode; 
-(void)appendPoint:(SCD_Struct_NU23)arg1 ;
-(void)applyTransform:(CGAffineTransform)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)points;
-(id)initWithRadius:(float)arg1 softness:(float)arg2 opacity:(float)arg3 pressureMode:(long long)arg4 ;
-(void)appendPoints:(SCD_Struct_NU23*)arg1 pointCount:(long long)arg2 ;
@end

