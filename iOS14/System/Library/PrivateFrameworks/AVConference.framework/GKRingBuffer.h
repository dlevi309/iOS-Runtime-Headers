/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@interface GKRingBuffer : NSObject {

	void* ringBufRef;
	unsigned endTime;
	unsigned capacity;
	unsigned bytesPerFrame;

}
-(id)init;
-(void)dealloc;
-(id)initWithCapacity:(unsigned)arg1 bytesPerFrame:(unsigned)arg2 ;
-(void)increaseCapacity:(unsigned)arg1 ;
-(BOOL)store:(char*)arg1 numSamples:(unsigned)arg2 timestamp:(unsigned)arg3 ;
-(int)needsNewNumSamples:(unsigned)arg1 timestamp:(unsigned)arg2 ;
-(int)fetch:(char*)arg1 numSamples:(unsigned)arg2 timestamp:(unsigned)arg3 ;
@end

