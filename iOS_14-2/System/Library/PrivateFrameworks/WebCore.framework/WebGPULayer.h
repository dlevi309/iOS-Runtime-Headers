/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSwapChain:(GPUSwapChain*)arg1 ;
-(GPUSwapChain*)swapChain;
@end

