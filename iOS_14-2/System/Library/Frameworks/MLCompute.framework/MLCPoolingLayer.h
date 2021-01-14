/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCLayer.h>

@class MLCPoolingDescriptor;

@interface MLCPoolingLayer : MLCLayer {

	MLCPoolingDescriptor* _descriptor;

}

@property (nonatomic,copy,readonly) MLCPoolingDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
+(id)layerWithDescriptor:(id)arg1 ;
-(id)initWithDescriptor:(id)arg1 ;
-(MLCPoolingDescriptor *)descriptor;
-(id)description;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)summarizedDOTDescription;
@end

