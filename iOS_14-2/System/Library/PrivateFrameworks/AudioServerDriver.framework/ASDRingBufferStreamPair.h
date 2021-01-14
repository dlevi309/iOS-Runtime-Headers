/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
*/


@protocol ASDManagedRingBuffer;
@class ASDStream;

@interface ASDRingBufferStreamPair : NSObject {

	ASDStream* _inputStream;
	ASDStream* _outputStream;
	long long _ringBufferFrameCapacity;
	id<ASDManagedRingBuffer> _ringBuffer;

}

@property (nonatomic,readonly) id<ASDManagedRingBuffer> ringBuffer;              //@synthesize ringBuffer=_ringBuffer - In the implementation block
@property (nonatomic,readonly) ASDStream * inputStream;                          //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) ASDStream * outputStream;                         //@synthesize outputStream=_outputStream - In the implementation block
@property (assign,nonatomic) long long ringBufferFrameCapacity;                  //@synthesize ringBufferFrameCapacity=_ringBufferFrameCapacity - In the implementation block
-(ASDStream *)outputStream;
-(ASDStream *)inputStream;
-(id<ASDManagedRingBuffer>)ringBuffer;
-(id)initWithRingBufferFrameCapacity:(long long)arg1 withPlugin:(id)arg2 ;
-(void)setRingBufferFrameCapacity:(long long)arg1 ;
-(long long)ringBufferFrameCapacity;
@end

