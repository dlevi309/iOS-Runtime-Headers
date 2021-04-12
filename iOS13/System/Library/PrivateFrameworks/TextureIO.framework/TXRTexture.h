/*
* Generated on Monday, March 1, 2021 at 2:35:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
*/

#import <TextureIO/TextureIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol TXRBufferAllocator;
@class NSMutableArray, NSArray;

@interface TXRTexture : NSObject <NSCopying> {

	id<TXRBufferAllocator> _bufferAllocator;
	NSMutableArray* _mipmapLevels;
	 _dimensions;
	BOOL _cubemap;
	unsigned long long _pixelFormat;
	unsigned long long _alphaInfo;

}

@property (nonatomic,readonly)  dimensions;                                 //@synthesize dimensions=_dimensions - In the implementation block
@property (nonatomic,readonly) BOOL cubemap;                                //@synthesize cubemap=_cubemap - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelFormat;              //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (nonatomic,readonly) unsigned long long alphaInfo;                //@synthesize alphaInfo=_alphaInfo - In the implementation block
@property (nonatomic,readonly) NSArray * mipmapLevels;                      //@synthesize mipmapLevels=_mipmapLevels - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)pixelFormat;
-()dimensions;
-(BOOL)cubemap;
-(id)initWithDataSourceProvider:(id)arg1 ;
-(void)reformat:(unsigned long long)arg1 gammaDegamma:(BOOL)arg2 bufferAllocator:(id)arg3 error:(id*)arg4 ;
-(NSArray *)mipmapLevels;
-(BOOL)exportToURL:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)alphaInfo;
-(id)initWithContentsOfURL:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)initWithDimensions:(unsigned long long)arg1 pixelFormat:(unsigned long long)arg2 alphaInfo:(unsigned long long)arg3 mipmapLevelCount:(unsigned long long)arg4 arrayLength:(BOOL)arg5 cubemap:(id)arg6 ;
-(id)initWithData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)exportToAssetCatalogWithName:(id)arg1 location:(id)arg2 error:(id*)arg3 ;
-(void)generateMipmapsForRange:(NSRange)arg1 filter:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)copyWithPixelFormat:(unsigned long long)arg1 options:(id)arg2 bufferAllocator:(id)arg3 ;
@end

