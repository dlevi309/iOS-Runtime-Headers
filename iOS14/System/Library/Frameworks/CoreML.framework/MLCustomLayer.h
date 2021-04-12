/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@protocol MLCustomLayer
@optional
-(BOOL)encodeToCommandBuffer:(id)arg1 inputs:(id)arg2 outputs:(id)arg3 error:(id*)arg4;

@required
-(BOOL)setWeightData:(id)arg1 error:(id*)arg2;
-(id)initWithParameterDictionary:(id)arg1 error:(id*)arg2;
-(id)outputShapesForInputShapes:(id)arg1 error:(id*)arg2;
-(BOOL)evaluateOnCPUWithInputs:(id)arg1 outputs:(id)arg2 error:(id*)arg3;

@end

