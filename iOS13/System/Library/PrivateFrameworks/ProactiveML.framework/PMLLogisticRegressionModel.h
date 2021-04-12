/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <libobjc.A.dylib/PMLRegressionModelProtocol.h>
#import <libobjc.A.dylib/PMLClassifierModelProtocol.h>
#import <libobjc.A.dylib/PMLPlistAndChunksSerializableProtocol.h>

@class PMLGradientSolver, NSString;

@interface PMLLogisticRegressionModel : NSObject <PMLRegressionModelProtocol, PMLClassifierModelProtocol, PMLPlistAndChunksSerializableProtocol> {

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
-(id)weights;
-(id)serialize;
-(float)predict:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(BOOL)classify:(id)arg1 ;
-(id)initWithSolver:(id)arg1 ;
@end

