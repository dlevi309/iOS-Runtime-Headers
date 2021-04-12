/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/


@protocol PMLNoiseStrategy <NSObject,PMLPlistAndChunksSerializableProtocol>
@required
-(void)addNoiseToSparseVector:(id)arg1;
-(void)addNoiseToSparseMatrix:(id)arg1;
-(BOOL)scaleAndAddNoiseToDenseVector:(id)arg1 usingNorm:(BOOL)arg2 scaleFactor:(float*)arg3;

@end

