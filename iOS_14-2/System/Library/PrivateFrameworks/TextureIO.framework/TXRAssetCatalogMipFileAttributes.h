/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFace:(unsigned long long)arg1 ;
-(unsigned long long)face;
-(unsigned long long)level;
-(void)setLevel:(unsigned long long)arg1 ;
-(void)specifyAllFaces;
-(BOOL)doesSpecifyAllFaces;
@end

