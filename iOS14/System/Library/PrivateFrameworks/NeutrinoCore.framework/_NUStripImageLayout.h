/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUImageLayout.h>

@interface _NUStripImageLayout : NUImageLayout {

	long long _stripHeight;
	long long _stripCount;

}
-(SCD_Struct_NU7)tileSize;
-(long long)tileCount;
-(SCD_Struct_NU8)frameRectForTileAtIndex:(long long)arg1 ;
-(SCD_Struct_NU8)contentRectForTileAtIndex:(long long)arg1 ;
-(id)tileInfoAtIndex:(long long)arg1 ;
-(SCD_Struct_NU7)borderSize;
-(SCD_Struct_NU7)tileCounts;
-(BOOL)isEqualToLayout:(id)arg1 ;
-(id)initWithImageSize:(SCD_Struct_NU7)arg1 stripHeight:(long long)arg2 ;
@end

