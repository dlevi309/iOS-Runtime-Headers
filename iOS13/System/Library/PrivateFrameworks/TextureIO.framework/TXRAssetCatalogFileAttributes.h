/*
* Generated on Monday, March 1, 2021 at 2:35:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
*/


#import <TextureIO/TextureIO-Structs.h>
@interface TXRAssetCatalogFileAttributes : NSObject {

	CGColorSpaceRef _colorSpace;
	unsigned char _exifOrientation;
	unsigned long long _fileFormat;

}

@property (assign,nonatomic) CGColorSpaceRef colorSpace; 
@property (assign,nonatomic) unsigned char exifOrientation;              //@synthesize exifOrientation=_exifOrientation - In the implementation block
@property (assign,nonatomic) unsigned long long fileFormat;              //@synthesize fileFormat=_fileFormat - In the implementation block
-(id)init;
-(CGColorSpaceRef)colorSpace;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(unsigned char)exifOrientation;
-(void)setExifOrientation:(unsigned char)arg1 ;
-(unsigned long long)fileFormat;
-(void)setFileFormat:(unsigned long long)arg1 ;
@end

