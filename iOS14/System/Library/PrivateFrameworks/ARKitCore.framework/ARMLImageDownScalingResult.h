/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


#import <ARKitCore/ARKitCore-Structs.h>
@interface ARMLImageDownScalingResult : NSObject {

	CVBufferRef _pixelBuffer;
	CVBufferRef _undistortedPixelBuffer;
	CGSize _regionOfInterest;
	CGRect _cropRegion;

}

@property (nonatomic,readonly) CVBufferRef pixelBuffer;                       //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (nonatomic,readonly) CGSize imageResolution; 
@property (nonatomic,readonly) CGSize regionOfInterest;                       //@synthesize regionOfInterest=_regionOfInterest - In the implementation block
@property (nonatomic,readonly) CGRect cropRegion;                             //@synthesize cropRegion=_cropRegion - In the implementation block
@property (assign,nonatomic) CVBufferRef undistortedPixelBuffer;              //@synthesize undistortedPixelBuffer=_undistortedPixelBuffer - In the implementation block
-(CGSize)regionOfInterest;
-(void)setPixelBuffer:(CVBufferRef)arg1 ;
-(CVBufferRef)pixelBuffer;
-(void)dealloc;
-(CGSize)imageResolution;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 regionOfInterest:(CGSize)arg2 cropRegion:(CGRect)arg3 ;
-(CVBufferRef)undistortedPixelBuffer;
-(void)setUndistortedPixelBuffer:(CVBufferRef)arg1 ;
-(CGRect)cropRegion;
@end

