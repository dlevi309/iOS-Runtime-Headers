/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

