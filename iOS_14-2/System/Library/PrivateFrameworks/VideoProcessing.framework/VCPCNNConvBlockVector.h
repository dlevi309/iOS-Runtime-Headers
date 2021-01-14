/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

