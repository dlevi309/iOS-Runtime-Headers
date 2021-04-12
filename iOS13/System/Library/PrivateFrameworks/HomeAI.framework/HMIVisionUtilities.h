/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMIVisionUtilities : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(CVBufferRef)transferPixelBuffer:(CVBufferRef)arg1 pixelFormat:(unsigned)arg2 options:(long long)arg3 error:(id*)arg4 ;
+(CVBufferRef)createPixelBufferWithSize:(CGSize)arg1 pixelFormat:(unsigned)arg2 useIOSurface:(BOOL)arg3 ;
+(CVBufferRef)transferPixelBuffer:(CVBufferRef)arg1 crop:(CGRect)arg2 size:(CGSize)arg3 pixelFormat:(unsigned)arg4 options:(long long)arg5 error:(id*)arg6 ;
+(CGRect)applyPadding:(CGRect)arg1 withOriginalSize:(CGSize)arg2 padding:(CGSize)arg3 ;
+(CVBufferRef)cropPixelBuffer:(CVBufferRef)arg1 crop:(CGRect)arg2 error:(id*)arg3 ;
+(CVBufferRef)resizePixelBuffer:(CVBufferRef)arg1 size:(CGSize)arg2 error:(id*)arg3 ;
+(CVBufferRef)resizePixelBuffer:(CVBufferRef)arg1 size:(CGSize)arg2 pixelFormat:(unsigned)arg3 options:(long long)arg4 error:(id*)arg5 ;
+(CVBufferRef)dewarpPixelBuffer:(CVBufferRef)arg1 crop:(CGRect)arg2 size:(CGSize)arg3 pixelFormat:(unsigned)arg4 options:(long long)arg5 cameraModel:(id)arg6 error:(id*)arg7 ;
+(CGRect)imposeMinSizeFor:(CGRect)arg1 withOriginalSize:(CGSize)arg2 minCrop:(int)arg3 ;
+(CGRect)maintainAspectRatio:(CGRect)arg1 originalSize:(CGSize)arg2 ratioThreshold:(float)arg3 ;
@end

