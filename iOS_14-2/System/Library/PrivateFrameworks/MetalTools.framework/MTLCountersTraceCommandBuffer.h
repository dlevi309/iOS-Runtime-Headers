/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)waitUntilCompleted;
-(void)waitUntilScheduled;
-(void)presentDrawable:(id)arg1 ;
-(id)computeCommandEncoder;
-(id)resourceStateCommandEncoder;
-(id)renderCommandEncoder;
-(id)blitCommandEncoder;
-(void)presentDrawable:(id)arg1 atTime:(double)arg2 ;
-(void)dealloc;
-(id)init:(BOOL)arg1 ;
-(void)appendSamples:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)saveCommandBuffer:(const void*)arg1 queue:(id)arg2 profilingResults:(id)arg3 ;
@end

