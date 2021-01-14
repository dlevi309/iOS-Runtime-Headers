/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JFXMatting.h>

@interface JFXDepthAsMatte : JFXMatting {

	CVPixelBufferPoolRef _rotatedFBufferPool;
	CVPixelBufferPoolRef _scaledUpFBufferPool;
	CVPixelBufferPoolRef _alphaPool;

}
+(BOOL)_defaultMatteGeneratorPrefersDepth;
+(CGSize)mattingDepthInputSize;
-(void)dealloc;
-(id)initForFrameSet:(id)arg1 ;
-(void)alphaMatteForFrameSet:(id)arg1 mattingPerfState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

