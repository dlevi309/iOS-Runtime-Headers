/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableArray, NSMutableDictionary;

@interface VCMomentsHistoryBuffer : NSObject {

	id _delegate;
	int _bufferLength;
	NSMutableArray* _timestampQueue;
	NSMutableDictionary* _sampleMap;
	unsigned _lastTimestamp;

}
-(void)dealloc;
-(id)delegate;
-(id)initWithDelegate:(id)arg1 bufferLength:(int)arg2 dispatchQueue:(id)arg3 ;
-(int)getCount;
-(opaqueCMSampleBufferRef)getClosestSampleForTimestamp:(unsigned)arg1 ;
-(void)updateBufferWithSample:(opaqueCMSampleBufferRef)arg1 timestamp:(unsigned)arg2 ;
-(void)flushBuffer;
-(void)dequeueOneFrame;
-(unsigned)getUpdatedTimestampWithTimestamp:(unsigned)arg1 ;
-(void)enqueueWithSample:(opaqueCMSampleBufferRef)arg1 timestamp:(unsigned)arg2 ;
@end

