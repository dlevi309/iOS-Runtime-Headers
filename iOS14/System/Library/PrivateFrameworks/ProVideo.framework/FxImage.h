/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FxImage : NSObject <NSCopying> {

	FxImagePriv* _imagePriv;

}
+(id)alloc;
-(void)setHeight:(unsigned long long)arg1 ;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(void)setOrigin:(unsigned long long)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(CGRect)bounds;
-(unsigned long long)field;
-(unsigned long long)origin;
-(unsigned long long)width;
-(FxRect)dod;
-(id)init;
-(unsigned long long)pixelFormat;
-(unsigned long long)size;
-(unsigned long long)bytes;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setDepth:(unsigned long long)arg1 ;
-(unsigned long long)height;
-(void)setBounds:(CGRect)arg1 ;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(SCD_Struct_PA83)imageInfo;
-(void)setColorInfo:(unsigned long long)arg1 ;
-(double)scaleX;
-(double)scaleY;
-(void)setBytes:(unsigned long long)arg1 ;
-(void)setField:(unsigned long long)arg1 ;
-(id)initWithInfo:(SCD_Struct_PA83)arg1 ;
-(void)setImageType:(unsigned long long)arg1 ;
-(unsigned long long)colorInfo;
-(unsigned long long)imageType;
-(unsigned long long)depth;
-(unsigned long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)eyeType;
-(void)setDod:(FxRect)arg1 ;
-(void)dealloc;
-(BOOL)isPremultiplied;
-(void)setScaleX:(double)arg1 ;
-(void)setScaleY:(double)arg1 ;
-(double)pixelAspect;
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
-(void)setPixelTransform:(id)arg1 ;
-(void)setDeallocCallback:(/*function pointer*/void*)arg1 refcon:(void*)arg2 ;
-(BOOL)_verifyImage;
@end

