/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableDictionary;

@interface VCVideoFrameBufferPool : NSObject {

	int _maxBufferCount;
	NSMutableDictionary* _bufferPool;

}
-(id)initWithCapacity:(int)arg1 ;
-(void)dealloc;
-(BOOL)addFrame:(CVBufferRef)arg1 time:(long long)arg2 ;
-(BOOL)releaseFrameWithTime:(long long)arg1 ;
@end

