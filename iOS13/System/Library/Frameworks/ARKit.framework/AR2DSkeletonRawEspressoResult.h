/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARResultData.h>

@class ARImageData, NSString;

@interface AR2DSkeletonRawEspressoResult : NSObject <ARResultData> {

	ARImageData* _imageDataForNeuralNetwork;
	ARImageData* _inputImageData;
	long long _rotationNeeded;
	CVBufferRef _heatMapBuffer;
	CVBufferRef _affinityMapBuffer;
	CGSize _regionOfInterest;
	 _heatMapShape;
	 _heatMapStrides;
	 _affinityMapShape;
	 _affinityMapStrides;

}

@property (nonatomic,readonly) ARImageData * imageDataForNeuralNetwork;              //@synthesize imageDataForNeuralNetwork=_imageDataForNeuralNetwork - In the implementation block
@property (nonatomic,readonly) ARImageData * inputImageData;                         //@synthesize inputImageData=_inputImageData - In the implementation block
@property (nonatomic,readonly) long long rotationNeeded;                             //@synthesize rotationNeeded=_rotationNeeded - In the implementation block
@property (nonatomic,readonly) CGSize regionOfInterest;                              //@synthesize regionOfInterest=_regionOfInterest - In the implementation block
@property (nonatomic,readonly) CVBufferRef heatMapBuffer;                            //@synthesize heatMapBuffer=_heatMapBuffer - In the implementation block
@property (nonatomic,readonly)  heatMapShape;                                        //@synthesize heatMapShape=_heatMapShape - In the implementation block
@property (nonatomic,readonly)  heatMapStrides;                                      //@synthesize heatMapStrides=_heatMapStrides - In the implementation block
@property (nonatomic,readonly) CVBufferRef affinityMapBuffer;                        //@synthesize affinityMapBuffer=_affinityMapBuffer - In the implementation block
@property (nonatomic,readonly)  affinityMapShape;                                    //@synthesize affinityMapShape=_affinityMapShape - In the implementation block
@property (nonatomic,readonly)  affinityMapStrides;                                  //@synthesize affinityMapStrides=_affinityMapStrides - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(CGSize)regionOfInterest;
-(id)initWithMLImage:(id)arg1 originalImageData:(id)arg2 rotationNeeded:(long long)arg3 regionOfInterest:(CGSize)arg4 heatMapBuffer:(CVBufferRef)arg5 heatMapShape:(CVBufferRef)arg6 ;
-(ARImageData *)imageDataForNeuralNetwork;
-(ARImageData *)inputImageData;
-(long long)rotationNeeded;
-(CVBufferRef)heatMapBuffer;
-()heatMapShape;
-()heatMapStrides;
-(CVBufferRef)affinityMapBuffer;
-()affinityMapShape;
-()affinityMapStrides;
@end

