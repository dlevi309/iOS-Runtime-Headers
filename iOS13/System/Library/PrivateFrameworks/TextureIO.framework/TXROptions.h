/*
* Generated on Monday, March 1, 2021 at 2:35:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
*/

#import <TextureIO/TextureIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TXROptions : NSObject <NSCopying> {

	BOOL _cubemapFromVerticallyStackedImage;
	unsigned long long _originOperation;
	unsigned long long _colorSpaceHandling;
	BOOL _multiplyAlpha;

}

@property (assign,nonatomic) BOOL cubemapFromVerticallyStackedImage;              //@synthesize cubemapFromVerticallyStackedImage=_cubemapFromVerticallyStackedImage - In the implementation block
@property (assign,nonatomic) unsigned long long originOperation;                  //@synthesize originOperation=_originOperation - In the implementation block
@property (assign,nonatomic) unsigned long long colorSpaceHandling;               //@synthesize colorSpaceHandling=_colorSpaceHandling - In the implementation block
@property (assign,nonatomic) BOOL multiplyAlpha;                                  //@synthesize multiplyAlpha=_multiplyAlpha - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOriginOperation:(unsigned long long)arg1 ;
-(void)setColorSpaceHandling:(unsigned long long)arg1 ;
-(void)setMultiplyAlpha:(BOOL)arg1 ;
-(BOOL)cubemapFromVerticallyStackedImage;
-(void)setCubemapFromVerticallyStackedImage:(BOOL)arg1 ;
-(unsigned long long)originOperation;
-(unsigned long long)colorSpaceHandling;
-(BOOL)multiplyAlpha;
@end

