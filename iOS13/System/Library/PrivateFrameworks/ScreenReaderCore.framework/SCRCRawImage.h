/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(char*)data;
-(void)setData:(char*)arg1 ;
-(long long)width;
-(long long)height;
-(void)setWidth:(long long)arg1 ;
-(void)setHeight:(long long)arg1 ;
-(long long)bytesPerPixel;
-(CGImageRef)imageRef;
-(void)setImageRef:(CGImageRef)arg1 ;
-(void)setBytesPerPixel:(long long)arg1 ;
@end

