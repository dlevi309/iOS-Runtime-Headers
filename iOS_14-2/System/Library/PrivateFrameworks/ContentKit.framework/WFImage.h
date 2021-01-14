/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIImage, NSImage, NSURL, NSData;

@interface WFImage : NSObject <NSCopying, NSSecureCoding> {

	id _internalCGImage;
	id _internalImageSource;
	UIImage* _platformImage;
	BOOL _allowsAnimated;
	unsigned _orientation;
	CGImageRef _CGImage;
	double _scale;
	unsigned long long _renderingMode;
	NSImage* _NSImage;
	long long _representationType;
	NSURL* _URL;
	NSData* _data;

}

@property (nonatomic,readonly) NSData * PNGRepresentation; 
@property (nonatomic,readonly) BOOL isScreenshot; 
@property (nonatomic,readonly) CGImageSourceRef internalImageSource; 
@property (nonatomic,readonly) CGImageRef internalCGImage; 
@property (nonatomic,readonly) long long representationType;                      //@synthesize representationType=_representationType - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                                  //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSData * data;                                //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) BOOL allowsAnimated;                               //@synthesize allowsAnimated=_allowsAnimated - In the implementation block
@property (nonatomic,readonly) CGImageRef CGImage;                                //@synthesize CGImage=_CGImage - In the implementation block
@property (nonatomic,readonly) double scale;                                      //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) unsigned orientation;                              //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) unsigned long long renderingMode;                  //@synthesize renderingMode=_renderingMode - In the implementation block
@property (nonatomic,readonly) UIImage * platformImage; 
@property (nonatomic,readonly) UIImage * UIImage; 
@property (nonatomic,readonly) NSImage * NSImage;                                 //@synthesize NSImage=_NSImage - In the implementation block
@property (nonatomic,readonly) CGSize CGImageSize; 
@property (nonatomic,readonly) CGSize sizeInPixels; 
@property (nonatomic,readonly) CGSize sizeInPoints; 
+(id)actionKitImageNamed:(id)arg1 ;
+(id)workflowKitImageNamed:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)imageWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(unsigned)arg3 ;
+(id)imageWithContentsOfURL:(id)arg1 ;
+(id)imageWithData:(id)arg1 ;
+(id)imageWithData:(id)arg1 scale:(double)arg2 ;
+(id)imageWithCGImage:(CGImageRef)arg1 ;
+(id)imageWithData:(id)arg1 scale:(double)arg2 allowAnimated:(BOOL)arg3 ;
+(id)applicationIconImageForBundleIdentifier:(id)arg1 ;
+(id)applicationIconImageForBundleIdentifier:(id)arg1 format:(unsigned long long)arg2 ;
+(id)systemImageNamed:(id)arg1 pointSize:(double)arg2 inCatalogs:(id)arg3 ;
+(id)systemImageNamed:(id)arg1 pointSize:(double)arg2 ;
+(id)imageWithDeviceScreenScaleImageData:(id)arg1 ;
+(id)systemImageNamed:(id)arg1 pointSize:(double)arg2 scaleFactor:(double)arg3 rightToLeft:(BOOL)arg4 appearanceName:(id)arg5 inCatalogs:(id)arg6 ;
+(id)systemImageNamed:(id)arg1 pointSize:(double)arg2 scaleFactor:(double)arg3 rightToLeft:(BOOL)arg4 appearanceName:(id)arg5 ;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 scale:(double)arg3 ;
+(BOOL)imageSizeIndicatesScreenshot:(CGSize)arg1 ;
+(id)documentIconImageForFileType:(id)arg1 ;
+(id)applicationIconImageForCalendarDate:(id)arg1 format:(unsigned long long)arg2 ;
+(id)imageWithPlatformImage:(id)arg1 ;
-(unsigned long long)renderingMode;
-(CGSize)sizeInPixels;
-(id)initWithContentsOfURL:(id)arg1 ;
-(UIImage *)UIImage;
-(id)init;
-(UIImage *)platformImage;
-(double)scale;
-(void)encodeWithCoder:(id)arg1 ;
-(id)imageWithTintColor:(id)arg1 ;
-(long long)representationType;
-(id)initWithPlatformImage:(id)arg1 ;
-(NSData *)data;
-(NSURL *)URL;
-(unsigned long long)hash;
-(unsigned)orientation;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isScreenshot;
-(NSImage *)NSImage;
-(BOOL)hasValidImage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(unsigned)arg3 ;
-(CGImageRef)CGImage;
-(id)imageWithRenderingMode:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)tintedImageWithColor:(id)arg1 ;
-(void)drawInContext:(id)arg1 inRect:(CGRect)arg2 ;
-(NSData *)PNGRepresentation;
-(id)applicationIconImageWithFormat:(unsigned long long)arg1 ;
-(CGSize)sizeInPoints;
-(id)resizedImageWithSizeInPoints:(CGSize)arg1 ;
-(id)resizedImageWithSizeInPoints:(CGSize)arg1 scale:(double)arg2 ;
-(CGImageRef)createNonRotatedCGImageRepresentation;
-(id)initWithRepresentationType:(long long)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(unsigned)arg3 renderingMode:(unsigned long long)arg4 ;
-(id)initWithData:(id)arg1 scale:(double)arg2 allowAnimated:(BOOL)arg3 ;
-(CGSize)CGImageSize;
-(void)drawInContext:(id)arg1 inRect:(CGRect)arg2 blendMode:(int)arg3 alpha:(double)arg4 ;
-(CGImageSourceRef)internalImageSource;
-(CGImageRef)internalCGImage;
-(CGAffineTransform)contentsTransformForDrawingWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(BOOL)allowsAnimated;
@end

