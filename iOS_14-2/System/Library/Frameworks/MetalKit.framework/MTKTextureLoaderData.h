/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
*/


@class NSString;

@interface MTKTextureLoaderData : NSObject {

	NSString* _imageOrigin;
	unsigned long long _numArrayElements;
	unsigned long long _numFaces;
	unsigned long long _numMipmapLevels;
	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _depth;
	unsigned long long _textureType;
	unsigned long long _pixelFormat;

}

@property (nonatomic,retain) NSString * imageOrigin;                           //@synthesize imageOrigin=_imageOrigin - In the implementation block
@property (assign,nonatomic) unsigned long long numArrayElements;              //@synthesize numArrayElements=_numArrayElements - In the implementation block
@property (assign,nonatomic) unsigned long long numFaces;                      //@synthesize numFaces=_numFaces - In the implementation block
@property (assign,nonatomic) unsigned long long numMipmapLevels;               //@synthesize numMipmapLevels=_numMipmapLevels - In the implementation block
@property (assign,nonatomic) unsigned long long width;                         //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned long long height;                        //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) unsigned long long depth;                         //@synthesize depth=_depth - In the implementation block
@property (assign,nonatomic) unsigned long long textureType;                   //@synthesize textureType=_textureType - In the implementation block
@property (assign,nonatomic) unsigned long long pixelFormat;                   //@synthesize pixelFormat=_pixelFormat - In the implementation block
-(void)setHeight:(unsigned long long)arg1 ;
-(unsigned long long)textureType;
-(unsigned long long)width;
-(id)init;
-(unsigned long long)pixelFormat;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setDepth:(unsigned long long)arg1 ;
-(unsigned long long)height;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(void)setTextureType:(unsigned long long)arg1 ;
-(unsigned long long)depth;
-(unsigned long long)numFaces;
-(void)dealloc;
-(void)setNumFaces:(unsigned long long)arg1 ;
-(void)setNumMipmapLevels:(unsigned long long)arg1 ;
-(void)setImageOrigin:(NSString *)arg1 ;
-(void)setNumArrayElements:(unsigned long long)arg1 ;
-(unsigned long long)numMipmapLevels;
-(unsigned long long)numArrayElements;
-(id)getDataForArrayElement:(unsigned long long)arg1 face:(unsigned long long)arg2 level:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 bytesPerRow:(unsigned long long*)arg5 bytesPerImage:(unsigned long long*)arg6 ;
-(NSString *)imageOrigin;
@end

