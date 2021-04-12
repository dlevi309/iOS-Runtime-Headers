/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUImageLayout.h>

@interface _NUContiguousImageLayout : NUImageLayout
-(SCD_Struct_NU7)tileSize;
-(long long)tileCount;
-(SCD_Struct_NU8)frameRectForTileAtIndex:(long long)arg1 ;
-(SCD_Struct_NU8)contentRectForTileAtIndex:(long long)arg1 ;
-(long long)tileIndexAtPoint:(SCD_Struct_NU7)arg1 ;
-(id)tileInfoAtIndex:(long long)arg1 ;
-(void)enumerateTilesForReadingInRect:(SCD_Struct_NU8)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateTilesForWritingInRect:(SCD_Struct_NU8)arg1 withBlock:(/*^block*/id)arg2 ;
-(SCD_Struct_NU7)borderSize;
-(SCD_Struct_NU7)tileCounts;
@end

