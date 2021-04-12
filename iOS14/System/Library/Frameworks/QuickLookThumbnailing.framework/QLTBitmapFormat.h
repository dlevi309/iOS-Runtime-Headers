/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/

#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface QLTBitmapFormat : NSObject <NSSecureCoding> {

	unsigned _bitmapInfo;
	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _bitsPerComponent;
	unsigned long long _bitsPerPixel;
	unsigned long long _bytesPerRow;
	CGColorSpaceRef _colorSpace;

}

@property (assign) unsigned long long width;                         //@synthesize width=_width - In the implementation block
@property (assign) unsigned long long height;                        //@synthesize height=_height - In the implementation block
@property (assign) unsigned long long bitsPerComponent;              //@synthesize bitsPerComponent=_bitsPerComponent - In the implementation block
@property (assign) unsigned long long bitsPerPixel;                  //@synthesize bitsPerPixel=_bitsPerPixel - In the implementation block
@property (assign) unsigned long long bytesPerRow;                   //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
@property (assign) unsigned bitmapInfo;                              //@synthesize bitmapInfo=_bitmapInfo - In the implementation block
@property (retain) CGColorSpaceRef colorSpace;                       //@synthesize colorSpace=_colorSpace - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)bitmapFormatWithBitmapImage:(CGImageRef)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(unsigned long long)width;
-(BOOL)isEqualToFormat:(id)arg1 ;
-(unsigned long long)bytesPerRow;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)height;
-(id)description;
-(unsigned long long)bitsPerComponent;
-(void)setBitsPerComponent:(unsigned long long)arg1 ;
-(void)setBytesPerRow:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)bitmapInfo;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)bitsPerPixel;
-(void)setBitsPerPixel:(unsigned long long)arg1 ;
-(void)setBitmapInfo:(unsigned)arg1 ;
-(id)initWithBitmapContext:(CGContextRef)arg1 ;
@end

