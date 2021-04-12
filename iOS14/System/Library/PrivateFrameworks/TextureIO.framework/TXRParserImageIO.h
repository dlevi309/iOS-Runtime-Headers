/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
*/

#import <TextureIO/TextureIO-Structs.h>
#import <libobjc.A.dylib/TXRParser.h>

@class TXRTextureInfo, TXRImageInfo, NSString;

@interface TXRParserImageIO : NSObject <TXRParser> {

	TXRTextureInfo* _textureInfo;
	TXRImageInfo* _imageInfo;

}

@property (nonatomic,readonly) TXRTextureInfo * textureInfo;              //@synthesize textureInfo=_textureInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)exportTexture:(id)arg1 url:(id)arg2 error:(id*)arg3 ;
+(BOOL)handlesData:(id)arg1 ;
+(BOOL)exportImage:(id)arg1 url:(id)arg2 uttype:(const CFStringRef)arg3 colorSpace:(CGColorSpaceRef)arg4 orientation:(unsigned char)arg5 error:(id*)arg6 ;
+(id)decodeCGImage:(CGImageRef)arg1 desiredPixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
+(id)decodeCGImageNonIndexed:(CGImageRef)arg1 desiredPixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
+(int)determineColorSpaceClass:(CGImageRef)arg1 displayGamut:(unsigned long long)arg2 options:(id)arg3 ;
+(CGImageRef)newCGImageFromImage:(id)arg1 colorSpace:(CGColorSpaceRef)arg2 error:(id*)arg3 ;
-(BOOL)parseData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(TXRTextureInfo *)textureInfo;
-(id)parsedImageAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3 ;
@end

