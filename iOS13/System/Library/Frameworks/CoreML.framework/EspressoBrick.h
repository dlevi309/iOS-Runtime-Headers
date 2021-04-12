/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithParameters:(id)arg1;
-(id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;
-(BOOL)hasGPUSupport;

@end

