/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCLossLayer.h>

@class MLCYOLOLossDescriptor;

@interface MLCYOLOLossLayer : MLCLossLayer {

	MLCYOLOLossDescriptor* _yoloLossDescriptor;

}

@property (nonatomic,copy,readonly) MLCYOLOLossDescriptor * yoloLossDescriptor;              //@synthesize yoloLossDescriptor=_yoloLossDescriptor - In the implementation block
+(id)layerWithDescriptor:(id)arg1 ;
-(id)description;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)summarizedDOTDescription;
-(unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2 ;
-(id)initWithLossDescriptor:(id)arg1 ;
-(MLCYOLOLossDescriptor *)yoloLossDescriptor;
@end

