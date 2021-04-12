/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

