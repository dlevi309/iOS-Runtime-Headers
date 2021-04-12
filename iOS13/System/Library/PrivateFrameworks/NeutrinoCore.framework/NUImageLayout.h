/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@interface NUImageLayout : NSObject {

	SCD_Struct_NU7 _imageSize;

}

@property (nonatomic,readonly) SCD_Struct_NU7 imageSize;              //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,readonly) long long tileCount; 
+(id)contiguousLayoutForImageSize:(SCD_Struct_NU7)arg1 ;
+(id)tiledLayoutForImageSize:(SCD_Struct_NU7)arg1 tileSize:(SCD_Struct_NU7)arg2 ;
+(id)overlappingTiledLayoutForImageSize:(SCD_Struct_NU7)arg1 tileSize:(SCD_Struct_NU7)arg2 borderSize:(SCD_Struct_NU7)arg3 ;
+(id)stripLayoutForImageSize:(SCD_Struct_NU7)arg1 stripHeight:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(SCD_Struct_NU7)imageSize;
-(SCD_Struct_NU7)tileSize;
-(long long)tileCount;
-(id)initWithImageSize:(SCD_Struct_NU7)arg1 ;
-(SCD_Struct_NU8)frameRectForTileAtIndex:(long long)arg1 ;
-(SCD_Struct_NU8)contentRectForTileAtIndex:(long long)arg1 ;
-(long long)tileIndexAtPoint:(SCD_Struct_NU7)arg1 ;
-(id)tileInfoAtIndex:(long long)arg1 ;
-(void)enumerateTilesForReadingInRect:(SCD_Struct_NU8)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateTilesForWritingInRect:(SCD_Struct_NU8)arg1 withBlock:(/*^block*/id)arg2 ;
-(SCD_Struct_NU7)borderSize;
-(SCD_Struct_NU7)tileCounts;
-(BOOL)isEqualToLayout:(id)arg1 ;
@end

