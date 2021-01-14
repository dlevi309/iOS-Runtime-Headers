/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@protocol EspressoBrick <NSObject>
@optional
-(void)setMappedWeights:(void*)arg1 sizeInBytes:(unsigned long long)arg2;
-(void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2;
-(void)encodeToMetalCommandBuffer:(id)arg1 inputTensors:(id)arg2 outputTensors:(id)arg3;
-(BOOL)hasDynamicOutputShape:(unsigned long long)arg1;
-(id)computeDynamicOutputShape:(id)arg1;

@required
-(id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;
-(BOOL)hasGPUSupport;
-(id)initWithParameters:(id)arg1;

@end

