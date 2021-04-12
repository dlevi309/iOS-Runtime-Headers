/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPCNNConvBlock.h>

@interface VCPCNNConvBlockVector : VCPCNNConvBlock {

	/*function pointer*/void* CalculateDotProductOfChunk;

}
+(BOOL)isFilterSizeSupported:(int)arg1 ;
-(int)forward;
-(id)initWithParameters:(int)arg1 filterNum:(int)arg2 chunk:(int)arg3 reLU:(BOOL)arg4 padding:(BOOL)arg5 groups:(int)arg6 stride:(int)arg7 batchNorm:(BOOL)arg8 ;
-(int)readFromDisk:(_sFILE*)arg1 quantFactor:(short)arg2 ;
-(int)straightForwardForChunkFour;
-(int)chunkFourForward;
@end

