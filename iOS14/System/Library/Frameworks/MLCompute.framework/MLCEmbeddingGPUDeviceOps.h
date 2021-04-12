/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCGPUDeviceOps.h>

@class NSNumber, NSArray;

@interface MLCEmbeddingGPUDeviceOps : MLCGPUDeviceOps {

	BOOL _scaleGradientByFrequency;
	id _gradientForWeights;
	NSNumber* _paddingIndex;
	NSArray* _embeddingParams;

}

@property (nonatomic,retain) id gradientForWeights;                      //@synthesize gradientForWeights=_gradientForWeights - In the implementation block
@property (nonatomic,copy) NSNumber * paddingIndex;                      //@synthesize paddingIndex=_paddingIndex - In the implementation block
@property (nonatomic,copy) NSArray * embeddingParams;                    //@synthesize embeddingParams=_embeddingParams - In the implementation block
@property (assign,nonatomic) BOOL scaleGradientByFrequency;              //@synthesize scaleGradientByFrequency=_scaleGradientByFrequency - In the implementation block
+(id)deviceOps;
-(id)gradientForWeights;
-(void)setGradientForWeights:(id)arg1 ;
-(NSNumber *)paddingIndex;
-(void)setPaddingIndex:(NSNumber *)arg1 ;
-(void)setEmbeddingParams:(NSArray *)arg1 ;
-(void)setScaleGradientByFrequency:(BOOL)arg1 ;
-(id)initWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 ;
-(NSArray *)embeddingParams;
-(BOOL)scaleGradientByFrequency;
@end

