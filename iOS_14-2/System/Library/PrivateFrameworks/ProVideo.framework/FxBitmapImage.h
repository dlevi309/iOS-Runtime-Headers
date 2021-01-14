/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface FxBitmapImage : NSObject {

	FxBitmapImagePriv* _priv;

}
+(id)bitmapWithData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(CGSize)arg3 format:(int)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
+(id)bitmapWithSize:(CGSize)arg1 format:(int)arg2 colorSpace:(CGColorSpaceRef)arg3 ;
-(CGColorSpaceRef)colorSpace;
-(int)pixelFormat;
-(CGSize)size;
-(unsigned long long)bytesPerRow;
-(void*)bytes;
-(CGContextRef)cgContext;
-(id)data;
-(CGImageRef)cgImage;
-(void)dealloc;
-(id)initWithData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(CGSize)arg3 format:(int)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
@end

