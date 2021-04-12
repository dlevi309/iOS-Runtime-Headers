/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CAMetalLayer.h>

@interface WebGPULayer : CAMetalLayer {

	GPUSwapChain* _swapChain;
	float _deviceScaleFactor;

}

@property (assign,nonatomic) GPUSwapChain* swapChain;              //@synthesize swapChain=_swapChain - In the implementation block
-(id)init;
-(CGImageRef)copyImageSnapshotWithColorSpace:(CGColorSpaceRef)arg1 ;
-(GPUSwapChain*)swapChain;
-(void)setSwapChain:(GPUSwapChain*)arg1 ;
@end

