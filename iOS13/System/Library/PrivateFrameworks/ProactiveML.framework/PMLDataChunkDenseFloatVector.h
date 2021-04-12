/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/PMLDataChunk.h>

@interface PMLDataChunkDenseFloatVector : PMLDataChunk

@property (nonatomic,readonly) int count; 
@property (nonatomic,readonly) const float* vector; 
+(unsigned)dataChunkType;
+(id)chunkWithVector:(const float*)arg1 count:(int)arg2 ;
-(int)count;
-(const float*)vector;
-(id)toVec;
@end

