/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FxImage : NSObject <NSCopying> {

	FxImagePriv* _imagePriv;

}
+(id)alloc;
-(id)init;
-(void)dealloc;
-(unsigned long long)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)size;
-(unsigned long long)depth;
-(unsigned long long)version;
-(unsigned long long)width;
-(unsigned long long)height;
-(CGRect)bounds;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(unsigned long long)origin;
-(unsigned long long)pixelFormat;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(void)setDepth:(unsigned long long)arg1 ;
-(id)initWithInfo:(SCD_Struct_PA80)arg1 ;
-(void)setOrigin:(unsigned long long)arg1 ;
-(unsigned long long)field;
-(void)setImageType:(unsigned long long)arg1 ;
-(unsigned long long)imageType;
-(void)setField:(unsigned long long)arg1 ;
-(void)setBytes:(unsigned long long)arg1 ;
-(unsigned long long)colorInfo;
-(SCD_Struct_PA80)imageInfo;
-(void)setColorInfo:(unsigned long long)arg1 ;
-(BOOL)isPremultiplied;
-(void)setScaleX:(double)arg1 ;
-(void)setScaleY:(double)arg1 ;
-(double)scaleX;
-(double)scaleY;
-(double)pixelAspect;
-(FxRect)dod;
-(id)pixelTransform;
-(id)inversePixelTransform;
-(unsigned long long)fieldOrder;
-(unsigned long long)numActiveChannels;
-(BOOL)containsPointX:(int)arg1 Y:(int)arg2 ;
-(void)setWidth:(unsigned long long)arg1 andHeight:(unsigned long long)arg2 ;
-(void)setNumActiveChannels:(unsigned long long)arg1 ;
-(void)setIsPremultiplied:(BOOL)arg1 ;
-(void)setPixelAspect:(double)arg1 ;
-(void)setFieldOrder:(unsigned long long)arg1 ;
-(unsigned long long)fxColorPrimaries;
-(void)setFxColorPrimaries:(unsigned long long)arg1 ;
-(void)setEyeType:(int)arg1 ;
-(int)eyeType;
-(void)setDod:(FxRect)arg1 ;
-(void)setPixelTransform:(id)arg1 ;
-(void)setDeallocCallback:(/*function pointer*/void*)arg1 refcon:(void*)arg2 ;
-(BOOL)_verifyImage;
@end

