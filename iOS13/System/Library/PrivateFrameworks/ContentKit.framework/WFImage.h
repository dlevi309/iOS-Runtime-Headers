/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIImage, NSImage, NSURL, NSData, NSString, NSBundle;

@interface WFImage : NSObject <NSCopying, NSSecureCoding> {

	id _internalCGImage;
	id _internalImageSource;
	UIImage* _platformImage;
	BOOL _allowsAnimated;
	unsigned _orientation;
	CGImageRef _CGImage;
	double _scale;
	NSImage* _NSImage;
	long long _renderingMode;
	long long _representationType;
	NSURL* _URL;
	NSData* _data;
	NSString* _name;
	NSBundle* _bundle;

}

@property (nonatomic,readonly) NSData * PNGRepresentation; 
@property (nonatomic,readonly) BOOL isScreenshot; 
@property (nonatomic,readonly) CGImageSourceRef internalImageSource; 
@property (nonatomic,readonly) CGImageRef internalCGImage; 
@property (assign,nonatomic) long long renderingMode;                             //@synthesize renderingMode=_renderingMode - In the implementation block
@property (nonatomic,readonly) long long representationType;                      //@synthesize representationType=_representationType - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                                  //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSData * data;                                //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSBundle * bundle;                                 //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) BOOL allowsAnimated;                               //@synthesize allowsAnimated=_allowsAnimated - In the implementation block
@property (nonatomic,readonly) CGImageRef CGImage;                                //@synthesize CGImage=_CGImage - In the implementation block
@property (nonatomic,readonly) double scale;                                      //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) unsigned orientation;                              //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) UIImage * platformImage; 
@property (nonatomic,readonly) UIImage * UIImage; 
@property (nonatomic,readonly) NSImage * NSImage;                                 //@synthesize NSImage=_NSImage - In the implementation block
@property (nonatomic,readonly) CGSize CGImageSize; 
@property (nonatomic,readonly) CGSize sizeInPixels; 
@property (nonatomic,readonly) CGSize sizeInPoints; 
+(id)actionKitImageNamed:(id)arg1 ;
+(id)workflowKitImageNamed:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)imageWithData:(id)arg1 ;
+(id)imageWithContentsOfURL:(id)arg1 ;
+(id)imageWithCGImage:(CGImageRef)arg1 ;
+(id)imageWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(unsigned)arg3 ;
+(id)imageWithData:(id)arg1 scale:(double)arg2 ;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)imageWithData:(id)arg1 scale:(double)arg2 allowAnimated:(BOOL)arg3 ;
+(id)applicationIconImageForBundleIdentifier:(id)arg1 ;
+(id)applicationIconImageForBundleIdentifier:(id)arg1 format:(unsigned long long)arg2 ;
+(BOOL)imageSizeIndicatesScreenshot:(CGSize)arg1 ;
+(id)applicationIconImageForCalendarDate:(id)arg1 format:(unsigned long long)arg2 ;
+(id)documentIconImageForFileType:(id)arg1 ;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 scale:(double)arg3 ;
+(id)imageWithDeviceScreenScaleImageData:(id)arg1 ;
+(id)imageWithPlatformImage:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(NSData *)data;
-(NSURL *)URL;
-(double)scale;
-(NSBundle *)bundle;
-(unsigned)orientation;
-(CGImageRef)CGImage;
-(long long)renderingMode;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(unsigned)arg3 ;
-(CGSize)sizeInPixels;
-(void)setRenderingMode:(long long)arg1 ;
-(id)initWithPlatformImage:(id)arg1 ;
-(UIImage *)platformImage;
-(UIImage *)UIImage;
-(id)applicationIconImageWithFormat:(unsigned long long)arg1 ;
-(NSData *)PNGRepresentation;
-(void)drawInContext:(id)arg1 inRect:(CGRect)arg2 ;
-(BOOL)isScreenshot;
-(long long)representationType;
-(CGImageRef)createNonRotatedCGImageRepresentation;
-(id)tintedImageWithColor:(id)arg1 ;
-(id)initWithRepresentationType:(long long)arg1 ;
-(id)initWithData:(id)arg1 scale:(double)arg2 allowAnimated:(BOOL)arg3 ;
-(id)initWithName:(id)arg1 inBundle:(id)arg2 scale:(double)arg3 ;
-(CGSize)CGImageSize;
-(CGSize)sizeInPoints;
-(void)drawInContext:(id)arg1 inRect:(CGRect)arg2 blendMode:(int)arg3 alpha:(double)arg4 ;
-(BOOL)hasValidImage;
-(CGImageSourceRef)internalImageSource;
-(CGImageRef)internalCGImage;
-(CGAffineTransform)contentsTransformForDrawingWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(NSImage *)NSImage;
-(BOOL)allowsAnimated;
@end

