/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

