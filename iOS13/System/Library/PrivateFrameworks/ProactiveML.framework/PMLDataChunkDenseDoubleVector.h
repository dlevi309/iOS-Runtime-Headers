/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/PMLDataChunk.h>

@interface PMLDataChunkDenseDoubleVector : PMLDataChunk

@property (nonatomic,readonly) int count; 
@property (nonatomic,readonly) const double* vector; 
+(unsigned)dataChunkType;
+(id)chunkWithVector:(const double*)arg1 count:(int)arg2 ;
-(int)count;
-(const double*)vector;
@end

