/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <libobjc.A.dylib/PMLMultiLabelClassifierProtocol.h>
#import <libobjc.A.dylib/PMLPlistAndChunksSerializableProtocol.h>

@class PMLGradientSolver, NSString;

@interface PMLLogisticRegressionModel : NSObject <PMLMultiLabelClassifierProtocol, PMLPlistAndChunksSerializableProtocol> {

	PMLGradientSolver* _solver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)solverWithWeights:(id)arg1 andIntercept:(BOOL)arg2 ;
+(id)solverWithWeights:(id)arg1 ;
+(id)solverWithWeights:(id)arg1 andIntercept:(BOOL)arg2 learningRate:(float)arg3 minIterations:(unsigned long long)arg4 stoppingThreshold:(float)arg5 ;
+(id)withWeights:(id)arg1 ;
+(id)withWeights:(id)arg1 andIntercept:(BOOL)arg2 ;
-(id)serialize;
-(id)predict:(id)arg1 ;
-(id)weights;
-(id)initWithSolver:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(unsigned long long)outputDimension;
@end

