/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VCPCNNBlock.h>

@interface VCPCNNPoolingBlock : VCPCNNBlock {

	int _px;
	int _py;
	int _chunk;

}
+(id)poolingBlockWithPoolX:(int)arg1 poolY:(int)arg2 chunk:(int)arg3 ;
-(int)forward;
-(id)initWithParameters:(int)arg1 poolY:(int)arg2 chunk:(int)arg3 ;
-(BOOL)supportGPU;
-(BOOL)useGPU;
-(int)constructBlock:(id)arg1 context:(id)arg2 ;
@end

