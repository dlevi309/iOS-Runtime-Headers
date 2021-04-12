/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


#import <ARKit/ARKit-Structs.h>
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
-(void)dealloc;
-(CVBufferRef)pixelBuffer;
-(CGSize)regionOfInterest;
-(void)setPixelBuffer:(CVBufferRef)arg1 ;
-(CGSize)imageResolution;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 regionOfInterest:(CGSize)arg2 cropRegion:(CGRect)arg3 ;
-(CVBufferRef)undistortedPixelBuffer;
-(void)setUndistortedPixelBuffer:(CVBufferRef)arg1 ;
-(CGRect)cropRegion;
@end

