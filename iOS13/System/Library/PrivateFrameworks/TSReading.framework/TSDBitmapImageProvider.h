/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDImageProvider.h>

@protocol OS_dispatch_semaphore;
@class NSObject;

@interface TSDBitmapImageProvider : TSDImageProvider {

	CGImageSourceRef mImageSource;
	CGImageRef mImage;
	unsigned long long mImageGamut;
	CGSize mNaturalSize;
	long long mOrientation;
	BOOL mIsOpaque;
	BOOL mIsValid;
	unsigned long long mDPI;
	NSObject*<OS_dispatch_semaphore> mImageLock;
	long long mCheckIfValidToken;
	CGImageRef mHalfSizeImage;
	CGImageRef mQuarterSizeImage;

}
+(void)initialize;
+(CGImageRef)CGImageForImageData:(id)arg1 ;
+(id)p_cacheStringForData:(id)arg1 ;
+(CGImageSourceRef)p_newImageSourceFromFilePath:(id)arg1 ;
+(CGImageRef)temporaryCGImageForImageData:(id)arg1 ;
+(CGImageSourceRef)temporaryCGImageSourceForImageData:(id)arg1 ;
+(id)TSUImageForImageData:(id)arg1 ;
+(CGSize)naturalSizeForImageData:(id)arg1 ;
+(void)clearCacheForData:(id)arg1 ;
+(CGImageSourceRef)p_newImageSourceFromCacheForData:(id)arg1 withFilenameSuffix:(id)arg2 ;
-(void)dealloc;
-(BOOL)isValid;
-(long long)orientation;
-(BOOL)isOpaque;
-(void)flush;
-(CGSize)naturalSize;
-(CGImageRef)CGImageForSize:(CGSize)arg1 inContext:(CGContextRef)arg2 orLayer:(id)arg3 ;
-(void)drawImageInContext:(CGContextRef)arg1 rect:(CGRect)arg2 ;
-(CGImageRef)CGImageForNaturalSize;
-(CGSize)dpiAdjustedNaturalSize;
-(CGSize)dpiAdjustedFillSize;
-(unsigned long long)imageGamut;
-(CGImageSourceRef)CGImageSource;
-(void)i_commonInit;
-(void)p_loadImageMetadata;
-(void)p_loadSourceRefIfNecessary;
-(CGImageRef)p_newImageFromSource:(CGImageSourceRef)arg1 ;
-(void)p_loadFullSizedImageIfNecessary;
-(CGImageRef)p_resampledImageOfSizeType:(int)arg1 ;
-(CGImageSourceRef)p_newCGImageSourceForTemporaryUse;
-(CGImageRef)p_loadOrCreateResampledImageWithScale:(unsigned long long)arg1 andCGImage:(CGImage*)arg2 ;
-(unsigned long long)imageDPI;
-(CGImageSourceRef)p_newCGImageSource;
-(void)p_configureOrientationAndSizeFromImageSource:(CGImageSourceRef)arg1 andImage:(CGImageRef)arg2 ;
-(CGImageRef)CGImageForSize:(CGSize)arg1 lowQuality:(BOOL)arg2 ;
-(BOOL)hasFlushableContent;
-(CGImageSourceRef)p_newImageOfSize:(CGSize)arg1 andWriteToCacheWithSuffix:(id)arg2 ;
@end

