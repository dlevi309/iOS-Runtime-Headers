/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)tintedImageWithCABackingStore:(CABackingStoreRef)arg1 ;
+(id)tintedImageWithCGImage:(CGImageRef)arg1 tint:(CGColorRef)arg2 copyFlags:(unsigned)arg3 ;
+(id)tintedImageWithCGImage:(CGImageRef)arg1 tint:(CGColorRef)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGImageRef)image;
-(void)setImage:(CGImageRef)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void*)CA_copyRenderValue;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(void)CA_prepareRenderValue;
-(CGColorRef)tint;
-(void)setTint:(CGColorRef)arg1 ;
@end

