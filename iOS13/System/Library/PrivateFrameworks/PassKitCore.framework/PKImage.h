/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSData;

@interface PKImage : NSObject <NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _shouldTile;
	BOOL _shouldStretch;
	PKEdgeInsets _capInsets;
	NSData* _imageData;
	CGImageRef _imageRef;
	double _scale;
	long long _orientation;

}

@property (nonatomic,readonly) NSData * imageData;                  //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,readonly) CGImageRef imageRef;                 //@synthesize imageRef=_imageRef - In the implementation block
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) long long orientation;               //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) double scale;                        //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) BOOL tiles; 
@property (nonatomic,readonly) BOOL stretches; 
@property (nonatomic,readonly) PKEdgeInsets capInsets; 
+(BOOL)supportsSecureCoding;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)hashOfImageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)URLForImageNamed:(id)arg1 inBundle:(id)arg2 scale:(double*)arg3 preferredScreenScale:(double)arg4 suffix:(id)arg5 ;
+(id)newImageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)newImageNamed:(id)arg1 inBundle:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 ;
+(id)URLForImageNamed:(id)arg1 inBundle:(id)arg2 scale:(double*)arg3 ;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 ;
+(id)passesImageNamed:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)size;
-(double)scale;
-(long long)orientation;
-(PKEdgeInsets)capInsets;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(long long)arg3 ;
-(BOOL)_isTiledWhenStretchedToSize:(CGSize)arg1 ;
-(id)initWithData:(id)arg1 scale:(double)arg2 ;
-(CGImageRef)imageRef;
-(BOOL)tiles;
-(NSData *)imageData;
-(id)imageHash;
-(void)drawInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(BOOL)isEqualToImage:(id)arg1 ;
-(void)_queue_createImageRefIfNecessary;
-(id)resizableImageByTilingWithCapInsets:(PKEdgeInsets)arg1 ;
-(void)drawInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 withBlendMode:(int)arg3 alpha:(double)arg4 ;
-(CGSize)downscaleSizeMatchingScale:(double)arg1 ;
-(void)preheatBitmapData;
-(BOOL)stretches;
-(id)blurredImageWithRadius:(unsigned long long)arg1 constraints:(id)arg2 ;
-(id)croppedImageWithInsets:(PKEdgeInsets)arg1 ;
-(id)imageWithoutCapInsets;
-(id)resizedImageWithConstraints:(id)arg1 ;
-(id)resizableImageByStretchingWithCapInsets:(PKEdgeInsets)arg1 ;
-(id)resizableImageByTilingCenterPixel;
@end

