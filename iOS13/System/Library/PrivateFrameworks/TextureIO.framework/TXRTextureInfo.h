/*
* Generated on Monday, March 1, 2021 at 2:35:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
*/


@class NSError;

@interface TXRTextureInfo : NSObject {

	unsigned long long _pixelFormat;
	unsigned long long _alphaInfo;
	 _dimensions;
	unsigned long long _mipmapLevelCount;
	unsigned long long _arrayLength;
	BOOL _cubemap;
	NSError* _error;

}

@property (assign,nonatomic) unsigned long long alphaInfo;                     //@synthesize alphaInfo=_alphaInfo - In the implementation block
@property (assign,nonatomic) unsigned long long pixelFormat;                   //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (assign,nonatomic)  dimensions;                                      //@synthesize dimensions=_dimensions - In the implementation block
@property (assign,nonatomic) unsigned long long mipmapLevelCount;              //@synthesize mipmapLevelCount=_mipmapLevelCount - In the implementation block
@property (assign,nonatomic) unsigned long long arrayLength;                   //@synthesize arrayLength=_arrayLength - In the implementation block
@property (assign,nonatomic) BOOL cubemap;                                     //@synthesize cubemap=_cubemap - In the implementation block
@property (readonly) NSError * error;                                          //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setMipmapLevelCount:(unsigned long long)arg1 ;
-(unsigned long long)pixelFormat;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(unsigned long long)arrayLength;
-(void)setArrayLength:(unsigned long long)arg1 ;
-(unsigned long long)mipmapLevelCount;
-()dimensions;
-(BOOL)cubemap;
-(void)setCubemap:(BOOL)arg1 ;
-(void)setDimensions:;
-(void)setAlphaInfo:(unsigned long long)arg1 ;
-(unsigned long long)alphaInfo;
@end

