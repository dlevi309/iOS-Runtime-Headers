/*
* Generated on Monday, March 1, 2021 at 2:35:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
*/

#import <TextureIO/TXRAssetCatalogFileAttributes.h>

@interface TXRAssetCatalogMipFileAttributes : TXRAssetCatalogFileAttributes {

	unsigned long long _level;
	unsigned long long _face;

}

@property (assign,nonatomic) unsigned long long level;              //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) unsigned long long face; 
-(id)init;
-(unsigned long long)level;
-(void)setFace:(unsigned long long)arg1 ;
-(unsigned long long)face;
-(void)setLevel:(unsigned long long)arg1 ;
-(void)specifyAllFaces;
-(BOOL)doesSpecifyAllFaces;
@end

