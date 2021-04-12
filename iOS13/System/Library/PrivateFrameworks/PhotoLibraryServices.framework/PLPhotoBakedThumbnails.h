/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSData, NSMutableArray, NSMutableDictionary;

@interface PLPhotoBakedThumbnails : NSObject {

	unsigned short _format;
	int _singleThumbnailImageLength;
	unsigned long long _count;
	BOOL _dataIsMutable;
	NSData* _thumbnailData;
	NSMutableArray* _thumbnailImages;
	NSMutableDictionary* _options;
	NSData* _optionsData;
	BOOL _optionsAccessed;
	BOOL _missingHeader;
	CGSize _size;

}

@property (nonatomic,readonly) unsigned short format; 
@property (nonatomic,readonly) NSMutableDictionary * options; 
@property (nonatomic,readonly) NSData * optionsData; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) int bitsPerComponent; 
@property (nonatomic,readonly) int bytesPerPixel; 
@property (nonatomic,readonly) unsigned bitmapInfo; 
@property (nonatomic,readonly) CGRect imageRect; 
+(BOOL)_transformForImage:(CGImageRef)arg1 isCropped:(BOOL)arg2 captureOrientation:(int)arg3 sizeInOut:(CGSize*)arg4 contextSizeOut:(CGSize*)arg5 transformOut:(CGAffineTransform*)arg6 ;
+(id)thumbnailsWithContentsOfFile:(id)arg1 format:(unsigned short)arg2 ;
-(id)description;
-(unsigned long long)count;
-(NSMutableDictionary *)options;
-(CGSize)size;
-(unsigned short)format;
-(int)bytesPerPixel;
-(int)bitsPerComponent;
-(id)_thumbnailData;
-(CGRect)imageRect;
-(id)initWithData:(id)arg1 format:(unsigned short)arg2 readOnly:(BOOL)arg3 ;
-(id)initWithData:(id)arg1 format:(unsigned short)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 format:(unsigned short)arg2 readOnly:(BOOL)arg3 ;
-(id)initWithContentsOfFile:(id)arg1 format:(unsigned short)arg2 ;
-(id)initWithImages:(id)arg1 format:(unsigned short)arg2 orientation:(int*)arg3 options:(id)arg4 delegate:(id)arg5 ;
-(id)serializedData;
-(BOOL)saveToFile:(id)arg1 ;
-(id)thumbnailDataAtIndex:(long long)arg1 ;
-(char*)thumbnailBytesAtIndex:(long long)arg1 ;
-(CGImageRef)thumbnailImageAtIndex:(long long)arg1 ;
-(NSData *)optionsData;
-(unsigned)bitmapInfo;
-(BOOL)writeBorderedThumbnailOfImage:(CGImageRef)arg1 toBuffer:(void*)arg2 orientation:(int*)arg3 format:(unsigned short)arg4 formatInfo:(const SCD_Struct_PL3*)arg5 delegate:(id)arg6 ;
@end

