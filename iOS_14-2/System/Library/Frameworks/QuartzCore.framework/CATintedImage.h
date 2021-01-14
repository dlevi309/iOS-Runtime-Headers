/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CATintedImage : NSObject <NSSecureCoding> {

	CGImageRef _image;
	CGColorRef _tint;
	unsigned _copy_flags;

}

@property (retain) CGImageRef image;              //@synthesize image=_image - In the implementation block
@property (retain) CGColorRef tint;               //@synthesize tint=_tint - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)tintedImageWithCGImage:(CGImageRef)arg1 tint:(CGColorRef)arg2 ;
+(id)tintedImageWithCABackingStore:(CABackingStoreRef)arg1 ;
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)tintedImageWithCGImage:(CGImageRef)arg1 tint:(CGColorRef)arg2 copyFlags:(unsigned)arg3 ;
-(void)CA_prepareRenderValue;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(void)setImage:(CGImageRef)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGImageRef)image;
-(void*)CA_copyRenderValue;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(void)setTint:(CGColorRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGColorRef)tint;
-(void)dealloc;
@end

