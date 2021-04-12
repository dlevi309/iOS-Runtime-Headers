/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableDictionary;

@interface VCVideoFrameBufferPool : NSObject {

	int _maxBufferCount;
	NSMutableDictionary* _bufferPool;

}
-(void)dealloc;
-(id)initWithCapacity:(int)arg1 ;
-(BOOL)addFrame:(CVBufferRef)arg1 time:(long long)arg2 ;
-(BOOL)releaseFrameWithTime:(long long)arg1 ;
@end

