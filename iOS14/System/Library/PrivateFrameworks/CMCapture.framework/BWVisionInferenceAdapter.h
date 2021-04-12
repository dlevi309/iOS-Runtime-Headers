/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class VNProcessingDevice;

@interface BWVisionInferenceAdapter : NSObject {

	VNProcessingDevice* _applicationProcessingDevice;
	VNProcessingDevice* _graphicsProcessingDevice;
	VNProcessingDevice* _neuralProcessingDevice;

}

@property (nonatomic,readonly) VNProcessingDevice * applicationProcessingDevice;                       //@synthesize applicationProcessingDevice=_applicationProcessingDevice - In the implementation block
@property (nonatomic,readonly) VNProcessingDevice * graphicsProcessingDevice;                          //@synthesize graphicsProcessingDevice=_graphicsProcessingDevice - In the implementation block
@property (nonatomic,readonly) VNProcessingDevice * neuralProcessingDevice;                            //@synthesize neuralProcessingDevice=_neuralProcessingDevice - In the implementation block
@property (nonatomic,readonly) VNProcessingDevice * espressoBasedRequestProcessingDevice; 
+(void)initialize;
-(id)init;
-(VNProcessingDevice *)graphicsProcessingDevice;
-(VNProcessingDevice *)neuralProcessingDevice;
-(VNProcessingDevice *)espressoBasedRequestProcessingDevice;
-(VNProcessingDevice *)applicationProcessingDevice;
-(int)_executionTargetForProcessingDevice:(id)arg1 ;
-(id)inferenceProviderForType:(int)arg1 version:(SCD_Struct_BW5)arg2 configuration:(id)arg3 resourceProvider:(id)arg4 status:(int*)arg5 ;
-(void)dealloc;
@end

