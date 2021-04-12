/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VCPCNNBlock.h>

@interface VCPCNNPoolingBlock : VCPCNNBlock {

	int _px;
	int _py;
	int _chunk;

}
+(id)poolingBlockWithPoolX:(int)arg1 poolY:(int)arg2 chunk:(int)arg3 ;
-(BOOL)useGPU;
-(int)forward;
-(BOOL)supportGPU;
-(int)constructBlock:(id)arg1 context:(id)arg2 ;
-(id)initWithParameters:(int)arg1 poolY:(int)arg2 chunk:(int)arg3 ;
@end

