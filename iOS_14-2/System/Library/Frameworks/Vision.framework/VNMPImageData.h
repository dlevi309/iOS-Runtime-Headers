/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


#import <Vision/Vision-Structs.h>
@class NSString;

@interface VNMPImageData : NSObject {

	BOOL _freeImageInDealloc;
	vImage_Buffer* _image;
	CVBufferRef _imageCVPixelBuffer;
	NSString* _imageFilePath;
	NSString* _externalImageId;
	long long _exifTimestamp;

}

@property (readonly) vImage_Buffer* image;                        //@synthesize image=_image - In the implementation block
@property (readonly) CVBufferRef imageCVPixelBuffer;              //@synthesize imageCVPixelBuffer=_imageCVPixelBuffer - In the implementation block
@property (retain) NSString * imageFilePath;                      //@synthesize imageFilePath=_imageFilePath - In the implementation block
@property (assign) BOOL freeImageInDealloc;                       //@synthesize freeImageInDealloc=_freeImageInDealloc - In the implementation block
@property (readonly) NSString * externalImageId;                  //@synthesize externalImageId=_externalImageId - In the implementation block
@property (readonly) long long exifTimestamp;                     //@synthesize exifTimestamp=_exifTimestamp - In the implementation block
-(NSString *)imageFilePath;
-(vImage_Buffer*)image;
-(id)initWithVImage:(vImage_Buffer*)arg1 externalImageId:(id)arg2 andExifTimestampString:(id)arg3 error:(id*)arg4 ;
-(id)initWithVImage:(vImage_Buffer*)arg1 externalImageId:(id)arg2 andExifTimestampValue:(long long)arg3 error:(id*)arg4 ;
-(id)initWithCVPixelBufferImage:(CVBufferRef)arg1 externalImageId:(id)arg2 andExifTimestampString:(id)arg3 error:(id*)arg4 ;
-(CVBufferRef)imageCVPixelBuffer;
-(BOOL)freeImageInDealloc;
-(void)setFreeImageInDealloc:(BOOL)arg1 ;
-(id)initWithCVPixelBufferImage:(CVBufferRef)arg1 externalImageId:(id)arg2 andExifTimestampValue:(long long)arg3 error:(id*)arg4 ;
-(NSString *)externalImageId;
-(void)setImageFilePath:(NSString *)arg1 ;
-(void)dealloc;
-(long long)exifTimestamp;
@end

