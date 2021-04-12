/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)new;
+(BOOL)supportsSecureCoding;
+(id)inputWithCIImage:(id)arg1 ;
+(id)inputWithPixelBuffer:(id)arg1 ;
+(id)inputWithURL:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)size;
-(NSURL *)URL;
-(id)_initWithURL:(id)arg1 ;
-(AXMPixelBufferWrapper *)pixelBuffer;
-(CIImage *)ciImage;
-(long long)inputType;
-(id)_initWithCIImage:(id)arg1 ;
-(id)_initWithPixelBuffer:(id)arg1 ;
-(CGColorSpaceRef)imageColorSpace;
@end

