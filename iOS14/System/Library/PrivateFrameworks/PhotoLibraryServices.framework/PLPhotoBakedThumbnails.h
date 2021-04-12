/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)serializedData;
-(unsigned short)format;
-(CGSize)size;
-(NSMutableDictionary *)options;
-(unsigned long long)count;
-(id)_thumbnailData;
-(id)initWithData:(id)arg1 format:(unsigned short)arg2 readOnly:(BOOL)arg3 ;
-(BOOL)saveToFile:(id)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 format:(unsigned short)arg2 readOnly:(BOOL)arg3 ;
-(id)initWithImages:(id)arg1 format:(unsigned short)arg2 orientation:(int*)arg3 options:(id)arg4 delegate:(id)arg5 ;
-(id)thumbnailDataAtIndex:(long long)arg1 ;
-(char*)thumbnailBytesAtIndex:(long long)arg1 ;
-(CGImageRef)thumbnailImageAtIndex:(long long)arg1 ;
-(NSData *)optionsData;
-(id)description;
-(BOOL)writeBorderedThumbnailOfImage:(CGImageRef)arg1 toBuffer:(void*)arg2 orientation:(int*)arg3 format:(unsigned short)arg4 formatInfo:(const SCD_Struct_PL3*)arg5 delegate:(id)arg6 ;
-(int)bitsPerComponent;
-(unsigned)bitmapInfo;
-(CGRect)imageRect;
-(int)bytesPerPixel;
@end

