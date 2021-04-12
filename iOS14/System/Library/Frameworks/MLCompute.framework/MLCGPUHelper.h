/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/


#import <MLCompute/MLCompute-Structs.h>
@interface MLCGPUHelper : NSObject
+(void)synchronizeResource:(id)arg1 commandBuffer:(id)arg2 ;
+(unsigned long long)mtlStorageMode;
+(unsigned long long)mtlResourceOptions;
+(void)didModifyRange:(NSRange)arg1 buffer:(id)arg2 ;
+(void)concatChannelsForwardWithParams:(ConcatParams)arg1 sourceImageBatch:(id)arg2 resultImageBatch:(id)arg3 commandBuffer:(id)arg4 device:(id)arg5 deviceIndex:(unsigned long long)arg6 ;
+(void)copyMPSImageBatchToMatrixBatch:(id)arg1 commandBuffer:(id)arg2 sourceImageBatch:(id)arg3 destinationMatrixBatch:(id)arg4 ;
+(void)copyMatrixBatchToMPSImageBatch:(id)arg1 commandBuffer:(id)arg2 sourceMatrixBatch:(id)arg3 destinationImageBatch:(id)arg4 ;
@end

