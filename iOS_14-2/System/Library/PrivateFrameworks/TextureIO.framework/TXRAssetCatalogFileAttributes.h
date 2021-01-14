/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(id)init;
-(void)setExifOrientation:(unsigned char)arg1 ;
-(unsigned char)exifOrientation;
-(void)setFileFormat:(unsigned long long)arg1 ;
-(unsigned long long)fileFormat;
@end

