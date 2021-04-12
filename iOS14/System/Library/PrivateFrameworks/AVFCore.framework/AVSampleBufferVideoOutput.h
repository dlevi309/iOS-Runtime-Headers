/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVSampleBufferVideoOutputInternal;

@interface AVSampleBufferVideoOutput : NSObject {

	AVSampleBufferVideoOutputInternal* _videoOutputInternal;

}

@property (nonatomic,__weak,readonly) id<AVSampleBufferVideoOutputPullDelegate> outputDelegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
-(id)init;
-(id<AVSampleBufferVideoOutputPullDelegate>)outputDelegate;
-(void)_resetLastImageTime;
-(CVBufferRef)copyLastPixelBuffer:(SCD_Struct_AV6*)arg1 ;
-(BOOL)setUpWithOutputSettings:(id)arg1 outputSettingsArePixelBufferAttributes:(BOOL)arg2 withExceptionReason:(id*)arg3 ;
-(CVBufferRef)_copyPixelBufferForItemTimeWithOptions:(SCD_Struct_AV6)arg1 itemTimeForDisplay:(SCD_Struct_AV6*)arg2 options:(unsigned)arg3 ;
-(void)setOutputDelegate:(id)arg1 queue:(id)arg2 ;
-(CVBufferRef)copyPixelBufferForSourceTime:(SCD_Struct_AV6)arg1 sourceTimeForDisplay:(SCD_Struct_AV6*)arg2 ;
-(BOOL)hasNewPixelBufferForSourceTime:(SCD_Struct_AV6)arg1 ;
-(BOOL)_configureWithVideoQueue:(OpaqueFigVideoQueueRef)arg1 ;
-(void)_dispatchOutputSequenceWasFlushed;
-(id)_weakReference;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)dealloc;
@end

