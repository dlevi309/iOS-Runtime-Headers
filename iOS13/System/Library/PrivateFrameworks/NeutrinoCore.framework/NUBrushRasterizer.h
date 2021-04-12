/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@interface NUBrushRasterizer : NSObject
+(long long)_rasterizeBrushStroke:(id)arg1 toROI:(SCD_Struct_NU8)arg2 maskPtr:(char*)arg3 maskPtrRowBytes:(long long)arg4 close:(BOOL)arg5 startIndex:(long long)arg6 pressureMode:(long long)arg7 ;
+(long long)rasterizeBrushStroke:(id)arg1 atPoint:(SCD_Struct_NU7)arg2 toBuffer:(id)arg3 close:(BOOL)arg4 startIndex:(long long)arg5 ;
+(void)rasterizeBrushStroke:(id)arg1 atPoint:(SCD_Struct_NU7)arg2 toBuffer:(id)arg3 ;
@end

