/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIImageProcessorInOut.h>
#import <libobjc.A.dylib/CIImageProcessorInput.h>

@protocol CIImageProcessorInput
@property (nonatomic,readonly) CGRect region; 
@property (nonatomic,readonly) unsigned long long bytesPerRow; 
@property (nonatomic,readonly) int format; 
@property (nonatomic,readonly) const void* baseAddress; 
@property (nonatomic,readonly) IOSurfaceRef surface; 
@property (nonatomic,readonly) CVBufferRef pixelBuffer; 
@property (nonatomic,readonly) id<MTLTexture> metalTexture; 
@required
-(const void*)baseAddress;
-(CGRect)region;
-(unsigned long long)bytesPerRow;
-(int)format;
-(CVBufferRef)pixelBuffer;
-(id<MTLTexture>)metalTexture;
-(IOSurfaceRef)surface;

@end


@interface CIImageProcessorInput : CIImageProcessorInOut <CIImageProcessorInput>

@property (nonatomic,readonly) CGRect region; 
@property (nonatomic,readonly) unsigned long long bytesPerRow; 
@property (nonatomic,readonly) int format; 
@property (nonatomic,readonly) const void* baseAddress; 
@property (nonatomic,readonly) IOSurfaceRef surface; 
@property (nonatomic,readonly) CVBufferRef pixelBuffer; 
@property (nonatomic,readonly) id<MTLTexture> metalTexture; 
-(void)dealloc;
-(const void*)baseAddress;
-(id<MTLTexture>)metalTexture;
-(id)initWithSurface:(IOSurfaceRef)arg1 texture:(Texture*)arg2 allowSRGB:(BOOL)arg3 bounds:(CGRect)arg4 context:(Context*)arg5 ;
@end

