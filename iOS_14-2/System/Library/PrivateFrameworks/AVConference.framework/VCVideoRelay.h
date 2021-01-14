/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSMutableArray, NSObject;

@interface VCVideoRelay : NSObject {

	NSMutableArray* _videoCaptureSinks;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)enqueueFrame:(CVBufferRef)arg1 atTime:(SCD_Struct_VC84)arg2 cameraStatusBits:(unsigned char)arg3 ;
-(BOOL)registerForVideoFrames:(id)arg1 ;
-(BOOL)deregisterForVideoFrames:(id)arg1 ;
@end

