/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/BWInferenceConfiguration.h>

@protocol MTLCommandQueue;
@interface BWMattingInferenceConfiguration : BWInferenceConfiguration {

	float _mainImageDownscalingFactor;
	BOOL _refinedDepthDeliveryEnabled;
	id<MTLCommandQueue> _metalCommandQueue;

}

@property (assign,nonatomic) float mainImageDownscalingFactor;                   //@synthesize mainImageDownscalingFactor=_mainImageDownscalingFactor - In the implementation block
@property (assign,nonatomic) BOOL refinedDepthDeliveryEnabled;                   //@synthesize refinedDepthDeliveryEnabled=_refinedDepthDeliveryEnabled - In the implementation block
@property (assign,nonatomic) id<MTLCommandQueue> metalCommandQueue;              //@synthesize metalCommandQueue=_metalCommandQueue - In the implementation block
-(void)setMainImageDownscalingFactor:(float)arg1 ;
-(id<MTLCommandQueue>)metalCommandQueue;
-(void)setMetalCommandQueue:(id<MTLCommandQueue>)arg1 ;
-(float)mainImageDownscalingFactor;
-(BOOL)refinedDepthDeliveryEnabled;
-(void)setRefinedDepthDeliveryEnabled:(BOOL)arg1 ;
@end

