/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/BWInferenceConfiguration.h>

@protocol MTLCommandQueue;
@interface BWMattingInferenceConfiguration : BWInferenceConfiguration {

	float _mainImageDownscalingFactor;
	BOOL _refinedDepthDeliveryEnabled;
	id<MTLCommandQueue> _metalCommandQueue;

}

@property (assign,nonatomic) float mainImageDownscalingFactor;                   //@synthesize mainImageDownscalingFactor=_mainImageDownscalingFactor - In the implementation block
@property (assign,nonatomic) BOOL refinedDepthDeliveryEnabled;                   //@synthesize refinedDepthDeliveryEnabled=_refinedDepthDeliveryEnabled - In the implementation block
@property (assign,nonatomic) id<MTLCommandQueue> metalCommandQueue;              //@synthesize metalCommandQueue=_metalCommandQueue - In the implementation block
-(id<MTLCommandQueue>)metalCommandQueue;
-(void)setMetalCommandQueue:(id<MTLCommandQueue>)arg1 ;
-(float)mainImageDownscalingFactor;
-(BOOL)refinedDepthDeliveryEnabled;
-(void)setMainImageDownscalingFactor:(float)arg1 ;
-(void)setRefinedDepthDeliveryEnabled:(BOOL)arg1 ;
@end

