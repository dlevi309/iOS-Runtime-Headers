/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class BWPhotoDecompressor, NSMutableArray, NSMutableSet;

@interface BWPhotoDecompressorNode : BWNode {

	BOOL _downstreamIsSharingOutputPool;
	BOOL _synchronizedSlaveAttachedMediaDecompressionEnabled;
	BWPhotoDecompressor* _photoDecompressor;
	BWPhotoDecompressor* _synchronizedSlavePhotoDecompressor;
	NSMutableArray* _emitSampleBufferSemaphores;
	NSMutableArray* _emitSynchronizedSlaveSampleBufferSemaphores;
	NSMutableSet* _disabledSynchronizedSlaveSemaphores;
	int _numberOfTimesWaited;
	int _numberOfBuffersEmitted;
	int _numberOfTimesSynchronizedSlaveWaited;
	int _numberOfSynchronizedSlaveBuffersEmitted;

}
+(void)initialize;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeType;
-(id)nodeSubType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(void)_setOverCaptureSynchronizedSlaveSemaphoreEnabled:(BOOL)arg1 ;
-(id)initWithSynchronizedSlaveAttachedMediaDecompressionEnabled:(BOOL)arg1 ;
-(void)addEmitSampleBufferSemaphore:(id)arg1 ;
-(BOOL)downstreamIsSharingOutputPool;
-(void)addEmitSynchronizedSlaveSampleBufferSemaphore:(id)arg1 ;
-(void)setDownstreamIsSharingOutputPool:(BOOL)arg1 ;
-(void)_releaseResources;
-(void)_ensureSemaphoresAreBalanced;
-(void)dealloc;
@end

