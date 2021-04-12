/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <AudioServerDriver/ASDStream.h>

@protocol OS_dispatch_queue;
@class ASDAudioDevice, NSObject, NSArray;

@interface ASDSRCStream : ASDStream {

	ASDAudioDevice* _owningDevice;
	unique_ptr<ASDSRCStreamHelper, std::__1::default_delete<ASDSRCStreamHelper> >* _streamHelper;
	NSObject*<OS_dispatch_queue> _srcQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	BOOL _isRunning;
	long long _maximumFramesPerIOCycle;
	long long _ioReferenceCount;
	NSArray* _underlyingStreams;

}

@property (nonatomic,copy) NSArray * underlyingStreams;                        //@synthesize underlyingStreams=_underlyingStreams - In the implementation block
@property (nonatomic,readonly) long long maximumFramesPerIOCycle; 
-(void)stopStream;
-(void)startStream;
-(/*^block*/id)readInputBlock;
-(/*^block*/id)writeMixBlock;
-(id)initWithDirection:(unsigned)arg1 withPlugin:(id)arg2 ;
-(void)_updateMaximumFramesPerIOCycle;
-(BOOL)_allocateStreamingResources;
-(void)_deallocateStreamingResources;
-(long long)maximumFramesPerIOCycle;
-(void)_updateLatency;
-(id)initWithOwningDevice:(id)arg1 underlyingStreams:(id)arg2 direction:(unsigned)arg3 plugin:(id)arg4 ;
-(void)setUnderlyingStreams:(NSArray *)arg1 ;
-(NSArray *)underlyingStreams;
-(BOOL)changePhysicalFormat:(id)arg1 ;
-(void)updateLatency;
@end

