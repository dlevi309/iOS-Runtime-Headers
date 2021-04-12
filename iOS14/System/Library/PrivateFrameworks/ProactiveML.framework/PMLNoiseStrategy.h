/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/


@protocol PMLNoiseStrategy <NSObject,PMLPlistAndChunksSerializableProtocol>
@required
-(void)addNoiseToSparseVector:(id)arg1;
-(void)addNoiseToSparseMatrix:(id)arg1;
-(BOOL)scaleAndAddNoiseToDenseVector:(id)arg1 usingNorm:(BOOL)arg2 scaleFactor:(float*)arg3;

@end

