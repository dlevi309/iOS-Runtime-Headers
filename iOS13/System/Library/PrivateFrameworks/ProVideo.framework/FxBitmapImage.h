/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface FxBitmapImage : NSObject {

	FxBitmapImagePriv* _priv;

}
+(id)bitmapWithData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(CGSize)arg3 format:(int)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
+(id)bitmapWithSize:(CGSize)arg1 format:(int)arg2 colorSpace:(CGColorSpaceRef)arg3 ;
-(void)dealloc;
-(void*)bytes;
-(id)data;
-(CGSize)size;
-(unsigned long long)bytesPerRow;
-(CGColorSpaceRef)colorSpace;
-(int)pixelFormat;
-(CGImageRef)cgImage;
-(CGContextRef)cgContext;
-(id)initWithData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(CGSize)arg3 format:(int)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
@end

