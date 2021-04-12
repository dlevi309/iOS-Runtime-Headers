/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


#import <NanoPassKit/NanoPassKit-Structs.h>
@class NSData;

@interface NPKBitmapImage : NSObject {

	unsigned _bitmapInfo;
	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _bitsPerComponent;
	unsigned long long _bitsPerPixel;
	unsigned long long _bytesPerRow;
	NSData* _bitmapData;

}

@property (assign) unsigned long long width;                         //@synthesize width=_width - In the implementation block
@property (assign) unsigned long long height;                        //@synthesize height=_height - In the implementation block
@property (assign) unsigned long long bitsPerComponent;              //@synthesize bitsPerComponent=_bitsPerComponent - In the implementation block
@property (assign) unsigned long long bitsPerPixel;                  //@synthesize bitsPerPixel=_bitsPerPixel - In the implementation block
@property (assign) unsigned long long bytesPerRow;                   //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
@property (assign) unsigned bitmapInfo;                              //@synthesize bitmapInfo=_bitmapInfo - In the implementation block
@property (retain) NSData * bitmapData;                              //@synthesize bitmapData=_bitmapData - In the implementation block
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned long long)bytesPerRow;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(void)setBytesPerRow:(unsigned long long)arg1 ;
-(NSData *)bitmapData;
-(unsigned long long)bitsPerComponent;
-(void)setBitsPerComponent:(unsigned long long)arg1 ;
-(unsigned)bitmapInfo;
-(CGImageRef)createImageRef;
-(id)initWithCGImageRef:(CGImageRef)arg1 ;
-(unsigned long long)bitsPerPixel;
-(void)setBitsPerPixel:(unsigned long long)arg1 ;
-(void)setBitmapInfo:(unsigned)arg1 ;
-(void)setBitmapData:(NSData *)arg1 ;
-(id)initWithEncodedImage:(id)arg1 ;
-(id)encodedImage;
-(void)enumerateAllPixels:(/*^block*/id)arg1 ;
@end

