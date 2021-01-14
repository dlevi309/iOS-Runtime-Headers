/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)delegate;
-(void)flushBuffer;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 bufferLength:(int)arg2 dispatchQueue:(id)arg3 ;
-(int)getCount;
-(opaqueCMSampleBufferRef)getClosestSampleForTimestamp:(unsigned)arg1 ;
-(void)updateBufferWithSample:(opaqueCMSampleBufferRef)arg1 timestamp:(unsigned)arg2 ;
-(void)dequeueOneFrame;
-(unsigned)getUpdatedTimestampWithTimestamp:(unsigned)arg1 ;
-(void)enqueueWithSample:(opaqueCMSampleBufferRef)arg1 timestamp:(unsigned)arg2 ;
@end

