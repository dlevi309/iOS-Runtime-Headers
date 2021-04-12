/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/


#import <MetalTools/MetalTools-Structs.h>
@class NSMutableArray;

@interface MTLCountersTraceCommandBuffer : NSObject {

	BinaryBuffer* _commands;
	NSMutableArray* _encoders;
	AppendBuffer* _samples;
	unsigned long long _flags;
	unsigned long long _timestamp;

}
-(void)dealloc;
-(id)computeCommandEncoder;
-(void)waitUntilCompleted;
-(id)blitCommandEncoder;
-(void)presentDrawable:(id)arg1 ;
-(void)waitUntilScheduled;
-(void)presentDrawable:(id)arg1 atTime:(double)arg2 ;
-(id)resourceStateCommandEncoder;
-(id)init:(BOOL)arg1 ;
-(id)renderCommandEncoder;
-(void)appendSamples:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)saveCommandBuffer:(const void*)arg1 queue:(id)arg2 profilingResults:(id)arg3 ;
@end

