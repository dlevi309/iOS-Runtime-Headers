/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/

#import <VoiceShortcutClient/VoiceShortcutClient-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface WFRemoteImageDrawingContext : NSObject <NSSecureCoding> {

	BOOL _drawAlphaOnly;
	unsigned long long _imageCount;
	double _scale;
	CGColorSpaceRef _colorSpace;
	unsigned long long _bitsPerComponent;
	void* _buffer;
	unsigned long long _bufferSize;
	CGSize _singleImageSize;

}

@property (nonatomic,readonly) unsigned long long bitsPerComponent;                //@synthesize bitsPerComponent=_bitsPerComponent - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfComponents; 
@property (nonatomic,readonly) unsigned bitmapInfo; 
@property (nonatomic,readonly) double screenScale; 
@property (nonatomic,readonly) unsigned long long sizePerImage; 
@property (nonatomic,readonly) void* buffer;                                       //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) unsigned long long bufferSize;                      //@synthesize bufferSize=_bufferSize - In the implementation block
@property (nonatomic,readonly) unsigned long long imageCount;                      //@synthesize imageCount=_imageCount - In the implementation block
@property (nonatomic,readonly) double scale;                                       //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) CGSize singleImageSize;                             //@synthesize singleImageSize=_singleImageSize - In the implementation block
@property (nonatomic,readonly) CGColorSpaceRef colorSpace;                         //@synthesize colorSpace=_colorSpace - In the implementation block
@property (nonatomic,readonly) BOOL drawAlphaOnly;                                 //@synthesize drawAlphaOnly=_drawAlphaOnly - In the implementation block
+(BOOL)supportsSecureCoding;
-(CGColorSpaceRef)colorSpace;
-(double)scale;
-(void)encodeWithCoder:(id)arg1 ;
-(CGImageRef)imageAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)bufferSize;
-(unsigned long long)bitsPerComponent;
-(void*)buffer;
-(unsigned long long)numberOfComponents;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)imageCount;
-(unsigned)bitmapInfo;
-(unsigned long long)sizePerImage;
-(BOOL)drawAlphaOnly;
-(id)initWithAlphaOnlyImageCount:(unsigned long long)arg1 singleImageSize:(CGSize)arg2 scale:(double)arg3 ;
-(id)initWithImageCount:(unsigned long long)arg1 singleImageSize:(CGSize)arg2 scale:(double)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(id)initWithImageCount:(unsigned long long)arg1 singleImageSize:(CGSize)arg2 scale:(double)arg3 colorSpace:(CGColorSpaceRef)arg4 buffer:(void*)arg5 bufferSize:(unsigned long long)arg6 drawAlphaOnly:(BOOL)arg7 ;
-(BOOL)allocateSharedBuffer;
-(CGSize)singleImageSize;
-(void)accessBitmapContextForImageAtIndex:(unsigned long long)arg1 accessBlock:(/*^block*/id)arg2 ;
-(double)screenScale;
-(void)dealloc;
@end

