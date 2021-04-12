/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSData, NSString;

@interface CSIBitmapWrapper : NSObject {

	CGContextRef _bitmapContext;
	NSData* _pixelData;
	unsigned _pixelFormat;
	unsigned _width;
	unsigned _height;
	unsigned long long _rowbytes;
	BOOL _allowsMultiPassEncoding;
	BOOL _allowsOptimalRowbytesPacking;
	BOOL _allowsCompactCompression;
	BOOL _allowsPaletteImageCompression;
	BOOL _allowsHevcCompression;
	BOOL _allowsDeepmapImageCompression;
	BOOL _allowsDeepmap2ImageCompression;
	BOOL _flipped;
	CGImageRef _sourceImage;
	long long _texturePixelFormat;
	unsigned _imageAlpha;
	double _compressionQuality;
	long long _compressionType;
	unsigned long long _colorSpaceID;
	long long _textureInterpretation;
	int _exifOrientation;
	long long _targetPlatform;
	NSString* _name;

}

@property (assign,nonatomic) unsigned pixelFormat;                         //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (assign) BOOL allowsMultiPassEncoding;                           //@synthesize allowsMultiPassEncoding=_allowsMultiPassEncoding - In the implementation block
@property (assign) BOOL allowsOptimalRowbytesPacking;                      //@synthesize allowsOptimalRowbytesPacking=_allowsOptimalRowbytesPacking - In the implementation block
@property (assign) BOOL allowsCompactCompression; 
@property (assign) BOOL allowsPaletteImageCompression;                     //@synthesize allowsPaletteImageCompression=_allowsPaletteImageCompression - In the implementation block
@property (assign) BOOL allowsHevcCompression;                             //@synthesize allowsHevcCompression=_allowsHevcCompression - In the implementation block
@property (assign) BOOL allowsDeepmapImageCompression;                     //@synthesize allowsDeepmapImageCompression=_allowsDeepmapImageCompression - In the implementation block
@property (assign) BOOL allowsDeepmap2ImageCompression;                    //@synthesize allowsDeepmap2ImageCompression=_allowsDeepmap2ImageCompression - In the implementation block
@property (assign,nonatomic) BOOL flipped;                                 //@synthesize flipped=_flipped - In the implementation block
@property (assign,nonatomic) double compressionQuality;                    //@synthesize compressionQuality=_compressionQuality - In the implementation block
@property (assign) long long targetPlatform;                               //@synthesize targetPlatform=_targetPlatform - In the implementation block
@property (assign) long long compressionType;                              //@synthesize compressionType=_compressionType - In the implementation block
@property (assign,nonatomic) unsigned long long colorSpaceID;              //@synthesize colorSpaceID=_colorSpaceID - In the implementation block
@property (assign,nonatomic) long long textureInterpretation;              //@synthesize textureInterpretation=_textureInterpretation - In the implementation block
@property (assign,nonatomic) int exifOrientation;                          //@synthesize exifOrientation=_exifOrientation - In the implementation block
@property (assign,nonatomic) NSString * name;                              //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned)width;
-(unsigned)height;
-(void)setFlipped:(BOOL)arg1 ;
-(unsigned)pixelFormat;
-(void)setPixelFormat:(unsigned)arg1 ;
-(BOOL)flipped;
-(int)exifOrientation;
-(void)setExifOrientation:(int)arg1 ;
-(CGContextRef)bitmapContext;
-(long long)compressionType;
-(unsigned)sourceAlphaInfo;
-(BOOL)allowsCompactCompression;
-(BOOL)allowsHevcCompression;
-(void)setCompressionType:(long long)arg1 ;
-(long long)targetPlatform;
-(void)setTargetPlatform:(long long)arg1 ;
-(double)compressionQuality;
-(void)setCompressionQuality:(double)arg1 ;
-(BOOL)allowsPaletteImageCompression;
-(void)setAllowsPaletteImageCompression:(BOOL)arg1 ;
-(void)setAllowsHevcCompression:(BOOL)arg1 ;
-(BOOL)allowsDeepmapImageCompression;
-(void)setAllowsDeepmapImageCompression:(BOOL)arg1 ;
-(BOOL)allowsDeepmap2ImageCompression;
-(void)setAllowsDeepmap2ImageCompression:(BOOL)arg1 ;
-(long long)textureInterpretation;
-(id)compressedData:(BOOL)arg1 usedEncoding:(int*)arg2 andRowChunkSize:(unsigned*)arg3 ;
-(BOOL)allowsMultiPassEncoding;
-(unsigned long long)colorSpaceID;
-(unsigned long long)rowbytes;
-(void)setColorSpaceID:(unsigned long long)arg1 ;
-(void)setAllowsMultiPassEncoding:(BOOL)arg1 ;
-(BOOL)allowsOptimalRowbytesPacking;
-(void)setAllowsOptimalRowbytesPacking:(BOOL)arg1 ;
-(void)setTextureInterpretation:(long long)arg1 ;
-(id)pixelData;
-(void)setPixelData:(id)arg1 ;
-(id)initWithPixelWidth:(unsigned)arg1 pixelHeight:(unsigned)arg2 ;
-(id)initWithCGImage:(CGImageRef)arg1 width:(unsigned)arg2 height:(unsigned)arg3 texturePixelFormat:(long long)arg4 ;
-(void)setSourceAlphaInfo:(unsigned)arg1 ;
-(void)setAllowsCompactCompression:(BOOL)arg1 ;
@end

