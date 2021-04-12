/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <AudioServerDriver/ASDStream.h>

@protocol ASDManagedRingBuffer;
@interface ASDRingBufferInputStream : ASDStream {

	unique_ptr<ASDBufferList, std::__1::default_delete<ASDBufferList> >* _bufferList;
	id<ASDManagedRingBuffer> _ringBuffer;

}

@property (nonatomic,readonly) id<ASDManagedRingBuffer> ringBuffer;              //@synthesize ringBuffer=_ringBuffer - In the implementation block
-(void)stopStream;
-(void)startStream;
-(/*^block*/id)readInputBlock;
-(id)initWithDirection:(unsigned)arg1 withPlugin:(id)arg2 ;
-(void)setPhysicalFormat:(id)arg1 ;
-(id<ASDManagedRingBuffer>)ringBuffer;
-(id)initWithRingBuffer:(id)arg1 withPlugin:(id)arg2 ;
@end

