/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class TSUOnce, UIImage;

@interface OITSUImage : NSObject {

	CGImageRef mCachedSliceableImage;
	CFDictionaryRef mImageSlices;
	TSUOnce* mImageSlicesOnce;
	id mCachedSystemImage;
	TSUOnce* mCachedImageOnce;

}

@property (nonatomic,readonly) UIImage * UIImage; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CGImageRef CGImage; 
@property (nonatomic,readonly) long long imageOrientation; 
@property (nonatomic,readonly) double scale; 
+(id)imageNamed:(id)arg1 ;
+(id)imageWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(long long)arg3 ;
+(id)imageWithContentsOfFile:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)imageWithData:(id)arg1 ;
+(id)imageWithCGImage:(CGImageRef)arg1 ;
+(id)imageWithUIImage:(id)arg1 ;
+(id)noisePatternWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 factor:(double)arg3 ;
-(long long)imageOrientation;
-(id)initWithContentsOfFile:(id)arg1 ;
-(UIImage *)UIImage;
-(id)init;
-(CGSize)size;
-(double)scale;
-(id)initWithData:(id)arg1 ;
-(id)TIFFRepresentation;
-(BOOL)isEmpty;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(long long)arg3 ;
-(CGImageRef)CGImage;
-(void)dealloc;
-(id)PNGRepresentation;
-(id)initWithUIImage:(id)arg1 ;
-(id)initWithImageSourceRef:(CGImageSourceRef)arg1 ;
-(CGImageRef)CGImageForSize:(CGSize)arg1 ;
-(id)JPEGRepresentationWithCompressionQuality:(double)arg1 ;
-(id)stretchedImageOfSize:(CGSize)arg1 leftCapWidth:(double)arg2 rightCapWidth:(double)arg3 topCapHeight:(double)arg4 bottomCapHeight:(double)arg5 ;
-(CGImageRef)CGImageForContentsScale:(double)arg1 ;
-(void)drawInRect:(CGRect)arg1 context:(CGContextRef)arg2 stretchingCenterWidthBy:(double)arg3 ;
-(void)drawInRect:(CGRect)arg1 fromRect:(CGRect)arg2 isFlipped:(BOOL)arg3 ;
@end

