/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SCD_Struct_NU7)tileSize;
-(SCD_Struct_NU7)imageSize;
-(long long)tileCount;
-(BOOL)isEqual:(id)arg1 ;
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

