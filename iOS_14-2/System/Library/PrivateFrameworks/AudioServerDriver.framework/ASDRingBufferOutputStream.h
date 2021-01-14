/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <AudioServerDriver/ASDStream.h>

@protocol ASDManagedRingBuffer;
@interface ASDRingBufferOutputStream : ASDStream {

	unique_ptr<ASDBufferList, std::__1::default_delete<ASDBufferList> >* _bufferList;
	id<ASDManagedRingBuffer> _ringBuffer;

}

@property (nonatomic,readonly) id<ASDManagedRingBuffer> ringBuffer;              //@synthesize ringBuffer=_ringBuffer - In the implementation block
-(void)stopStream;
-(void)startStream;
-(void)setPhysicalFormat:(id)arg1 ;
-(/*^block*/id)writeMixBlock;
-(id)initWithDirection:(unsigned)arg1 withPlugin:(id)arg2 ;
-(id<ASDManagedRingBuffer>)ringBuffer;
-(id)initWithRingBuffer:(id)arg1 withPlugin:(id)arg2 ;
@end

