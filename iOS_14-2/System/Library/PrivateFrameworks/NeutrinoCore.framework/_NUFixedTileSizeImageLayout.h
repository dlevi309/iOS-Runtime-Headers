/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUImageLayout.h>

@interface _NUFixedTileSizeImageLayout : NUImageLayout {

	SCD_Struct_NU7 _tileSize;
	SCD_Struct_NU7 _borderSize;
	SCD_Struct_NU7 _tileCounts;

}
-(SCD_Struct_NU7)tileSize;
-(long long)tileCount;
-(SCD_Struct_NU8)frameRectForTileAtIndex:(long long)arg1 ;
-(SCD_Struct_NU8)contentRectForTileAtIndex:(long long)arg1 ;
-(id)tileInfoAtIndex:(long long)arg1 ;
-(SCD_Struct_NU7)borderSize;
-(SCD_Struct_NU7)tileCounts;
-(BOOL)isEqualToLayout:(id)arg1 ;
-(id)initWithImageSize:(SCD_Struct_NU7)arg1 tileSize:(SCD_Struct_NU7)arg2 borderSize:(SCD_Struct_NU7)arg3 ;
@end

