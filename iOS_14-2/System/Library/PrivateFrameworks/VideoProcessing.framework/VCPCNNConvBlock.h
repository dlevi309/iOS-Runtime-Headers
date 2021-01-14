/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VCPCNNBlock.h>

@class VCPCNNData;

@interface VCPCNNConvBlock : VCPCNNBlock {

	int _filterSize;
	int _filterNum;
	VCPCNNData* _filter;
	VCPCNNData* _bias;
	int _chunk;
	BOOL _reLU;
	int _padding;
	int _padSize;
	int _stride;
	int _groups;
	BOOL _batchNorm;

}
+(Class)convBlockClass:(int)arg1 ;
+(id)convBlockWithFilterSize:(int)arg1 filterNum:(int)arg2 chunk:(int)arg3 reLU:(BOOL)arg4 padding:(BOOL)arg5 ;
+(id)convBlockWithFilterSize:(int)arg1 filterNum:(int)arg2 chunk:(int)arg3 reLU:(BOOL)arg4 padding:(BOOL)arg5 groups:(int)arg6 stride:(int)arg7 batchNorm:(BOOL)arg8 ;
-(BOOL)supportGPU;
-(id)initWithParameters:(int)arg1 filterNum:(int)arg2 chunk:(int)arg3 reLU:(BOOL)arg4 padding:(BOOL)arg5 groups:(int)arg6 stride:(int)arg7 batchNorm:(BOOL)arg8 ;
-(BOOL)useGPU;
-(int)constructBlock:(id)arg1 context:(id)arg2 ;
@end

