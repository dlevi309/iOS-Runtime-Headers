/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CIImage, AXMPixelBufferWrapper, NSURL;

@interface AXMPipelineContextInput : NSObject <NSSecureCoding> {

	long long _inputType;
	CIImage* _ciImage;
	AXMPixelBufferWrapper* _pixelBuffer;
	CGColorSpaceRef _extendedSRGBColorSpace;
	NSURL* _URL;
	CGSize _cachedImageURLSize;

}

@property (nonatomic,readonly) long long inputType; 
@property (nonatomic,readonly) CIImage * ciImage; 
@property (nonatomic,readonly) AXMPixelBufferWrapper * pixelBuffer; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CGColorSpaceRef imageColorSpace; 
@property (nonatomic,readonly) CVBufferRef wrappedPixelBuffer; 
+(id)new;
+(BOOL)supportsSecureCoding;
+(id)inputWithCIImage:(id)arg1 ;
+(id)inputWithPixelBuffer:(id)arg1 ;
+(id)inputWithURL:(id)arg1 ;
-(CIImage *)ciImage;
-(id)init;
-(CGSize)size;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)inputType;
-(id)description;
-(id)_initWithCIImage:(id)arg1 ;
-(id)_initWithPixelBuffer:(id)arg1 ;
-(CGColorSpaceRef)imageColorSpace;
-(CGImageRef)createCGImageWithMetrics:(id)arg1 ;
-(CVBufferRef)wrappedPixelBuffer;
-(NSURL *)URL;
-(AXMPixelBufferWrapper *)pixelBuffer;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithURL:(id)arg1 ;
-(void)dealloc;
@end

