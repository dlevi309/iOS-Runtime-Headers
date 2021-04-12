/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

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
-(void)dealloc;
-(id)nodeType;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(void)_releaseResources;
-(id)initWithSynchronizedSlaveAttachedMediaDecompressionEnabled:(BOOL)arg1 ;
-(void)setDownstreamIsSharingOutputPool:(BOOL)arg1 ;
-(void)addEmitSampleBufferSemaphore:(id)arg1 ;
-(unsigned long long)addEmitSynchronizedSlaveSampleBufferSemaphore:(id)arg1 ;
-(BOOL)downstreamIsSharingOutputPool;
-(void)setSynchronizedSlaveSemaphoreEnabled:(BOOL)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_ensureSemaphoresAreBalanced;
@end

