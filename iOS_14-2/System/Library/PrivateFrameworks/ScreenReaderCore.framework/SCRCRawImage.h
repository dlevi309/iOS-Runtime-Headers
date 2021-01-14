/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/


#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
@interface SCRCRawImage : NSObject {

	CGImageRef _imageRef;
	char* _data;
	long long _width;
	long long _height;
	long long _bytesPerPixel;

}

@property (assign,nonatomic) char* data;                           //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) long long width;                      //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) long long height;                     //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) long long bytesPerPixel;              //@synthesize bytesPerPixel=_bytesPerPixel - In the implementation block
@property (nonatomic,retain) CGImageRef imageRef;                  //@synthesize imageRef=_imageRef - In the implementation block
+(id)rawImageForImage:(CGImageRef)arg1 ;
-(void)setHeight:(long long)arg1 ;
-(long long)width;
-(void)setWidth:(long long)arg1 ;
-(long long)height;
-(void)setData:(char*)arg1 ;
-(char*)data;
-(CGImageRef)imageRef;
-(void)setImageRef:(CGImageRef)arg1 ;
-(void)dealloc;
-(long long)bytesPerPixel;
-(void)setBytesPerPixel:(long long)arg1 ;
@end

