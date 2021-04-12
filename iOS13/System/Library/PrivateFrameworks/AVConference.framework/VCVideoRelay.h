/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSMutableArray, NSObject;

@interface VCVideoRelay : NSObject {

	NSMutableArray* _videoCaptureClients;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)enqueueFrame:(CVBufferRef)arg1 atTime:(SCD_Struct_AV77)arg2 cameraStatusBits:(unsigned char)arg3 ;
-(BOOL)registerForVideoFrames:(id)arg1 ;
-(BOOL)deregisterForVideoFrames:(id)arg1 ;
@end

