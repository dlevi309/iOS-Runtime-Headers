/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@protocol OS_dispatch_queue;
#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSObject, NSMutableArray;

@interface VCPVideoProcessorSession : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _nodes;
	BOOL _modified;
	SCD_Struct_VC6 _startTime;
	CF<opaqueCMSampleBuffer *>* _nextSampleBuffer;
	unsigned long long _frameCount;
	unsigned _orientation;

}

@property (assign,nonatomic) unsigned orientation;              //@synthesize orientation=_orientation - In the implementation block
-(id)init;
-(BOOL)removeRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)shouldProcessSampleWithTimeRange:(SCD_Struct_VC7)arg1 atSamplingInterval:(SCD_Struct_VC6)arg2 ;
-(BOOL)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 withEndTime:(SCD_Struct_VC6)arg2 error:(id*)arg3 ;
-(BOOL)addRequest:(id)arg1 withConfiguration:(id)arg2 error:(id*)arg3 ;
-(BOOL)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(BOOL)flushWithEndTime:(SCD_Struct_VC6)arg1 error:(id*)arg2 ;
-(unsigned)orientation;
-(void)setOrientation:(unsigned)arg1 ;
@end

